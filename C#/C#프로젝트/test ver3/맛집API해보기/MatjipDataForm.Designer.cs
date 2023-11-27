namespace 맛집API해보기
{
    partial class MatjipDataForm
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
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.KoreanFood_button = new System.Windows.Forms.Button();
            this.ChineseFood_button = new System.Windows.Forms.Button();
            this.JapaneseFood_button = new System.Windows.Forms.Button();
            this.ItalianFood_button = new System.Windows.Forms.Button();
            this.WorldFood_button = new System.Windows.Forms.Button();
            this.Fusion_button = new System.Windows.Forms.Button();
            this.Desert_button = new System.Windows.Forms.Button();
            this.TraditionalTea_button = new System.Windows.Forms.Button();
            this.SpecialBar_button = new System.Windows.Forms.Button();
            this.상호명 = new System.Windows.Forms.TextBox();
            this.주소 = new System.Windows.Forms.TextBox();
            this.카테고리 = new System.Windows.Forms.TextBox();
            this.예약가능여부 = new System.Windows.Forms.TextBox();
            this.영업시간 = new System.Windows.Forms.TextBox();
            this.매장설명 = new System.Windows.Forms.TextBox();
            this.매장전화번호 = new System.Windows.Forms.TextBox();
            this.메뉴 = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.webBrowser1 = new System.Windows.Forms.WebBrowser();
            this.MyPlace_button = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // dataGridView1
            // 
            this.dataGridView1.AllowUserToAddRows = false;
            this.dataGridView1.AllowUserToDeleteRows = false;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(26, 128);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.ReadOnly = true;
            this.dataGridView1.RowTemplate.Height = 23;
            this.dataGridView1.ShowCellErrors = false;
            this.dataGridView1.Size = new System.Drawing.Size(707, 499);
            this.dataGridView1.TabIndex = 0;
            // 
            // KoreanFood_button
            // 
            this.KoreanFood_button.Location = new System.Drawing.Point(51, 13);
            this.KoreanFood_button.Name = "KoreanFood_button";
            this.KoreanFood_button.Size = new System.Drawing.Size(75, 23);
            this.KoreanFood_button.TabIndex = 1;
            this.KoreanFood_button.Text = "한식";
            this.KoreanFood_button.UseVisualStyleBackColor = true;
            this.KoreanFood_button.Click += new System.EventHandler(this.KoreanFood_button_Click);
            // 
            // ChineseFood_button
            // 
            this.ChineseFood_button.Location = new System.Drawing.Point(159, 13);
            this.ChineseFood_button.Name = "ChineseFood_button";
            this.ChineseFood_button.Size = new System.Drawing.Size(75, 23);
            this.ChineseFood_button.TabIndex = 2;
            this.ChineseFood_button.Text = "중식";
            this.ChineseFood_button.UseVisualStyleBackColor = true;
            this.ChineseFood_button.Click += new System.EventHandler(this.ChineseFood_button_Click);
            // 
            // JapaneseFood_button
            // 
            this.JapaneseFood_button.Location = new System.Drawing.Point(279, 13);
            this.JapaneseFood_button.Name = "JapaneseFood_button";
            this.JapaneseFood_button.Size = new System.Drawing.Size(75, 23);
            this.JapaneseFood_button.TabIndex = 3;
            this.JapaneseFood_button.Text = "일식";
            this.JapaneseFood_button.UseVisualStyleBackColor = true;
            this.JapaneseFood_button.Click += new System.EventHandler(this.JapaneseFood_button_Click);
            // 
            // ItalianFood_button
            // 
            this.ItalianFood_button.Location = new System.Drawing.Point(396, 13);
            this.ItalianFood_button.Name = "ItalianFood_button";
            this.ItalianFood_button.Size = new System.Drawing.Size(75, 23);
            this.ItalianFood_button.TabIndex = 4;
            this.ItalianFood_button.Text = "양식";
            this.ItalianFood_button.UseVisualStyleBackColor = true;
            this.ItalianFood_button.Click += new System.EventHandler(this.ItalianFood_button_Click);
            // 
            // WorldFood_button
            // 
            this.WorldFood_button.Location = new System.Drawing.Point(508, 13);
            this.WorldFood_button.Name = "WorldFood_button";
            this.WorldFood_button.Size = new System.Drawing.Size(75, 23);
            this.WorldFood_button.TabIndex = 5;
            this.WorldFood_button.Text = "세계요리";
            this.WorldFood_button.UseVisualStyleBackColor = true;
            this.WorldFood_button.Click += new System.EventHandler(this.WorldFood_button_Click);
            // 
            // Fusion_button
            // 
            this.Fusion_button.Location = new System.Drawing.Point(51, 55);
            this.Fusion_button.Name = "Fusion_button";
            this.Fusion_button.Size = new System.Drawing.Size(75, 23);
            this.Fusion_button.TabIndex = 6;
            this.Fusion_button.Text = "퓨전/뷔페";
            this.Fusion_button.UseVisualStyleBackColor = true;
            this.Fusion_button.Click += new System.EventHandler(this.Fusion_button_Click);
            // 
            // Desert_button
            // 
            this.Desert_button.Location = new System.Drawing.Point(159, 55);
            this.Desert_button.Name = "Desert_button";
            this.Desert_button.Size = new System.Drawing.Size(88, 23);
            this.Desert_button.TabIndex = 7;
            this.Desert_button.Text = "디저트/베이커리";
            this.Desert_button.UseVisualStyleBackColor = true;
            this.Desert_button.Click += new System.EventHandler(this.Desert_button_Click);
            // 
            // TraditionalTea_button
            // 
            this.TraditionalTea_button.Location = new System.Drawing.Point(279, 55);
            this.TraditionalTea_button.Name = "TraditionalTea_button";
            this.TraditionalTea_button.Size = new System.Drawing.Size(75, 23);
            this.TraditionalTea_button.TabIndex = 8;
            this.TraditionalTea_button.Text = "전통차";
            this.TraditionalTea_button.UseVisualStyleBackColor = true;
            this.TraditionalTea_button.Click += new System.EventHandler(this.TraditionalTea_button_Click);
            // 
            // SpecialBar_button
            // 
            this.SpecialBar_button.Location = new System.Drawing.Point(396, 55);
            this.SpecialBar_button.Name = "SpecialBar_button";
            this.SpecialBar_button.Size = new System.Drawing.Size(75, 23);
            this.SpecialBar_button.TabIndex = 9;
            this.SpecialBar_button.Text = "특별한술집";
            this.SpecialBar_button.UseVisualStyleBackColor = true;
            this.SpecialBar_button.Click += new System.EventHandler(this.SpecialBar_button_Click);
            // 
            // 상호명
            // 
            this.상호명.Location = new System.Drawing.Point(829, 57);
            this.상호명.Name = "상호명";
            this.상호명.Size = new System.Drawing.Size(324, 21);
            this.상호명.TabIndex = 10;
            // 
            // 주소
            // 
            this.주소.Location = new System.Drawing.Point(829, 95);
            this.주소.Name = "주소";
            this.주소.Size = new System.Drawing.Size(324, 21);
            this.주소.TabIndex = 11;
            // 
            // 카테고리
            // 
            this.카테고리.Location = new System.Drawing.Point(829, 133);
            this.카테고리.Name = "카테고리";
            this.카테고리.Size = new System.Drawing.Size(324, 21);
            this.카테고리.TabIndex = 12;
            // 
            // 예약가능여부
            // 
            this.예약가능여부.Location = new System.Drawing.Point(829, 209);
            this.예약가능여부.Name = "예약가능여부";
            this.예약가능여부.Size = new System.Drawing.Size(324, 21);
            this.예약가능여부.TabIndex = 13;
            // 
            // 영업시간
            // 
            this.영업시간.Location = new System.Drawing.Point(829, 171);
            this.영업시간.Name = "영업시간";
            this.영업시간.Size = new System.Drawing.Size(324, 21);
            this.영업시간.TabIndex = 14;
            // 
            // 매장설명
            // 
            this.매장설명.Location = new System.Drawing.Point(829, 247);
            this.매장설명.Name = "매장설명";
            this.매장설명.Size = new System.Drawing.Size(324, 21);
            this.매장설명.TabIndex = 15;
            // 
            // 매장전화번호
            // 
            this.매장전화번호.Location = new System.Drawing.Point(829, 285);
            this.매장전화번호.Name = "매장전화번호";
            this.매장전화번호.Size = new System.Drawing.Size(324, 21);
            this.매장전화번호.TabIndex = 16;
            // 
            // 메뉴
            // 
            this.메뉴.Location = new System.Drawing.Point(829, 323);
            this.메뉴.Name = "메뉴";
            this.메뉴.Size = new System.Drawing.Size(324, 21);
            this.메뉴.TabIndex = 17;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(764, 60);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(40, 16);
            this.label1.TabIndex = 18;
            this.label1.Text = "상호명";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label2.Location = new System.Drawing.Point(770, 98);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(29, 16);
            this.label2.TabIndex = 19;
            this.label2.Text = "주소";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label3.Location = new System.Drawing.Point(770, 136);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(29, 16);
            this.label3.TabIndex = 20;
            this.label3.Text = "종류";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label4.Location = new System.Drawing.Point(758, 174);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(51, 16);
            this.label4.TabIndex = 21;
            this.label4.Text = "영업시간";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label5.Location = new System.Drawing.Point(746, 212);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(73, 16);
            this.label5.TabIndex = 22;
            this.label5.Text = "예약가능여부";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label6.Location = new System.Drawing.Point(758, 250);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(51, 16);
            this.label6.TabIndex = 23;
            this.label6.Text = "매장설명";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label7.Location = new System.Drawing.Point(758, 288);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(51, 16);
            this.label7.TabIndex = 24;
            this.label7.Text = "전화번호";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label8.Location = new System.Drawing.Point(770, 326);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(29, 16);
            this.label8.TabIndex = 25;
            this.label8.Text = "메뉴";
            // 
            // webBrowser1
            // 
            this.webBrowser1.Location = new System.Drawing.Point(879, 377);
            this.webBrowser1.MinimumSize = new System.Drawing.Size(20, 20);
            this.webBrowser1.Name = "webBrowser1";
            this.webBrowser1.Size = new System.Drawing.Size(250, 250);
            this.webBrowser1.TabIndex = 26;
            this.webBrowser1.Url = new System.Uri("https://hyojeongchoe.github.io/glowing-octo-happiness/mymap.html", System.UriKind.Absolute);
            // 
            // MyPlace_button
            // 
            this.MyPlace_button.Location = new System.Drawing.Point(749, 413);
            this.MyPlace_button.Name = "MyPlace_button";
            this.MyPlace_button.Size = new System.Drawing.Size(75, 23);
            this.MyPlace_button.TabIndex = 27;
            this.MyPlace_button.Text = "button1";
            this.MyPlace_button.UseVisualStyleBackColor = true;
            this.MyPlace_button.Click += new System.EventHandler(this.MyPlace_button_Click);
            // 
            // MatjipDataForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1177, 671);
            this.Controls.Add(this.MyPlace_button);
            this.Controls.Add(this.webBrowser1);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.메뉴);
            this.Controls.Add(this.매장전화번호);
            this.Controls.Add(this.매장설명);
            this.Controls.Add(this.영업시간);
            this.Controls.Add(this.예약가능여부);
            this.Controls.Add(this.카테고리);
            this.Controls.Add(this.주소);
            this.Controls.Add(this.상호명);
            this.Controls.Add(this.SpecialBar_button);
            this.Controls.Add(this.TraditionalTea_button);
            this.Controls.Add(this.Desert_button);
            this.Controls.Add(this.Fusion_button);
            this.Controls.Add(this.WorldFood_button);
            this.Controls.Add(this.ItalianFood_button);
            this.Controls.Add(this.JapaneseFood_button);
            this.Controls.Add(this.ChineseFood_button);
            this.Controls.Add(this.KoreanFood_button);
            this.Controls.Add(this.dataGridView1);
            this.Name = "MatjipDataForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "MatjipDataForm";
            this.Load += new System.EventHandler(this.MatjipDataForm_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Button KoreanFood_button;
        private System.Windows.Forms.Button ChineseFood_button;
        private System.Windows.Forms.Button JapaneseFood_button;
        private System.Windows.Forms.Button ItalianFood_button;
        private System.Windows.Forms.Button WorldFood_button;
        private System.Windows.Forms.Button Fusion_button;
        private System.Windows.Forms.Button Desert_button;
        private System.Windows.Forms.Button TraditionalTea_button;
        private System.Windows.Forms.Button SpecialBar_button;
        private System.Windows.Forms.TextBox 상호명;
        private System.Windows.Forms.TextBox 주소;
        private System.Windows.Forms.TextBox 카테고리;
        private System.Windows.Forms.TextBox 예약가능여부;
        private System.Windows.Forms.TextBox 영업시간;
        private System.Windows.Forms.TextBox 매장설명;
        private System.Windows.Forms.TextBox 매장전화번호;
        private System.Windows.Forms.TextBox 메뉴;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.WebBrowser webBrowser1;
        private System.Windows.Forms.Button MyPlace_button;
    }
}