namespace 맛집API해보기
{
    partial class FindPWD
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.FNCheckbutton = new System.Windows.Forms.Button();
            this.FNametextBox = new System.Windows.Forms.TextBox();
            this.FNamelabel = new System.Windows.Forms.Label();
            this.FQtextBox = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.CancelFPWDbutton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(54, 36);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(169, 24);
            this.label1.TabIndex = 4;
            this.label1.Text = "비밀번호 찾기";
            // 
            // FNCheckbutton
            // 
            this.FNCheckbutton.Location = new System.Drawing.Point(123, 207);
            this.FNCheckbutton.Name = "FNCheckbutton";
            this.FNCheckbutton.Size = new System.Drawing.Size(75, 23);
            this.FNCheckbutton.TabIndex = 7;
            this.FNCheckbutton.Text = "확인";
            this.FNCheckbutton.UseVisualStyleBackColor = true;
            this.FNCheckbutton.Click += new System.EventHandler(this.FNCheckbutton_Click);
            // 
            // FNametextBox
            // 
            this.FNametextBox.Location = new System.Drawing.Point(123, 119);
            this.FNametextBox.Name = "FNametextBox";
            this.FNametextBox.Size = new System.Drawing.Size(100, 21);
            this.FNametextBox.TabIndex = 6;
            // 
            // FNamelabel
            // 
            this.FNamelabel.AutoSize = true;
            this.FNamelabel.Location = new System.Drawing.Point(76, 122);
            this.FNamelabel.Name = "FNamelabel";
            this.FNamelabel.Size = new System.Drawing.Size(41, 12);
            this.FNamelabel.TabIndex = 5;
            this.FNamelabel.Text = "아이디";
            // 
            // FQtextBox
            // 
            this.FQtextBox.Location = new System.Drawing.Point(123, 156);
            this.FQtextBox.Name = "FQtextBox";
            this.FQtextBox.Size = new System.Drawing.Size(100, 21);
            this.FQtextBox.TabIndex = 9;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(-2, 159);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(119, 12);
            this.label2.TabIndex = 8;
            this.label2.Text = "가장좋아하는여행지?";
            // 
            // CancelFPWDbutton
            // 
            this.CancelFPWDbutton.Location = new System.Drawing.Point(204, 207);
            this.CancelFPWDbutton.Name = "CancelFPWDbutton";
            this.CancelFPWDbutton.Size = new System.Drawing.Size(75, 23);
            this.CancelFPWDbutton.TabIndex = 10;
            this.CancelFPWDbutton.Text = "취소";
            this.CancelFPWDbutton.UseVisualStyleBackColor = true;
            this.CancelFPWDbutton.Click += new System.EventHandler(this.CancelFPWDbutton_Click);
            // 
            // FindPWD
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 361);
            this.Controls.Add(this.CancelFPWDbutton);
            this.Controls.Add(this.FQtextBox);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.FNCheckbutton);
            this.Controls.Add(this.FNametextBox);
            this.Controls.Add(this.FNamelabel);
            this.Controls.Add(this.label1);
            this.MaximumSize = new System.Drawing.Size(300, 400);
            this.MinimumSize = new System.Drawing.Size(300, 400);
            this.Name = "FindPWD";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "FindPWD";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button FNCheckbutton;
        private System.Windows.Forms.TextBox FNametextBox;
        private System.Windows.Forms.Label FNamelabel;
        private System.Windows.Forms.TextBox FQtextBox;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button CancelFPWDbutton;
    }
}