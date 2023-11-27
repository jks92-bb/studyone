using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 맛집API해보기
{
    public partial class FindPWD : Form
    {
        private bool passwordFound;
        public FindPWD()
        {
            InitializeComponent();
            // 폼에 KeyDown 이벤트 핸들러 등록
            this.KeyPreview = true;
            this.KeyDown += FormEvent.CloseFormOnEscKey;
            this.StartPosition = FormStartPosition.CenterScreen;

            
           
        }

        

        Bitmap bit;
        protected override void OnLoad(EventArgs e)
        {
            bit = Properties.Resources.Good;

            ImageAnimator.Animate(bit, new EventHandler(this.OnFrameChanged));

            base.OnLoad(e);
        }
        #region gif 테스트
        protected override void OnPaint(PaintEventArgs e)

        {

            ImageAnimator.UpdateFrames();

            Graphics g = Goodpeco.CreateGraphics();
            g.Clear(Color.White); // 흰색으로 배경을 지운다.
            g.DrawImage(this.bit, new Point(0, 0));

            base.OnPaint(e);

        }
        #endregion
        private void OnFrameChanged(object sender, EventArgs e)

        {

            this.Invalidate();

        }

        // 취소 버튼 눌렀을 때
        private void CancelFPWDbutton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        // 확인 버튼 눌렀을 때
        private void FNCheckbutton_Click(object sender, EventArgs e)
        {
            try
            {
                // 비밀번호 찾기 (질문 기반)
                string findPWD = DBUserHelper.FindUserPWDByQues(FNametextBox.Text, FQtextBox.Text);

                if (findPWD != null)
                {
                    // 비밀번호 찾았을때 플래그.
                    passwordFound = true;
                    MessageBox.Show($"비밀번호: {findPWD}");

                }
                else
                {
                    MessageBox.Show("비밀번호를 찾을 수 없습니다.");
                }

            }
            catch (Exception ex)
            {
                MessageBox.Show($"오류: {ex.Message}");
            }
            finally
            {
                Goodpeco.Visible = passwordFound;
            }

        }
        //private void Goodpeco()
        //{
        //    PictureBox pictureBox = new PictureBox();   
        //    pictureBox.Size = new Size(100,100);
        //    pictureBox.SizeMode = PictureBoxSizeMode.StretchImage;
        //    pictureBox.Location = new Point((this.ClientSize.Width - pictureBox.Width) / 2, (this.ClientSize.Height - pictureBox.Height) / 2);
        //    this.Controls.Add(pictureBox);

        //    // GIF 이미지 로드
        //    bit = Properties.Resources.Good;
        //    ImageAnimator.Animate(bit, new EventHandler(this.OnFrameChanged));


        //}
        #region 온페인트
        //protected override void OnPaint(PaintEventArgs e)
        //{
        //    ImageAnimator.UpdateFrames();

        //    // PictureBox의 배경을 흰색으로 지웁니다.
        //    using (Graphics g = Graphics.FromImage(bit))
        //    {
        //        g.Clear(Color.White);
        //    }

        //    g.DrawImage(this.bit, new Point(0, 0));

        //    base.OnPaint(e);



        //    // PictureBox에 이미지를 그립니다.
        //    using (Graphics g = PictureBox.CreateGraphics())
        //    {
        //        g.DrawImage(bit, new Point(0, 0));
        //    }

        //    base.OnPaint(e);
        //}
        #endregion





    }
}
