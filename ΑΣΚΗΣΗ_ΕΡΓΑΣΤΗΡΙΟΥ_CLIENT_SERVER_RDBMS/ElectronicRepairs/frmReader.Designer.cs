namespace ElectronicRepairs
{
    partial class frmReader
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmReader));
            this.dgvOrders = new System.Windows.Forms.DataGridView();
            this.lblEmployee = new System.Windows.Forms.Label();
            this.txtCustomer = new System.Windows.Forms.TextBox();
            this.lblCustomer = new System.Windows.Forms.Label();
            this.dtpApo = new System.Windows.Forms.DateTimePicker();
            this.dtpEos = new System.Windows.Forms.DateTimePicker();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.cbxEmp = new System.Windows.Forms.ComboBox();
            this.panel1 = new System.Windows.Forms.Panel();
            this.btnGo = new System.Windows.Forms.Button();
            this.btnReloadEmp = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dgvOrders)).BeginInit();
            this.panel1.SuspendLayout();
            this.SuspendLayout();
            // 
            // dgvOrders
            // 
            this.dgvOrders.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.dgvOrders.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.dgvOrders.AutoSizeRowsMode = System.Windows.Forms.DataGridViewAutoSizeRowsMode.AllCells;
            this.dgvOrders.BackgroundColor = System.Drawing.Color.FromArgb(((int)(((byte)(70)))), ((int)(((byte)(89)))), ((int)(((byte)(113)))));
            this.dgvOrders.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.dgvOrders.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvOrders.Location = new System.Drawing.Point(13, 97);
            this.dgvOrders.Name = "dgvOrders";
            this.dgvOrders.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect;
            this.dgvOrders.Size = new System.Drawing.Size(907, 340);
            this.dgvOrders.TabIndex = 0;
            this.dgvOrders.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dgvOrders_CellClick);
            // 
            // lblEmployee
            // 
            this.lblEmployee.AutoSize = true;
            this.lblEmployee.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.lblEmployee.Location = new System.Drawing.Point(317, 44);
            this.lblEmployee.Name = "lblEmployee";
            this.lblEmployee.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.lblEmployee.Size = new System.Drawing.Size(69, 13);
            this.lblEmployee.TabIndex = 2;
            this.lblEmployee.Text = "Employees";
            // 
            // txtCustomer
            // 
            this.txtCustomer.BackColor = System.Drawing.SystemColors.ButtonFace;
            this.txtCustomer.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.txtCustomer.Location = new System.Drawing.Point(4, 4);
            this.txtCustomer.Name = "txtCustomer";
            this.txtCustomer.Size = new System.Drawing.Size(272, 14);
            this.txtCustomer.TabIndex = 4;
            // 
            // lblCustomer
            // 
            this.lblCustomer.AutoSize = true;
            this.lblCustomer.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.lblCustomer.Location = new System.Drawing.Point(629, 44);
            this.lblCustomer.Name = "lblCustomer";
            this.lblCustomer.Size = new System.Drawing.Size(63, 13);
            this.lblCustomer.TabIndex = 5;
            this.lblCustomer.Text = "Customer";
            // 
            // dtpApo
            // 
            this.dtpApo.CalendarTitleBackColor = System.Drawing.SystemColors.ControlText;
            this.dtpApo.CalendarTitleForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(62)))), ((int)(((byte)(120)))), ((int)(((byte)(138)))));
            this.dtpApo.Location = new System.Drawing.Point(47, 26);
            this.dtpApo.Name = "dtpApo";
            this.dtpApo.Size = new System.Drawing.Size(242, 21);
            this.dtpApo.TabIndex = 7;
            // 
            // dtpEos
            // 
            this.dtpEos.Location = new System.Drawing.Point(47, 63);
            this.dtpEos.Name = "dtpEos";
            this.dtpEos.Size = new System.Drawing.Size(242, 21);
            this.dtpEos.TabIndex = 8;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.label1.Location = new System.Drawing.Point(13, 30);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 13);
            this.label1.TabIndex = 9;
            this.label1.Text = "Από";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.label2.Location = new System.Drawing.Point(12, 67);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(30, 13);
            this.label2.TabIndex = 10;
            this.label2.Text = "Έως";
            // 
            // cbxEmp
            // 
            this.cbxEmp.BackColor = System.Drawing.SystemColors.ButtonFace;
            this.cbxEmp.FormattingEnabled = true;
            this.cbxEmp.Location = new System.Drawing.Point(321, 63);
            this.cbxEmp.Name = "cbxEmp";
            this.cbxEmp.Size = new System.Drawing.Size(280, 21);
            this.cbxEmp.TabIndex = 1;
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.SystemColors.ButtonFace;
            this.panel1.Controls.Add(this.txtCustomer);
            this.panel1.Location = new System.Drawing.Point(633, 63);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(280, 21);
            this.panel1.TabIndex = 11;
            // 
            // btnGo
            // 
            this.btnGo.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnGo.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnGo.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnGo.FlatAppearance.BorderSize = 0;
            this.btnGo.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnGo.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnGo.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnGo.Image = global::ElectronicRepairs.Properties.Resources.search;
            this.btnGo.Location = new System.Drawing.Point(791, 26);
            this.btnGo.Name = "btnGo";
            this.btnGo.Size = new System.Drawing.Size(128, 34);
            this.btnGo.TabIndex = 6;
            this.btnGo.UseVisualStyleBackColor = false;
            this.btnGo.Click += new System.EventHandler(this.btnGo_Click);
            // 
            // btnReloadEmp
            // 
            this.btnReloadEmp.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnReloadEmp.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnReloadEmp.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnReloadEmp.FlatAppearance.BorderSize = 0;
            this.btnReloadEmp.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnReloadEmp.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnReloadEmp.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnReloadEmp.Image = global::ElectronicRepairs.Properties.Resources.reload;
            this.btnReloadEmp.Location = new System.Drawing.Point(479, 23);
            this.btnReloadEmp.Name = "btnReloadEmp";
            this.btnReloadEmp.Size = new System.Drawing.Size(128, 34);
            this.btnReloadEmp.TabIndex = 3;
            this.btnReloadEmp.UseVisualStyleBackColor = false;
            this.btnReloadEmp.Click += new System.EventHandler(this.btnReloadEmp_Click);
            // 
            // frmReader
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.ClientSize = new System.Drawing.Size(933, 450);
            this.Controls.Add(this.cbxEmp);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.lblEmployee);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.dtpEos);
            this.Controls.Add(this.dtpApo);
            this.Controls.Add(this.btnGo);
            this.Controls.Add(this.lblCustomer);
            this.Controls.Add(this.btnReloadEmp);
            this.Controls.Add(this.dgvOrders);
            this.Font = new System.Drawing.Font("Verdana", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(62)))), ((int)(((byte)(120)))), ((int)(((byte)(138)))));
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "frmReader";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Reader Form";
            this.Load += new System.EventHandler(this.frmReader_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dgvOrders)).EndInit();
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DataGridView dgvOrders;
        private System.Windows.Forms.Label lblEmployee;
        private System.Windows.Forms.Button btnReloadEmp;
        private System.Windows.Forms.TextBox txtCustomer;
        private System.Windows.Forms.Label lblCustomer;
        private System.Windows.Forms.Button btnGo;
        private System.Windows.Forms.DateTimePicker dtpApo;
        private System.Windows.Forms.DateTimePicker dtpEos;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.ComboBox cbxEmp;
        private System.Windows.Forms.Panel panel1;
    }
}