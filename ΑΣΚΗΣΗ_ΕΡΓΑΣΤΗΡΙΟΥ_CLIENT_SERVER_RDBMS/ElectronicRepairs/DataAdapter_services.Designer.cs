namespace ElectronicRepairs
{
    partial class dtAdServices
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(dtAdServices));
            this.btnDelete = new System.Windows.Forms.Button();
            this.btnUpdate = new System.Windows.Forms.Button();
            this.btnInsert = new System.Windows.Forms.Button();
            this.lblCustID = new System.Windows.Forms.Label();
            this.txtBoxEmpID = new System.Windows.Forms.TextBox();
            this.txtBoxDevice = new System.Windows.Forms.TextBox();
            this.txtBoxRepairs = new System.Windows.Forms.TextBox();
            this.txtBoxDetailsID = new System.Windows.Forms.TextBox();
            this.txtBoxUpdatedComments = new System.Windows.Forms.TextBox();
            this.txtBoxTimeTaken = new System.Windows.Forms.TextBox();
            this.txtBoxComments = new System.Windows.Forms.TextBox();
            this.lblEmpID = new System.Windows.Forms.Label();
            this.lblDevice = new System.Windows.Forms.Label();
            this.lblRepairs = new System.Windows.Forms.Label();
            this.lblDetailsID = new System.Windows.Forms.Label();
            this.lblComments = new System.Windows.Forms.Label();
            this.lblTimeTaken = new System.Windows.Forms.Label();
            this.lblUpdatedComments = new System.Windows.Forms.Label();
            this.dgvServices = new System.Windows.Forms.DataGridView();
            this.cmbCustID = new System.Windows.Forms.ComboBox();
            ((System.ComponentModel.ISupportInitialize)(this.dgvServices)).BeginInit();
            this.SuspendLayout();
            // 
            // btnDelete
            // 
            this.btnDelete.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Center;
            this.btnDelete.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnDelete.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnDelete.FlatAppearance.BorderSize = 0;
            this.btnDelete.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnDelete.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnDelete.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnDelete.Image = global::ElectronicRepairs.Properties.Resources.delete;
            this.btnDelete.Location = new System.Drawing.Point(647, 113);
            this.btnDelete.Name = "btnDelete";
            this.btnDelete.Size = new System.Drawing.Size(204, 60);
            this.btnDelete.TabIndex = 2;
            this.btnDelete.UseVisualStyleBackColor = true;
            // 
            // btnUpdate
            // 
            this.btnUpdate.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Center;
            this.btnUpdate.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnUpdate.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnUpdate.FlatAppearance.BorderSize = 0;
            this.btnUpdate.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnUpdate.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnUpdate.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnUpdate.Image = global::ElectronicRepairs.Properties.Resources.update;
            this.btnUpdate.Location = new System.Drawing.Point(360, 113);
            this.btnUpdate.Name = "btnUpdate";
            this.btnUpdate.Size = new System.Drawing.Size(204, 60);
            this.btnUpdate.TabIndex = 1;
            this.btnUpdate.UseVisualStyleBackColor = true;
            // 
            // btnInsert
            // 
            this.btnInsert.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Center;
            this.btnInsert.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnInsert.FlatAppearance.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnInsert.FlatAppearance.BorderSize = 0;
            this.btnInsert.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnInsert.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.btnInsert.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnInsert.Font = new System.Drawing.Font("Verdana", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnInsert.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(62)))), ((int)(((byte)(120)))), ((int)(((byte)(138)))));
            this.btnInsert.Image = global::ElectronicRepairs.Properties.Resources.insert;
            this.btnInsert.Location = new System.Drawing.Point(83, 113);
            this.btnInsert.Name = "btnInsert";
            this.btnInsert.Size = new System.Drawing.Size(204, 60);
            this.btnInsert.TabIndex = 0;
            this.btnInsert.UseVisualStyleBackColor = true;
            // 
            // lblCustID
            // 
            this.lblCustID.AutoSize = true;
            this.lblCustID.Location = new System.Drawing.Point(33, 52);
            this.lblCustID.Name = "lblCustID";
            this.lblCustID.Size = new System.Drawing.Size(81, 13);
            this.lblCustID.TabIndex = 3;
            this.lblCustID.Text = "Customer ID";
            // 
            // txtBoxEmpID
            // 
            this.txtBoxEmpID.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.txtBoxEmpID.Location = new System.Drawing.Point(120, 86);
            this.txtBoxEmpID.Name = "txtBoxEmpID";
            this.txtBoxEmpID.Size = new System.Drawing.Size(129, 21);
            this.txtBoxEmpID.TabIndex = 5;
            // 
            // txtBoxDevice
            // 
            this.txtBoxDevice.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.txtBoxDevice.Location = new System.Drawing.Point(398, 12);
            this.txtBoxDevice.Name = "txtBoxDevice";
            this.txtBoxDevice.Size = new System.Drawing.Size(129, 21);
            this.txtBoxDevice.TabIndex = 5;
            // 
            // txtBoxRepairs
            // 
            this.txtBoxRepairs.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.txtBoxRepairs.Location = new System.Drawing.Point(398, 49);
            this.txtBoxRepairs.Name = "txtBoxRepairs";
            this.txtBoxRepairs.Size = new System.Drawing.Size(129, 21);
            this.txtBoxRepairs.TabIndex = 5;
            // 
            // txtBoxDetailsID
            // 
            this.txtBoxDetailsID.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.txtBoxDetailsID.Location = new System.Drawing.Point(398, 86);
            this.txtBoxDetailsID.Name = "txtBoxDetailsID";
            this.txtBoxDetailsID.Size = new System.Drawing.Size(129, 21);
            this.txtBoxDetailsID.TabIndex = 5;
            // 
            // txtBoxUpdatedComments
            // 
            this.txtBoxUpdatedComments.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.txtBoxUpdatedComments.Location = new System.Drawing.Point(694, 86);
            this.txtBoxUpdatedComments.Name = "txtBoxUpdatedComments";
            this.txtBoxUpdatedComments.Size = new System.Drawing.Size(129, 21);
            this.txtBoxUpdatedComments.TabIndex = 5;
            // 
            // txtBoxTimeTaken
            // 
            this.txtBoxTimeTaken.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.txtBoxTimeTaken.Location = new System.Drawing.Point(694, 49);
            this.txtBoxTimeTaken.Name = "txtBoxTimeTaken";
            this.txtBoxTimeTaken.Size = new System.Drawing.Size(129, 21);
            this.txtBoxTimeTaken.TabIndex = 5;
            // 
            // txtBoxComments
            // 
            this.txtBoxComments.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.txtBoxComments.Location = new System.Drawing.Point(694, 12);
            this.txtBoxComments.Name = "txtBoxComments";
            this.txtBoxComments.Size = new System.Drawing.Size(129, 21);
            this.txtBoxComments.TabIndex = 5;
            // 
            // lblEmpID
            // 
            this.lblEmpID.AutoSize = true;
            this.lblEmpID.Location = new System.Drawing.Point(33, 89);
            this.lblEmpID.Name = "lblEmpID";
            this.lblEmpID.Size = new System.Drawing.Size(81, 13);
            this.lblEmpID.TabIndex = 6;
            this.lblEmpID.Text = "Employee ID";
            // 
            // lblDevice
            // 
            this.lblDevice.AutoSize = true;
            this.lblDevice.Location = new System.Drawing.Point(346, 15);
            this.lblDevice.Name = "lblDevice";
            this.lblDevice.Size = new System.Drawing.Size(46, 13);
            this.lblDevice.TabIndex = 7;
            this.lblDevice.Text = "Device";
            // 
            // lblRepairs
            // 
            this.lblRepairs.AutoSize = true;
            this.lblRepairs.Location = new System.Drawing.Point(342, 52);
            this.lblRepairs.Name = "lblRepairs";
            this.lblRepairs.Size = new System.Drawing.Size(50, 13);
            this.lblRepairs.TabIndex = 8;
            this.lblRepairs.Text = "Repairs";
            // 
            // lblDetailsID
            // 
            this.lblDetailsID.AutoSize = true;
            this.lblDetailsID.Location = new System.Drawing.Point(328, 89);
            this.lblDetailsID.Name = "lblDetailsID";
            this.lblDetailsID.Size = new System.Drawing.Size(64, 13);
            this.lblDetailsID.TabIndex = 9;
            this.lblDetailsID.Text = "Details ID";
            // 
            // lblComments
            // 
            this.lblComments.AutoSize = true;
            this.lblComments.Location = new System.Drawing.Point(617, 15);
            this.lblComments.Name = "lblComments";
            this.lblComments.Size = new System.Drawing.Size(69, 13);
            this.lblComments.TabIndex = 10;
            this.lblComments.Text = "Comments";
            // 
            // lblTimeTaken
            // 
            this.lblTimeTaken.AutoSize = true;
            this.lblTimeTaken.Location = new System.Drawing.Point(617, 52);
            this.lblTimeTaken.Name = "lblTimeTaken";
            this.lblTimeTaken.Size = new System.Drawing.Size(71, 13);
            this.lblTimeTaken.TabIndex = 11;
            this.lblTimeTaken.Text = "Time taken";
            // 
            // lblUpdatedComments
            // 
            this.lblUpdatedComments.AutoSize = true;
            this.lblUpdatedComments.Location = new System.Drawing.Point(571, 89);
            this.lblUpdatedComments.Name = "lblUpdatedComments";
            this.lblUpdatedComments.Size = new System.Drawing.Size(117, 13);
            this.lblUpdatedComments.TabIndex = 12;
            this.lblUpdatedComments.Text = "Updated comments";
            // 
            // dgvServices
            // 
            this.dgvServices.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.dgvServices.AutoSizeRowsMode = System.Windows.Forms.DataGridViewAutoSizeRowsMode.AllCells;
            this.dgvServices.BackgroundColor = System.Drawing.Color.FromArgb(((int)(((byte)(70)))), ((int)(((byte)(89)))), ((int)(((byte)(113)))));
            this.dgvServices.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.dgvServices.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvServices.Location = new System.Drawing.Point(12, 179);
            this.dgvServices.Name = "dgvServices";
            this.dgvServices.Size = new System.Drawing.Size(909, 259);
            this.dgvServices.TabIndex = 13;
            // 
            // cmbCustID
            // 
            this.cmbCustID.FormattingEnabled = true;
            this.cmbCustID.Location = new System.Drawing.Point(120, 49);
            this.cmbCustID.Name = "cmbCustID";
            this.cmbCustID.Size = new System.Drawing.Size(129, 21);
            this.cmbCustID.TabIndex = 14;
            // 
            // dtAdServices
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(41)))), ((int)(((byte)(53)))), ((int)(((byte)(65)))));
            this.ClientSize = new System.Drawing.Size(933, 450);
            this.Controls.Add(this.cmbCustID);
            this.Controls.Add(this.dgvServices);
            this.Controls.Add(this.lblUpdatedComments);
            this.Controls.Add(this.lblTimeTaken);
            this.Controls.Add(this.lblComments);
            this.Controls.Add(this.lblDetailsID);
            this.Controls.Add(this.lblRepairs);
            this.Controls.Add(this.lblDevice);
            this.Controls.Add(this.lblEmpID);
            this.Controls.Add(this.txtBoxComments);
            this.Controls.Add(this.txtBoxTimeTaken);
            this.Controls.Add(this.txtBoxUpdatedComments);
            this.Controls.Add(this.txtBoxDetailsID);
            this.Controls.Add(this.txtBoxRepairs);
            this.Controls.Add(this.txtBoxDevice);
            this.Controls.Add(this.txtBoxEmpID);
            this.Controls.Add(this.lblCustID);
            this.Controls.Add(this.btnDelete);
            this.Controls.Add(this.btnUpdate);
            this.Controls.Add(this.btnInsert);
            this.Font = new System.Drawing.Font("Verdana", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(62)))), ((int)(((byte)(120)))), ((int)(((byte)(138)))));
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "dtAdServices";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "DataAdapter (services)";
            ((System.ComponentModel.ISupportInitialize)(this.dgvServices)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnInsert;
        private System.Windows.Forms.Button btnUpdate;
        private System.Windows.Forms.Button btnDelete;
        private System.Windows.Forms.Label lblCustID;
        private System.Windows.Forms.TextBox txtBoxEmpID;
        private System.Windows.Forms.TextBox txtBoxDevice;
        private System.Windows.Forms.TextBox txtBoxRepairs;
        private System.Windows.Forms.TextBox txtBoxDetailsID;
        private System.Windows.Forms.TextBox txtBoxUpdatedComments;
        private System.Windows.Forms.TextBox txtBoxTimeTaken;
        private System.Windows.Forms.TextBox txtBoxComments;
        private System.Windows.Forms.Label lblEmpID;
        private System.Windows.Forms.Label lblDevice;
        private System.Windows.Forms.Label lblRepairs;
        private System.Windows.Forms.Label lblDetailsID;
        private System.Windows.Forms.Label lblComments;
        private System.Windows.Forms.Label lblTimeTaken;
        private System.Windows.Forms.Label lblUpdatedComments;
        private System.Windows.Forms.DataGridView dgvServices;
        private System.Windows.Forms.ComboBox cmbCustID;
    }
}