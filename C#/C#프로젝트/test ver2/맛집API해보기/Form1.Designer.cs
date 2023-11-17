namespace 맛집API해보기
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.LogOutpictureBox = new System.Windows.Forms.PictureBox();
            this.Left_panel = new System.Windows.Forms.Panel();
            this.Side_panel = new System.Windows.Forms.Panel();
            this.button3 = new System.Windows.Forms.Button();
            this.MyPlace_button = new System.Windows.Forms.Button();
            this.Home_button = new System.Windows.Forms.Button();
            this.Top_panel = new System.Windows.Forms.Panel();
            this.dalseonggun_button2 = new System.Windows.Forms.Button();
            this.suseonggu_button = new System.Windows.Forms.Button();
            this.namgu_button = new System.Windows.Forms.Button();
            this.seogu_button = new System.Windows.Forms.Button();
            this.dalseogu_button = new System.Windows.Forms.Button();
            this.dalseonggun_button = new System.Windows.Forms.Button();
            this.bukgu_button = new System.Windows.Forms.Button();
            this.donggu_button = new System.Windows.Forms.Button();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.junggu_button = new 맛집API해보기.CircularButton();
            this.myPlace1 = new 맛집API해보기.MyPlace();
            ((System.ComponentModel.ISupportInitialize)(this.LogOutpictureBox)).BeginInit();
            this.Left_panel.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(832, 12);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 2;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(673, 14);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(119, 36);
            this.button2.TabIndex = 3;
            this.button2.Text = "전체조회 테스트중";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // LogOutpictureBox
            // 
            this.LogOutpictureBox.Cursor = System.Windows.Forms.Cursors.Hand;
            this.LogOutpictureBox.Image = ((System.Drawing.Image)(resources.GetObject("LogOutpictureBox.Image")));
            this.LogOutpictureBox.Location = new System.Drawing.Point(923, 2);
            this.LogOutpictureBox.Name = "LogOutpictureBox";
            this.LogOutpictureBox.Size = new System.Drawing.Size(47, 46);
            this.LogOutpictureBox.TabIndex = 16;
            this.LogOutpictureBox.TabStop = false;
            this.LogOutpictureBox.Click += new System.EventHandler(this.LogOutpictureBox_Click);
            // 
            // Left_panel
            // 
            this.Left_panel.BackColor = System.Drawing.Color.DimGray;
            this.Left_panel.Controls.Add(this.Side_panel);
            this.Left_panel.Controls.Add(this.button3);
            this.Left_panel.Controls.Add(this.MyPlace_button);
            this.Left_panel.Controls.Add(this.Home_button);
            this.Left_panel.Location = new System.Drawing.Point(0, 0);
            this.Left_panel.Name = "Left_panel";
            this.Left_panel.Size = new System.Drawing.Size(273, 640);
            this.Left_panel.TabIndex = 17;
            // 
            // Side_panel
            // 
            this.Side_panel.BackColor = System.Drawing.Color.IndianRed;
            this.Side_panel.Location = new System.Drawing.Point(0, 169);
            this.Side_panel.Name = "Side_panel";
            this.Side_panel.Size = new System.Drawing.Size(10, 75);
            this.Side_panel.TabIndex = 19;
            // 
            // button3
            // 
            this.button3.Cursor = System.Windows.Forms.Cursors.Hand;
            this.button3.Location = new System.Drawing.Point(0, 400);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(273, 75);
            this.button3.TabIndex = 2;
            this.button3.Text = "대충추가할기능";
            this.button3.UseVisualStyleBackColor = true;
            // 
            // MyPlace_button
            // 
            this.MyPlace_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.MyPlace_button.Location = new System.Drawing.Point(0, 283);
            this.MyPlace_button.Name = "MyPlace_button";
            this.MyPlace_button.Size = new System.Drawing.Size(273, 75);
            this.MyPlace_button.TabIndex = 1;
            this.MyPlace_button.Text = "MyPlace";
            this.MyPlace_button.UseVisualStyleBackColor = true;
            this.MyPlace_button.Click += new System.EventHandler(this.MyPlace_button_Click);
            // 
            // Home_button
            // 
            this.Home_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.Home_button.Location = new System.Drawing.Point(0, 169);
            this.Home_button.Name = "Home_button";
            this.Home_button.Size = new System.Drawing.Size(273, 75);
            this.Home_button.TabIndex = 0;
            this.Home_button.Text = "Home";
            this.Home_button.UseVisualStyleBackColor = true;
            this.Home_button.Click += new System.EventHandler(this.Home_button_Click);
            // 
            // Top_panel
            // 
            this.Top_panel.BackColor = System.Drawing.Color.DimGray;
            this.Top_panel.Location = new System.Drawing.Point(270, 0);
            this.Top_panel.Name = "Top_panel";
            this.Top_panel.Size = new System.Drawing.Size(796, 10);
            this.Top_panel.TabIndex = 18;
            // 
            // dalseonggun_button2
            // 
            this.dalseonggun_button2.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button2.Cursor = System.Windows.Forms.Cursors.Hand;
            this.dalseonggun_button2.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button2.FlatAppearance.BorderSize = 0;
            this.dalseonggun_button2.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button2.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button2.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.dalseonggun_button2.Location = new System.Drawing.Point(186, 318);
            this.dalseonggun_button2.Name = "dalseonggun_button2";
            this.dalseonggun_button2.Size = new System.Drawing.Size(121, 134);
            this.dalseonggun_button2.TabIndex = 34;
            this.dalseonggun_button2.Text = "달성군";
            this.dalseonggun_button2.UseVisualStyleBackColor = false;
            this.dalseonggun_button2.Click += new System.EventHandler(this.dalseonggun_button_Click);
            // 
            // suseonggu_button
            // 
            this.suseonggu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.suseonggu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.suseonggu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.suseonggu_button.FlatAppearance.BorderSize = 0;
            this.suseonggu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.suseonggu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.suseonggu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.suseonggu_button.Location = new System.Drawing.Point(427, 235);
            this.suseonggu_button.Name = "suseonggu_button";
            this.suseonggu_button.Size = new System.Drawing.Size(125, 52);
            this.suseonggu_button.TabIndex = 32;
            this.suseonggu_button.Text = "수성구";
            this.suseonggu_button.UseVisualStyleBackColor = false;
            this.suseonggu_button.Click += new System.EventHandler(this.suseonggu_button_Click);
            // 
            // namgu_button
            // 
            this.namgu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.namgu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.namgu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.namgu_button.FlatAppearance.BorderSize = 0;
            this.namgu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.namgu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.namgu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.namgu_button.Location = new System.Drawing.Point(371, 235);
            this.namgu_button.Name = "namgu_button";
            this.namgu_button.Size = new System.Drawing.Size(37, 33);
            this.namgu_button.TabIndex = 31;
            this.namgu_button.Text = "남구";
            this.namgu_button.UseVisualStyleBackColor = false;
            this.namgu_button.Click += new System.EventHandler(this.namgu_button_Click);
            // 
            // seogu_button
            // 
            this.seogu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.seogu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.seogu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.seogu_button.FlatAppearance.BorderSize = 0;
            this.seogu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.seogu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.seogu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.seogu_button.Location = new System.Drawing.Point(322, 185);
            this.seogu_button.Name = "seogu_button";
            this.seogu_button.Size = new System.Drawing.Size(39, 30);
            this.seogu_button.TabIndex = 30;
            this.seogu_button.Text = "서구";
            this.seogu_button.UseVisualStyleBackColor = false;
            this.seogu_button.Click += new System.EventHandler(this.seogu_button_Click);
            // 
            // dalseogu_button
            // 
            this.dalseogu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseogu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.dalseogu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseogu_button.FlatAppearance.BorderSize = 0;
            this.dalseogu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseogu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseogu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.dalseogu_button.Location = new System.Drawing.Point(274, 235);
            this.dalseogu_button.Name = "dalseogu_button";
            this.dalseogu_button.Size = new System.Drawing.Size(73, 46);
            this.dalseogu_button.TabIndex = 29;
            this.dalseogu_button.Text = "달서구";
            this.dalseogu_button.UseVisualStyleBackColor = false;
            this.dalseogu_button.Click += new System.EventHandler(this.dalseogu_button_Click);
            // 
            // dalseonggun_button
            // 
            this.dalseonggun_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.dalseonggun_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button.FlatAppearance.BorderSize = 0;
            this.dalseonggun_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.dalseonggun_button.Location = new System.Drawing.Point(157, 165);
            this.dalseonggun_button.Name = "dalseonggun_button";
            this.dalseonggun_button.Size = new System.Drawing.Size(68, 61);
            this.dalseonggun_button.TabIndex = 28;
            this.dalseonggun_button.Text = "달성군";
            this.dalseonggun_button.UseVisualStyleBackColor = false;
            this.dalseonggun_button.Click += new System.EventHandler(this.dalseonggun_button_Click);
            // 
            // bukgu_button
            // 
            this.bukgu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.bukgu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.bukgu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.bukgu_button.FlatAppearance.BorderSize = 0;
            this.bukgu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.bukgu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.bukgu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.bukgu_button.Location = new System.Drawing.Point(328, 82);
            this.bukgu_button.Name = "bukgu_button";
            this.bukgu_button.Size = new System.Drawing.Size(102, 84);
            this.bukgu_button.TabIndex = 27;
            this.bukgu_button.Text = "북구";
            this.bukgu_button.UseVisualStyleBackColor = false;
            this.bukgu_button.Click += new System.EventHandler(this.bukgu_button_Click);
            // 
            // donggu_button
            // 
            this.donggu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.donggu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.donggu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.donggu_button.FlatAppearance.BorderSize = 0;
            this.donggu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.donggu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.donggu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.donggu_button.Location = new System.Drawing.Point(475, 27);
            this.donggu_button.Name = "donggu_button";
            this.donggu_button.Size = new System.Drawing.Size(99, 165);
            this.donggu_button.TabIndex = 26;
            this.donggu_button.Text = "동구";
            this.donggu_button.UseVisualStyleBackColor = false;
            this.donggu_button.Click += new System.EventHandler(this.donggu_button_Click);
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(49, 8);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(599, 574);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.AutoSize;
            this.pictureBox1.TabIndex = 25;
            this.pictureBox1.TabStop = false;
            // 
            // groupBox1
            // 
            this.groupBox1.BackColor = System.Drawing.Color.Transparent;
            this.groupBox1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.groupBox1.Controls.Add(this.dalseonggun_button2);
            this.groupBox1.Controls.Add(this.junggu_button);
            this.groupBox1.Controls.Add(this.suseonggu_button);
            this.groupBox1.Controls.Add(this.namgu_button);
            this.groupBox1.Controls.Add(this.seogu_button);
            this.groupBox1.Controls.Add(this.dalseogu_button);
            this.groupBox1.Controls.Add(this.dalseonggun_button);
            this.groupBox1.Controls.Add(this.bukgu_button);
            this.groupBox1.Controls.Add(this.donggu_button);
            this.groupBox1.Controls.Add(this.pictureBox1);
            this.groupBox1.Location = new System.Drawing.Point(273, 54);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(792, 586);
            this.groupBox1.TabIndex = 35;
            this.groupBox1.TabStop = false;
            // 
            // junggu_button
            // 
            this.junggu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.junggu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.junggu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.junggu_button.FlatAppearance.BorderSize = 0;
            this.junggu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.junggu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.junggu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.junggu_button.Location = new System.Drawing.Point(379, 205);
            this.junggu_button.Name = "junggu_button";
            this.junggu_button.Size = new System.Drawing.Size(37, 21);
            this.junggu_button.TabIndex = 33;
            this.junggu_button.Text = "중구";
            this.junggu_button.UseVisualStyleBackColor = false;
            this.junggu_button.Click += new System.EventHandler(this.junggu_button_Click);
            // 
            // myPlace1
            // 
            this.myPlace1.Location = new System.Drawing.Point(274, 60);
            this.myPlace1.Name = "myPlace1";
            this.myPlace1.Size = new System.Drawing.Size(791, 578);
            this.myPlace1.TabIndex = 19;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(1066, 639);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.myPlace1);
            this.Controls.Add(this.Top_panel);
            this.Controls.Add(this.Left_panel);
            this.Controls.Add(this.LogOutpictureBox);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.LogOutpictureBox)).EndInit();
            this.Left_panel.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.PictureBox LogOutpictureBox;
        private System.Windows.Forms.Panel Left_panel;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button MyPlace_button;
        private System.Windows.Forms.Button Home_button;
        private System.Windows.Forms.Panel Side_panel;
        private System.Windows.Forms.Panel Top_panel;
        private MyPlace myPlace1;
        private System.Windows.Forms.Button dalseonggun_button2;
        private CircularButton junggu_button;
        private System.Windows.Forms.Button suseonggu_button;
        private System.Windows.Forms.Button namgu_button;
        private System.Windows.Forms.Button seogu_button;
        private System.Windows.Forms.Button dalseogu_button;
        private System.Windows.Forms.Button dalseonggun_button;
        private System.Windows.Forms.Button bukgu_button;
        private System.Windows.Forms.Button donggu_button;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.GroupBox groupBox1;
    }
}

