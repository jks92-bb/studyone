using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BookManager
{
    public partial class Form1 : Form
    {
        //변수타입
        // 메서드 저장하는 변수임.
        // 반환형은 bool, 매개변수는 Book를 갖는 메서드를 저장.
        delegate bool CheckFunc(Book book); //지금 사용하지 않음.
        private bool checkIsBorrowed(Book b)
        {
            return b.isBorrowed;
        }


        void refreshScreen()
        {
            label1.Text = "전체 도서수 :" + DataManager.books.Count;
            label2.Text = "전체 회원수 :" + DataManager.users.Count;
            //CheckFunc CheckBorrowed = (b) =>
            //{
            //    return b.isBorrowed;
            //};
            //where: 매개변수로 메서드를 받음
            // 매개변수가 Book타입 변수 1개이고 반환형이 bool형태인
            //메서드를 람다나 델리게이트나 메서드 이름이나 이런 형태로 집어넣음.


            label3.Text = "대출중인 도서의 수 :" +
                DataManager.books.Where((b) =>
            {
                return b.isBorrowed;
            }).Count();

            label4.Text = "연체중인 도서의 수 :" +
                DataManager.books.Where(
                    delegate (Book b)
                    {
                        return b.isBorrowed &&
                        b.BorrowedAt.AddDays(7) < DateTime.Now; //연체후 7일 지나면 연체.
                    }).Count();

            bookBindingSource.DataSource = null;
            userBindingSource.DataSource = null;
            if (DataManager.books.Count > 0)
            {
                bookBindingSource.DataSource = DataManager.books;
            }
            if (DataManager.users.Count > 0)
            {
                userBindingSource.DataSource = DataManager.users;
            }

        }

        public Form1()
        {

            InitializeComponent();
            dataGridView1.Columns[0].HeaderText = "ISBN";
            dataGridView1.Columns[1].HeaderText = "책이름";
            dataGridView1.Columns[2].HeaderText = "출판사";
            dataGridView1.Columns[3].HeaderText = "페이지";
            dataGridView1.Columns[4].HeaderText = "회원ID";
            dataGridView1.Columns[5].HeaderText = "회원명";

            dataGridView1.Columns[6].HeaderText = "대여 여부";
            dataGridView1.Columns[7].HeaderText = "대여 시점";
            label5.Text = DateTime.Now.ToString("yyyy년 MM월 dd일 HH시 mm분 ss초");
            refreshScreen();
            dataGridView1.CellClick += (s, e) =>
            {
                Book book = (s as DataGridView).CurrentRow.DataBoundItem as Book;
                textBox1.Text = book.isbn;
                textBox2.Text = book.name;
            };
            DataGridViewCellEventHandler dCell2 = (s, e) =>
            {
                User u = (s as DataGridView).CurrentRow.DataBoundItem as User;
                textBox3.Text = u.Id;
            };
            dataGridView2.CellClick += dCell2;

            //EventHandler borrow = (s, e) =>
            //{

            //};


            EventHandler borrow = borrowBook;
            button1.Click += borrow;
            button2.Click += returnBook;



            void borrowBook(object s, EventArgs e)
            {
                if (textBox1.Text.Trim() == "")//양쪽 공백 지워도 아무것도 없다면
                    MessageBox.Show("isbn 없음");
                else if (textBox3.Text.Trim() == "")
                    MessageBox.Show("사용자 ID 없음");
                else
                {
                    try
                    {
                        Book b = DataManager.books.Single
                            (x => x.isbn == textBox1.Text); // (=>) o 띄어쓰기 조심. 오류남. (= >) X
                        if (b.isBorrowed)
                            MessageBox.Show("이미 빌린 책");
                        else
                        {
                            User u = DataManager.users.Single
                                (x => x.Id == textBox3.Text);
                            b.userId = u.Id;
                            b.userName = u.Name;
                            b.isBorrowed = true;
                            b.BorrowedAt = DateTime.Now;
                            DataManager.Save();
                            refreshScreen();
                            MessageBox.Show($"{b.name}책이{u.Name}님에게 대여됨.");
                        }
                    }
                    catch (Exception)
                    {

                        MessageBox.Show("없는 책 혹은 ID입니다.");
                    }
                }
            }

            void returnBook(object s, EventArgs e)
            {
                if (textBox1.Text.Trim() == "")
                {
                    MessageBox.Show("ISBN을 입력해주세요(반납)");
                }
                else
                {
                    try
                    {
                        Book b = DataManager.books.Single
                            (x=>x.isbn == textBox1.Text);
                        if (b.isBorrowed)//&& b.userId == textBox3.Text  반납할때 id도 필요하게 만드는 법. 
                        {
                            b.userId = "";
                            b.userName = "";
                            
                            b.isBorrowed = false;
                            DateTime oldDay = b.BorrowedAt;// 빌렸던 날짜 저장.
                            b.BorrowedAt = new DateTime(); //날짜 초기화.
                            DataManager.Save();
                            refreshScreen();    
                            TimeSpan timeDiff = DateTime.Now - oldDay;
                            if(timeDiff.Days > 7) {
                                MessageBox.Show(b.name+ "연체 반납");
                            }
                            else
                            {
                                MessageBox.Show(b.name+"책 정상반납");
                            }
                            
                        }
                        else
                        {
                            MessageBox.Show("안 빌렸으니 반납 불가.");
                        }
                    }
                    catch (Exception)
                    {

                        MessageBox.Show("존해하지 않는 책(반납)");
                    }
                }
            }
        }



        private void timer1_Tick(object sender, EventArgs e)
        {
            label5.Text = DateTime.Now.ToString("yyyy년 MM월 dd일 HH시 mm분 ss초");
        }

        private void 도서관리ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            new Form2().ShowDialog();
            refreshScreen();
        }

        private void 사용자관리ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            new Form3().ShowDialog();
            refreshScreen();
        }
    }
}
