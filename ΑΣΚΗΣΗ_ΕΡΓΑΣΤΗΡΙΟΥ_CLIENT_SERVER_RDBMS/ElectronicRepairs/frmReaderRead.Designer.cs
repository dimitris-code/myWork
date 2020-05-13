namespace ElectronicRepairs
{
    partial class frmReaderRead
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmReaderRead));
            this.lbxEmployees = new System.Windows.Forms.ListBox();
            this.pictureBox2 = new System.Windows.Forms.PictureBox();
            this.btnEmp = new System.Windows.Forms.Button();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // lbxEmployees
            // 
            this.lbxEmployees.FormattingEnabled = true;
            this.lbxEmployees.Location = new System.Drawing.Point(320, 48);
            this.lbxEmployees.Name = "lbxEmployees";
            this.lbxEmployees.Size = new System.Drawing.Size(541, 342);
            this.lbxEmployees.TabIndex = 1;
            // 
            // pictureBox2
            // 
            this.pictureBox2.Image = global::ElectronicRepairs.Properties.Resources.deltanK;
            this.pictureBox2.Location = new System.Drawing.Point(79, 277);
            this.pictureBox2.Name = "pictureBox2";
            this.pictureBox2.Size = new System.Drawing.Size(102, 113);
            this.pictureBox2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox2.TabIndex = 4;
            this.pictureBox2.TabStop = false;
            // 
            // btnEmp
            // 
            this.btnEmp.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnEmp.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnEmp.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnEmp.FlatAppearance.BorderSize = 0;
            this.btnEmp.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnEmp.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnEmp.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnEmp.Font = new System.Drawing.Font("Verdana", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnEmp.Image = global::ElectronicRepairs.Properties.Resources.loadEmp;
            this.btnEmp.Location = new System.Drawing.Point(25, 160);
            this.btnEmp.Name = "btnEmp";
            this.btnEmp.Size = new System.Drawing.Size(210, 59);
            this.btnEmp.TabIndex = 3;
            this.btnEmp.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            this.btnEmp.UseVisualStyleBackColor = true;
            this.btnEmp.Click += new System.EventHandler(this.btnEmp_Click);
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::ElectronicRepairs.Properties.Resources.logo;
            this.pictureBox1.Location = new System.Drawing.Point(25, 23);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(210, 79);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.CenterImage;
            this.pictureBox1.TabIndex = 2;
            this.pictureBox1.TabStop = false;
            // 
            // frmReaderRead
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.ClientSize = new System.Drawing.Size(933, 450);
            this.Controls.Add(this.pictureBox2);
            this.Controls.Add(this.btnEmp);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.lbxEmployees);
            this.Font = new System.Drawing.Font("Verdana", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(62)))), ((int)(((byte)(120)))), ((int)(((byte)(138)))));
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "frmReaderRead";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "ReaderRead Form";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ListBox lbxEmployees;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button btnEmp;
        private System.Windows.Forms.PictureBox pictureBox2;
    }
}