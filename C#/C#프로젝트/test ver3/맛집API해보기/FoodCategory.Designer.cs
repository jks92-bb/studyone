﻿namespace 맛집API해보기
{
    partial class FoodCategory
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

        #region 구성 요소 디자이너에서 생성한 코드

        /// <summary> 
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.KoreanFood_button = new System.Windows.Forms.Button();
            this.JapaneseFood_button = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // KoreanFood_button
            // 
            this.KoreanFood_button.Location = new System.Drawing.Point(125, 76);
            this.KoreanFood_button.Name = "KoreanFood_button";
            this.KoreanFood_button.Size = new System.Drawing.Size(122, 43);
            this.KoreanFood_button.TabIndex = 0;
            this.KoreanFood_button.Text = "한식";
            this.KoreanFood_button.UseVisualStyleBackColor = true;
            this.KoreanFood_button.Click += new System.EventHandler(this.KoreanFood_button_Click);
            // 
            // JapaneseFood_button
            // 
            this.JapaneseFood_button.Location = new System.Drawing.Point(290, 110);
            this.JapaneseFood_button.Name = "JapaneseFood_button";
            this.JapaneseFood_button.Size = new System.Drawing.Size(122, 43);
            this.JapaneseFood_button.TabIndex = 1;
            this.JapaneseFood_button.Text = "일식";
            this.JapaneseFood_button.UseVisualStyleBackColor = true;
            this.JapaneseFood_button.Click += new System.EventHandler(this.JapaneseFood_button_Click);
            // 
            // FoodCategory
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.JapaneseFood_button);
            this.Controls.Add(this.KoreanFood_button);
            this.Name = "FoodCategory";
            this.Size = new System.Drawing.Size(791, 586);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button KoreanFood_button;
        private System.Windows.Forms.Button JapaneseFood_button;
    }
}
