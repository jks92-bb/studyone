namespace 맛집API해보기
{
    partial class Sign_Up
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
            this.IDlabel = new System.Windows.Forms.Label();
            this.PWDlabel = new System.Windows.Forms.Label();
            this.Namelabel = new System.Windows.Forms.Label();
            this.Queslabel = new System.Windows.Forms.Label();
            this.IDtextBox = new System.Windows.Forms.TextBox();
            this.PWDtextBox = new System.Windows.Forms.TextBox();
            this.NametextBox = new System.Windows.Forms.TextBox();
            this.QuestextBox = new System.Windows.Forms.TextBox();
            this.DCheckbutton = new System.Windows.Forms.Button();
            this.Checkbutton = new System.Windows.Forms.Button();
            this.Cancelbutton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(197, 42);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(110, 24);
            this.label1.TabIndex = 0;
            this.label1.Text = "회원가입";
            // 
            // IDlabel
            // 
            this.IDlabel.AutoSize = true;
            this.IDlabel.Location = new System.Drawing.Point(102, 143);
            this.IDlabel.Name = "IDlabel";
            this.IDlabel.Size = new System.Drawing.Size(41, 12);
            this.IDlabel.TabIndex = 1;
            this.IDlabel.Text = "아이디";
            // 
            // PWDlabel
            // 
            this.PWDlabel.AutoSize = true;
            this.PWDlabel.Location = new System.Drawing.Point(84, 216);
            this.PWDlabel.Name = "PWDlabel";
            this.PWDlabel.Size = new System.Drawing.Size(53, 12);
            this.PWDlabel.TabIndex = 2;
            this.PWDlabel.Text = "비밀번호";
            // 
            // Namelabel
            // 
            this.Namelabel.AutoSize = true;
            this.Namelabel.Location = new System.Drawing.Point(102, 291);
            this.Namelabel.Name = "Namelabel";
            this.Namelabel.Size = new System.Drawing.Size(29, 12);
            this.Namelabel.TabIndex = 3;
            this.Namelabel.Text = "이름";
            // 
            // Queslabel
            // 
            this.Queslabel.AutoSize = true;
            this.Queslabel.Location = new System.Drawing.Point(24, 357);
            this.Queslabel.Name = "Queslabel";
            this.Queslabel.Size = new System.Drawing.Size(119, 12);
            this.Queslabel.TabIndex = 4;
            this.Queslabel.Text = "가장좋아하는여행지?";
            // 
            // IDtextBox
            // 
            this.IDtextBox.Location = new System.Drawing.Point(169, 134);
            this.IDtextBox.Name = "IDtextBox";
            this.IDtextBox.Size = new System.Drawing.Size(100, 21);
            this.IDtextBox.TabIndex = 5;
            // 
            // PWDtextBox
            // 
            this.PWDtextBox.Location = new System.Drawing.Point(169, 216);
            this.PWDtextBox.Name = "PWDtextBox";
            this.PWDtextBox.Size = new System.Drawing.Size(100, 21);
            this.PWDtextBox.TabIndex = 6;
            this.PWDtextBox.UseSystemPasswordChar = true;
            // 
            // NametextBox
            // 
            this.NametextBox.Location = new System.Drawing.Point(169, 282);
            this.NametextBox.Name = "NametextBox";
            this.NametextBox.Size = new System.Drawing.Size(100, 21);
            this.NametextBox.TabIndex = 7;
            // 
            // QuestextBox
            // 
            this.QuestextBox.Location = new System.Drawing.Point(169, 354);
            this.QuestextBox.Name = "QuestextBox";
            this.QuestextBox.Size = new System.Drawing.Size(100, 21);
            this.QuestextBox.TabIndex = 8;
            // 
            // DCheckbutton
            // 
            this.DCheckbutton.Location = new System.Drawing.Point(285, 138);
            this.DCheckbutton.Name = "DCheckbutton";
            this.DCheckbutton.Size = new System.Drawing.Size(75, 23);
            this.DCheckbutton.TabIndex = 9;
            this.DCheckbutton.Text = "중복체크";
            this.DCheckbutton.UseVisualStyleBackColor = true;
            this.DCheckbutton.Click += new System.EventHandler(this.DCheckbutton_Click);
            // 
            // Checkbutton
            // 
            this.Checkbutton.Location = new System.Drawing.Point(254, 423);
            this.Checkbutton.Name = "Checkbutton";
            this.Checkbutton.Size = new System.Drawing.Size(75, 23);
            this.Checkbutton.TabIndex = 10;
            this.Checkbutton.Text = "확인";
            this.Checkbutton.UseVisualStyleBackColor = true;
            this.Checkbutton.Click += new System.EventHandler(this.Checkbutton_Click);
            // 
            // Cancelbutton
            // 
            this.Cancelbutton.Location = new System.Drawing.Point(335, 423);
            this.Cancelbutton.Name = "Cancelbutton";
            this.Cancelbutton.Size = new System.Drawing.Size(75, 23);
            this.Cancelbutton.TabIndex = 11;
            this.Cancelbutton.Text = "취소";
            this.Cancelbutton.UseVisualStyleBackColor = true;
            this.Cancelbutton.Click += new System.EventHandler(this.Cancelbutton_Click);
            // 
            // Sign_Up
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(434, 661);
            this.Controls.Add(this.Cancelbutton);
            this.Controls.Add(this.Checkbutton);
            this.Controls.Add(this.DCheckbutton);
            this.Controls.Add(this.QuestextBox);
            this.Controls.Add(this.NametextBox);
            this.Controls.Add(this.PWDtextBox);
            this.Controls.Add(this.IDtextBox);
            this.Controls.Add(this.Queslabel);
            this.Controls.Add(this.Namelabel);
            this.Controls.Add(this.PWDlabel);
            this.Controls.Add(this.IDlabel);
            this.Controls.Add(this.label1);
            this.MaximumSize = new System.Drawing.Size(450, 700);
            this.MinimumSize = new System.Drawing.Size(450, 700);
            this.Name = "Sign_Up";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Sign_Up";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label IDlabel;
        private System.Windows.Forms.Label PWDlabel;
        private System.Windows.Forms.Label Namelabel;
        private System.Windows.Forms.Label Queslabel;
        private System.Windows.Forms.TextBox IDtextBox;
        private System.Windows.Forms.TextBox PWDtextBox;
        private System.Windows.Forms.TextBox NametextBox;
        private System.Windows.Forms.TextBox QuestextBox;
        private System.Windows.Forms.Button DCheckbutton;
        private System.Windows.Forms.Button Checkbutton;
        private System.Windows.Forms.Button Cancelbutton;
    }
}