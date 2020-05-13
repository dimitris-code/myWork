namespace ElectronicRepairs
{
    partial class frmMain
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmMain));
            this.panel1 = new System.Windows.Forms.Panel();
            this.pictureBox2 = new System.Windows.Forms.PictureBox();
            this.panel3 = new System.Windows.Forms.Panel();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.panel2 = new System.Windows.Forms.Panel();
            this.btnDetails = new System.Windows.Forms.Button();
            this.btnAdapter = new System.Windows.Forms.Button();
            this.btnReader = new System.Windows.Forms.Button();
            this.btnReaderRead = new System.Windows.Forms.Button();
            this.btnConnectMain = new System.Windows.Forms.Button();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
            this.panel3.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.pictureBox2);
            this.panel1.Controls.Add(this.panel3);
            this.panel1.Controls.Add(this.panel2);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Left;
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(226, 450);
            this.panel1.TabIndex = 4;
            // 
            // pictureBox2
            // 
            this.pictureBox2.Image = global::ElectronicRepairs.Properties.Resources.cSharp;
            this.pictureBox2.Location = new System.Drawing.Point(18, 118);
            this.pictureBox2.Name = "pictureBox2";
            this.pictureBox2.Size = new System.Drawing.Size(191, 175);
            this.pictureBox2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox2.TabIndex = 1;
            this.pictureBox2.TabStop = false;
            // 
            // panel3
            // 
            this.panel3.Controls.Add(this.pictureBox1);
            this.panel3.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.panel3.Location = new System.Drawing.Point(0, 321);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(226, 129);
            this.panel3.TabIndex = 1;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::ElectronicRepairs.Properties.Resources.deltanK;
            this.pictureBox1.Location = new System.Drawing.Point(74, 0);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(78, 85);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // panel2
            // 
            this.panel2.BackgroundImage = global::ElectronicRepairs.Properties.Resources.logo;
            this.panel2.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.panel2.Dock = System.Windows.Forms.DockStyle.Top;
            this.panel2.Location = new System.Drawing.Point(0, 0);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(226, 142);
            this.panel2.TabIndex = 0;
            // 
            // btnDetails
            // 
            this.btnDetails.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Center;
            this.btnDetails.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnDetails.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnDetails.FlatAppearance.BorderSize = 0;
            this.btnDetails.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnDetails.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnDetails.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnDetails.Image = global::ElectronicRepairs.Properties.Resources.adapterDetails;
            this.btnDetails.Location = new System.Drawing.Point(255, 346);
            this.btnDetails.Name = "btnDetails";
            this.btnDetails.Size = new System.Drawing.Size(500, 58);
            this.btnDetails.TabIndex = 6;
            this.btnDetails.UseVisualStyleBackColor = true;
            // 
            // btnAdapter
            // 
            this.btnAdapter.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnAdapter.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnAdapter.FlatAppearance.BorderSize = 0;
            this.btnAdapter.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnAdapter.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnAdapter.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnAdapter.Image = global::ElectronicRepairs.Properties.Resources.dataAdapter2;
            this.btnAdapter.Location = new System.Drawing.Point(255, 270);
            this.btnAdapter.Name = "btnAdapter";
            this.btnAdapter.Size = new System.Drawing.Size(500, 58);
            this.btnAdapter.TabIndex = 5;
            this.btnAdapter.UseVisualStyleBackColor = true;
            this.btnAdapter.Click += new System.EventHandler(this.btnAdapter_Click);
            // 
            // btnReader
            // 
            this.btnReader.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnReader.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnReader.FlatAppearance.BorderSize = 0;
            this.btnReader.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnReader.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnReader.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnReader.Image = global::ElectronicRepairs.Properties.Resources.readerToGrid1;
            this.btnReader.Location = new System.Drawing.Point(255, 194);
            this.btnReader.Name = "btnReader";
            this.btnReader.Size = new System.Drawing.Size(500, 58);
            this.btnReader.TabIndex = 3;
            this.btnReader.UseVisualStyleBackColor = true;
            this.btnReader.Click += new System.EventHandler(this.btnReader_Click);
            // 
            // btnReaderRead
            // 
            this.btnReaderRead.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnReaderRead.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnReaderRead.FlatAppearance.BorderSize = 0;
            this.btnReaderRead.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnReaderRead.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnReaderRead.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnReaderRead.Image = global::ElectronicRepairs.Properties.Resources.readerReadEmp1;
            this.btnReaderRead.Location = new System.Drawing.Point(255, 118);
            this.btnReaderRead.Name = "btnReaderRead";
            this.btnReaderRead.Size = new System.Drawing.Size(500, 58);
            this.btnReaderRead.TabIndex = 2;
            this.btnReaderRead.UseVisualStyleBackColor = true;
            this.btnReaderRead.Click += new System.EventHandler(this.btnReaderRead_Click);
            // 
            // btnConnectMain
            // 
            this.btnConnectMain.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnConnectMain.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnConnectMain.FlatAppearance.BorderSize = 0;
            this.btnConnectMain.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnConnectMain.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnConnectMain.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnConnectMain.Image = global::ElectronicRepairs.Properties.Resources.checkConnection1;
            this.btnConnectMain.Location = new System.Drawing.Point(255, 42);
            this.btnConnectMain.Name = "btnConnectMain";
            this.btnConnectMain.Size = new System.Drawing.Size(500, 58);
            this.btnConnectMain.TabIndex = 0;
            this.btnConnectMain.UseVisualStyleBackColor = true;
            this.btnConnectMain.Click += new System.EventHandler(this.btnConnect_Click);
            // 
            // frmMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.ClientSize = new System.Drawing.Size(933, 450);
            this.Controls.Add(this.btnDetails);
            this.Controls.Add(this.btnAdapter);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.btnReader);
            this.Controls.Add(this.btnReaderRead);
            this.Controls.Add(this.btnConnectMain);
            this.Font = new System.Drawing.Font("Verdana", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(62)))), ((int)(((byte)(120)))), ((int)(((byte)(138)))));
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "frmMain";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "C# ODBC-MYSQL";
            this.Load += new System.EventHandler(this.frmMain_Load);
            this.panel1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
            this.panel3.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnConnectMain;
        private System.Windows.Forms.Button btnReaderRead;
        private System.Windows.Forms.Button btnReader;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Panel panel3;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.PictureBox pictureBox2;
        private System.Windows.Forms.Button btnAdapter;
        private System.Windows.Forms.Button btnDetails;
    }
}