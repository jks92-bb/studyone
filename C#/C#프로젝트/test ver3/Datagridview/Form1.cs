using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Datagridview
{
    public partial class Form1 : Form
    {
        int PageCount;
        int maxRec;
        int pageSize;
        int currentPage;
        int recNo;
        DataSet ds;
        DataTable dt = new DataTable();
        SqlDataAdapter da;
        public Form1()
        {
            InitializeComponent();
        }
        private void btn조회_Click(object sender, EventArgs e)
        {
            SqlConnection conn = new SqlConnection("Server=host;Database=dbname;User ID=uid;Password=pwd");
            da = new SqlDataAdapter("SELECT ROW_Number() over (order by ID), MachineTime FROM  EventLogs with (nolock) order by ID", conn);
            ds = new DataSet();
            //Fill the DataSet.
            da.Fill(ds, "EventLogs");
            dt = ds.Tables["EventLogs"];
            // Set the start and max records. 
            pageSize = Convert.ToInt32(txtPageSize.Text);
            maxRec = dt.Rows.Count;
            PageCount = maxRec / pageSize;
            //Adjust the page number if the last page contains a partial page.
            if ((maxRec % pageSize) > 0)
            {
                PageCount += 1;
            }
            // Initial seeings
            currentPage = 1;
            recNo = 0;
            // Display the content of the current page.
            LoadPage();
        }
        private void LoadPage()
        {
            int i;
            int startRec;
            int endRec;
            DataTable dtTemp;
            //Clone the source table to create a temporary table.
            dtTemp = dt.Clone();
            if (currentPage == PageCount)
            {
                endRec = maxRec;
            }
            else
            {
                endRec = pageSize * currentPage;
            }
            startRec = recNo;
            //Copy rows from the source table to fill the temporary table.
            for (i = startRec; i < endRec; i++)
            {
                dtTemp.ImportRow(dt.Rows[i]);
                recNo += 1;
            }
            dataGridView1.DataSource = dtTemp;
            DisplayPageInfo();
        }
        private void DisplayPageInfo()
        {
            label1.Text = "Page " + currentPage.ToString() + "/ " + PageCount.ToString();
        }
        private bool CheckFillButton()
        {
            // Check if the user clicks the "Fill Grid" button.
            if (pageSize == 0)
            {
                MessageBox.Show("Set the Page Size, and then click the Fill Grid button!");
                return false;
            }
            else
            {
                return true;
            }
        }
        private void btnFirst_Click(object sender, EventArgs e)
        {
            if (CheckFillButton() == false)
            {
                return;
            }
            //Check if you are already at the first page.
            if (currentPage == 1)
            {
                MessageBox.Show("You are at the First Page!");
                return;
            }
            currentPage = 1;
            recNo = 0;
            LoadPage();
        }
        private void btnNext_Click(object sender, EventArgs e)
        {
            //If the user did not click the "Fill Grid" button, then return.
            if (CheckFillButton() == false)
            {
                return;
            }
            //Check if the user clicks the "Fill Grid" button.
            if (pageSize == 0)
            {
                MessageBox.Show("Set the Page Size, and then click the Fill Grid button!");
                return;
            }
            currentPage += 1;
            if (currentPage > PageCount)
            {
                currentPage = PageCount;
                //Check if you are already at the last page.
                if (recNo == maxRec)
                {
                    MessageBox.Show("You are at the Last Page!");
                    return;
                }
            }
            LoadPage();
        }
        private void btnPre_Click(object sender, EventArgs e)
        {
            if (CheckFillButton() == false)
            {
                return;
            }
            if (currentPage == PageCount)
            {
                recNo = pageSize * (currentPage - 2);
            }
            currentPage -= 1;
            //Check if you are already at the first page.
            if (currentPage < 1)
            {
                MessageBox.Show("You are at the First Page!");
                currentPage = 1;
                return;
            }
            else
            {
                recNo = pageSize * (currentPage - 1);
            }
            LoadPage();
        }
        private void btnLast_Click(object sender, EventArgs e)
        {
            if (CheckFillButton() == false)
            {
                return;
            }
            //Check if you are already at the last page.
            if (recNo == maxRec)
            {
                MessageBox.Show("You are at the Last Page!");
                return;
            }
            currentPage = PageCount;
            recNo = pageSize * (currentPage - 1);
            LoadPage();
        }
    }
}
