namespace 맛집API해보기
{
    partial class FindID
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
            this.FNamelabel = new System.Windows.Forms.Label();
            this.FNametextBox = new System.Windows.Forms.TextBox();
            this.FNCheckbutton = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.CancelFIDbutton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // FNamelabel
            // 
            this.FNamelabel.AutoSize = true;
            this.FNamelabel.Location = new System.Drawing.Point(59, 141);
            this.FNamelabel.Name = "FNamelabel";
            this.FNamelabel.Size = new System.Drawing.Size(29, 12);
            this.FNamelabel.TabIndex = 0;
            this.FNamelabel.Text = "이름";
            // 
            // FNametextBox
            // 
            this.FNametextBox.Location = new System.Drawing.Point(94, 138);
            this.FNametextBox.Name = "FNametextBox";
            this.FNametextBox.Size = new System.Drawing.Size(100, 21);
            this.FNametextBox.TabIndex = 1;
            // 
            // FNCheckbutton
            // 
            this.FNCheckbutton.Location = new System.Drawing.Point(116, 236);
            this.FNCheckbutton.Name = "FNCheckbutton";
            this.FNCheckbutton.Size = new System.Drawing.Size(75, 23);
            this.FNCheckbutton.TabIndex = 2;
            this.FNCheckbutton.Text = "확인";
            this.FNCheckbutton.UseVisualStyleBackColor = true;
            this.FNCheckbutton.Click += new System.EventHandler(this.FNCheckbutton_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(65, 38);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(144, 24);
            this.label1.TabIndex = 3;
            this.label1.Text = "아이디 찾기";
            // 
            // CancelFIDbutton
            // 
            this.CancelFIDbutton.Location = new System.Drawing.Point(197, 236);
            this.CancelFIDbutton.Name = "CancelFIDbutton";
            this.CancelFIDbutton.Size = new System.Drawing.Size(75, 23);
            this.CancelFIDbutton.TabIndex = 11;
            this.CancelFIDbutton.Text = "취소";
            this.CancelFIDbutton.UseVisualStyleBackColor = true;
            this.CancelFIDbutton.Click += new System.EventHandler(this.CancelFIDbutton_Click);
            // 
            // FindID
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 361);
            this.Controls.Add(this.CancelFIDbutton);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.FNCheckbutton);
            this.Controls.Add(this.FNametextBox);
            this.Controls.Add(this.FNamelabel);
            this.MaximumSize = new System.Drawing.Size(300, 400);
            this.MinimumSize = new System.Drawing.Size(300, 400);
            this.Name = "FindID";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "FindID";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label FNamelabel;
        private System.Windows.Forms.TextBox FNametextBox;
        private System.Windows.Forms.Button FNCheckbutton;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button CancelFIDbutton;
    }
}