namespace IRAY_Test
{
    partial class Form1
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
            this.button2 = new System.Windows.Forms.Button();
            this.btn_search = new System.Windows.Forms.Button();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.buttonSnap = new System.Windows.Forms.Button();
            this.buttonRecord = new System.Windows.Forms.Button();
            this.buttonSaveTempData = new System.Windows.Forms.Button();
            this.buttonTempShow = new System.Windows.Forms.Button();
            this.buttonSaveImageData = new System.Windows.Forms.Button();
            this.textBoxVER = new System.Windows.Forms.TextBox();
            this.buttonReadTemp = new System.Windows.Forms.Button();
            this.DeviceList = new System.Windows.Forms.ComboBox();
            this.Comport = new System.Windows.Forms.ComboBox();
            this.Search = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.TempMeasType = new System.Windows.Forms.Button();
            this.textBoxTempMeasType = new System.Windows.Forms.TextBox();
            this.buttonCommunicationType = new System.Windows.Forms.Button();
            this.textBoxCommunicationType = new System.Windows.Forms.TextBox();
            this.buttonCoreType = new System.Windows.Forms.Button();
            this.textBoxCoreType = new System.Windows.Forms.TextBox();
            this.USBBoardVersion = new System.Windows.Forms.Button();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.buttonENV_PARAMS_SET = new System.Windows.Forms.Button();
            this.buttonENV_PARAMS_READ = new System.Windows.Forms.Button();
            this.buttonDISTANCE = new System.Windows.Forms.Button();
            this.buttonEMISS = new System.Windows.Forms.Button();
            this.buttonHUMIDITY = new System.Windows.Forms.Button();
            this.buttonAIRTEMP = new System.Windows.Forms.Button();
            this.buttonREFLECT = new System.Windows.Forms.Button();
            this.textBoxDISTANCE = new System.Windows.Forms.TextBox();
            this.textBoxEMISS = new System.Windows.Forms.TextBox();
            this.textBoxHUMIDITY = new System.Windows.Forms.TextBox();
            this.textBoxAIRTEMP = new System.Windows.Forms.TextBox();
            this.textBoxREFLECT = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.comboBoxUnit = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.buttonShutterCorrection = new System.Windows.Forms.Button();
            this.comboBoxPALETTE = new System.Windows.Forms.ComboBox();
            this.buttonPALETTE = new System.Windows.Forms.Button();
            this.SN = new System.Windows.Forms.Label();
            this.PN = new System.Windows.Forms.Label();
            this.comboBoxGain = new System.Windows.Forms.ComboBox();
            this.buttonGainSet = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(320, 514);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(89, 23);
            this.button2.TabIndex = 2;
            this.button2.Text = "OpenDevice";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // btn_search
            // 
            this.btn_search.Location = new System.Drawing.Point(13, 566);
            this.btn_search.Name = "btn_search";
            this.btn_search.Size = new System.Drawing.Size(100, 23);
            this.btn_search.TabIndex = 5;
            this.btn_search.Text = "ReadImageData";
            this.btn_search.UseVisualStyleBackColor = true;
            this.btn_search.Visible = false;
            this.btn_search.Click += new System.EventHandler(this.btn_search_Click);
            // 
            // pictureBox1
            // 
            this.pictureBox1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.pictureBox1.Location = new System.Drawing.Point(0, 0);
            this.pictureBox1.Margin = new System.Windows.Forms.Padding(0);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(732, 503);
            this.pictureBox1.TabIndex = 6;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.MouseMove += new System.Windows.Forms.MouseEventHandler(this.pictureBox1_MouseMove);
            // 
            // buttonSnap
            // 
            this.buttonSnap.Location = new System.Drawing.Point(431, 566);
            this.buttonSnap.Name = "buttonSnap";
            this.buttonSnap.Size = new System.Drawing.Size(75, 23);
            this.buttonSnap.TabIndex = 7;
            this.buttonSnap.Text = "Snap";
            this.buttonSnap.UseVisualStyleBackColor = true;
            this.buttonSnap.Visible = false;
            this.buttonSnap.Click += new System.EventHandler(this.buttonSnap_Click);
            // 
            // buttonRecord
            // 
            this.buttonRecord.Location = new System.Drawing.Point(512, 565);
            this.buttonRecord.Name = "buttonRecord";
            this.buttonRecord.Size = new System.Drawing.Size(75, 23);
            this.buttonRecord.TabIndex = 8;
            this.buttonRecord.Text = "Record";
            this.buttonRecord.UseVisualStyleBackColor = true;
            this.buttonRecord.Visible = false;
            this.buttonRecord.Click += new System.EventHandler(this.buttonRecord_Click);
            // 
            // buttonSaveTempData
            // 
            this.buttonSaveTempData.Location = new System.Drawing.Point(229, 566);
            this.buttonSaveTempData.Name = "buttonSaveTempData";
            this.buttonSaveTempData.Size = new System.Drawing.Size(95, 23);
            this.buttonSaveTempData.TabIndex = 9;
            this.buttonSaveTempData.Text = "SaveTempData";
            this.buttonSaveTempData.UseVisualStyleBackColor = true;
            this.buttonSaveTempData.Visible = false;
            this.buttonSaveTempData.Click += new System.EventHandler(this.buttonSaveTempData_Click);
            // 
            // buttonTempShow
            // 
            this.buttonTempShow.Location = new System.Drawing.Point(418, 514);
            this.buttonTempShow.Name = "buttonTempShow";
            this.buttonTempShow.Size = new System.Drawing.Size(95, 23);
            this.buttonTempShow.TabIndex = 10;
            this.buttonTempShow.Text = "OpenTempShow";
            this.buttonTempShow.UseVisualStyleBackColor = true;
            this.buttonTempShow.Click += new System.EventHandler(this.buttonTempShow_Click);
            // 
            // buttonSaveImageData
            // 
            this.buttonSaveImageData.Location = new System.Drawing.Point(330, 566);
            this.buttonSaveImageData.Name = "buttonSaveImageData";
            this.buttonSaveImageData.Size = new System.Drawing.Size(95, 23);
            this.buttonSaveImageData.TabIndex = 11;
            this.buttonSaveImageData.Text = "SaveImageData";
            this.buttonSaveImageData.UseVisualStyleBackColor = true;
            this.buttonSaveImageData.Visible = false;
            this.buttonSaveImageData.Click += new System.EventHandler(this.buttonSaveImageData_Click);
            // 
            // textBoxVER
            // 
            this.textBoxVER.Location = new System.Drawing.Point(150, 22);
            this.textBoxVER.Name = "textBoxVER";
            this.textBoxVER.Size = new System.Drawing.Size(133, 21);
            this.textBoxVER.TabIndex = 12;
            // 
            // buttonReadTemp
            // 
            this.buttonReadTemp.Location = new System.Drawing.Point(123, 566);
            this.buttonReadTemp.Name = "buttonReadTemp";
            this.buttonReadTemp.Size = new System.Drawing.Size(100, 23);
            this.buttonReadTemp.TabIndex = 13;
            this.buttonReadTemp.Text = "ReadTempData";
            this.buttonReadTemp.UseVisualStyleBackColor = true;
            this.buttonReadTemp.Visible = false;
            this.buttonReadTemp.Click += new System.EventHandler(this.buttonReadTemp_Click);
            // 
            // DeviceList
            // 
            this.DeviceList.FormattingEnabled = true;
            this.DeviceList.Location = new System.Drawing.Point(13, 514);
            this.DeviceList.Name = "DeviceList";
            this.DeviceList.Size = new System.Drawing.Size(100, 20);
            this.DeviceList.TabIndex = 14;
            this.DeviceList.SelectedIndexChanged += new System.EventHandler(this.DeviceList_SelectedIndexChanged);
            // 
            // Comport
            // 
            this.Comport.FormattingEnabled = true;
            this.Comport.Location = new System.Drawing.Point(123, 514);
            this.Comport.Name = "Comport";
            this.Comport.Size = new System.Drawing.Size(100, 20);
            this.Comport.TabIndex = 15;
            // 
            // Search
            // 
            this.Search.Location = new System.Drawing.Point(239, 514);
            this.Search.Name = "Search";
            this.Search.Size = new System.Drawing.Size(75, 23);
            this.Search.TabIndex = 16;
            this.Search.Text = "Search";
            this.Search.UseVisualStyleBackColor = true;
            this.Search.Click += new System.EventHandler(this.Search_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.TempMeasType);
            this.groupBox1.Controls.Add(this.textBoxTempMeasType);
            this.groupBox1.Controls.Add(this.buttonCommunicationType);
            this.groupBox1.Controls.Add(this.textBoxCommunicationType);
            this.groupBox1.Controls.Add(this.buttonCoreType);
            this.groupBox1.Controls.Add(this.textBoxCoreType);
            this.groupBox1.Controls.Add(this.USBBoardVersion);
            this.groupBox1.Controls.Add(this.textBoxVER);
            this.groupBox1.Location = new System.Drawing.Point(740, -3);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(300, 152);
            this.groupBox1.TabIndex = 17;
            this.groupBox1.TabStop = false;
            // 
            // TempMeasType
            // 
            this.TempMeasType.Location = new System.Drawing.Point(9, 117);
            this.TempMeasType.Name = "TempMeasType";
            this.TempMeasType.Size = new System.Drawing.Size(131, 23);
            this.TempMeasType.TabIndex = 17;
            this.TempMeasType.Text = "TempMeasType";
            this.TempMeasType.UseVisualStyleBackColor = true;
            this.TempMeasType.Click += new System.EventHandler(this.TempMeasType_Click);
            // 
            // textBoxTempMeasType
            // 
            this.textBoxTempMeasType.Location = new System.Drawing.Point(150, 118);
            this.textBoxTempMeasType.Name = "textBoxTempMeasType";
            this.textBoxTempMeasType.Size = new System.Drawing.Size(133, 21);
            this.textBoxTempMeasType.TabIndex = 18;
            // 
            // buttonCommunicationType
            // 
            this.buttonCommunicationType.Location = new System.Drawing.Point(9, 85);
            this.buttonCommunicationType.Name = "buttonCommunicationType";
            this.buttonCommunicationType.Size = new System.Drawing.Size(131, 23);
            this.buttonCommunicationType.TabIndex = 15;
            this.buttonCommunicationType.Text = "CommunicationType";
            this.buttonCommunicationType.UseVisualStyleBackColor = true;
            this.buttonCommunicationType.Click += new System.EventHandler(this.CommunicationType_Click);
            // 
            // textBoxCommunicationType
            // 
            this.textBoxCommunicationType.Location = new System.Drawing.Point(150, 86);
            this.textBoxCommunicationType.Name = "textBoxCommunicationType";
            this.textBoxCommunicationType.Size = new System.Drawing.Size(133, 21);
            this.textBoxCommunicationType.TabIndex = 16;
            // 
            // buttonCoreType
            // 
            this.buttonCoreType.Location = new System.Drawing.Point(9, 53);
            this.buttonCoreType.Name = "buttonCoreType";
            this.buttonCoreType.Size = new System.Drawing.Size(131, 23);
            this.buttonCoreType.TabIndex = 13;
            this.buttonCoreType.Text = "CoreType";
            this.buttonCoreType.UseVisualStyleBackColor = true;
            this.buttonCoreType.Click += new System.EventHandler(this.CoreType_Click);
            // 
            // textBoxCoreType
            // 
            this.textBoxCoreType.Location = new System.Drawing.Point(150, 54);
            this.textBoxCoreType.Name = "textBoxCoreType";
            this.textBoxCoreType.Size = new System.Drawing.Size(133, 21);
            this.textBoxCoreType.TabIndex = 14;
            // 
            // USBBoardVersion
            // 
            this.USBBoardVersion.Location = new System.Drawing.Point(9, 21);
            this.USBBoardVersion.Name = "USBBoardVersion";
            this.USBBoardVersion.Size = new System.Drawing.Size(131, 23);
            this.USBBoardVersion.TabIndex = 0;
            this.USBBoardVersion.Text = "USBBoardVersion";
            this.USBBoardVersion.UseVisualStyleBackColor = true;
            this.USBBoardVersion.Click += new System.EventHandler(this.USBBoardVersion_Click);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.buttonENV_PARAMS_SET);
            this.groupBox2.Controls.Add(this.buttonENV_PARAMS_READ);
            this.groupBox2.Controls.Add(this.buttonDISTANCE);
            this.groupBox2.Controls.Add(this.buttonEMISS);
            this.groupBox2.Controls.Add(this.buttonHUMIDITY);
            this.groupBox2.Controls.Add(this.buttonAIRTEMP);
            this.groupBox2.Controls.Add(this.buttonREFLECT);
            this.groupBox2.Controls.Add(this.textBoxDISTANCE);
            this.groupBox2.Controls.Add(this.textBoxEMISS);
            this.groupBox2.Controls.Add(this.textBoxHUMIDITY);
            this.groupBox2.Controls.Add(this.textBoxAIRTEMP);
            this.groupBox2.Controls.Add(this.textBoxREFLECT);
            this.groupBox2.Controls.Add(this.label6);
            this.groupBox2.Controls.Add(this.label5);
            this.groupBox2.Controls.Add(this.label4);
            this.groupBox2.Controls.Add(this.label3);
            this.groupBox2.Controls.Add(this.label2);
            this.groupBox2.Controls.Add(this.comboBoxUnit);
            this.groupBox2.Controls.Add(this.label1);
            this.groupBox2.Location = new System.Drawing.Point(740, 169);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(300, 271);
            this.groupBox2.TabIndex = 18;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Environment variable";
            // 
            // buttonENV_PARAMS_SET
            // 
            this.buttonENV_PARAMS_SET.Location = new System.Drawing.Point(89, 232);
            this.buttonENV_PARAMS_SET.Name = "buttonENV_PARAMS_SET";
            this.buttonENV_PARAMS_SET.Size = new System.Drawing.Size(121, 23);
            this.buttonENV_PARAMS_SET.TabIndex = 30;
            this.buttonENV_PARAMS_SET.Text = "Env Para Enable";
            this.buttonENV_PARAMS_SET.UseVisualStyleBackColor = true;
            this.buttonENV_PARAMS_SET.Click += new System.EventHandler(this.buttonENV_PARAMS_SET_Click);
            // 
            // buttonENV_PARAMS_READ
            // 
            this.buttonENV_PARAMS_READ.Location = new System.Drawing.Point(19, 232);
            this.buttonENV_PARAMS_READ.Name = "buttonENV_PARAMS_READ";
            this.buttonENV_PARAMS_READ.Size = new System.Drawing.Size(60, 23);
            this.buttonENV_PARAMS_READ.TabIndex = 29;
            this.buttonENV_PARAMS_READ.Text = "READ";
            this.buttonENV_PARAMS_READ.UseVisualStyleBackColor = true;
            this.buttonENV_PARAMS_READ.Click += new System.EventHandler(this.buttonENV_PARAMS_READ_Click);
            // 
            // buttonDISTANCE
            // 
            this.buttonDISTANCE.Location = new System.Drawing.Point(223, 197);
            this.buttonDISTANCE.Name = "buttonDISTANCE";
            this.buttonDISTANCE.Size = new System.Drawing.Size(60, 23);
            this.buttonDISTANCE.TabIndex = 28;
            this.buttonDISTANCE.Text = "SET";
            this.buttonDISTANCE.UseVisualStyleBackColor = true;
            this.buttonDISTANCE.Click += new System.EventHandler(this.buttonDISTANCE_Click);
            // 
            // buttonEMISS
            // 
            this.buttonEMISS.Location = new System.Drawing.Point(223, 162);
            this.buttonEMISS.Name = "buttonEMISS";
            this.buttonEMISS.Size = new System.Drawing.Size(60, 23);
            this.buttonEMISS.TabIndex = 27;
            this.buttonEMISS.Text = "SET";
            this.buttonEMISS.UseVisualStyleBackColor = true;
            this.buttonEMISS.Click += new System.EventHandler(this.buttonEMISS_Click);
            // 
            // buttonHUMIDITY
            // 
            this.buttonHUMIDITY.Location = new System.Drawing.Point(223, 127);
            this.buttonHUMIDITY.Name = "buttonHUMIDITY";
            this.buttonHUMIDITY.Size = new System.Drawing.Size(60, 23);
            this.buttonHUMIDITY.TabIndex = 26;
            this.buttonHUMIDITY.Text = "SET";
            this.buttonHUMIDITY.UseVisualStyleBackColor = true;
            this.buttonHUMIDITY.Click += new System.EventHandler(this.buttonHUMIDITY_Click);
            // 
            // buttonAIRTEMP
            // 
            this.buttonAIRTEMP.Location = new System.Drawing.Point(223, 92);
            this.buttonAIRTEMP.Name = "buttonAIRTEMP";
            this.buttonAIRTEMP.Size = new System.Drawing.Size(60, 23);
            this.buttonAIRTEMP.TabIndex = 25;
            this.buttonAIRTEMP.Text = "SET";
            this.buttonAIRTEMP.UseVisualStyleBackColor = true;
            this.buttonAIRTEMP.Click += new System.EventHandler(this.buttonAIRTEMP_Click);
            // 
            // buttonREFLECT
            // 
            this.buttonREFLECT.Location = new System.Drawing.Point(223, 56);
            this.buttonREFLECT.Name = "buttonREFLECT";
            this.buttonREFLECT.Size = new System.Drawing.Size(60, 23);
            this.buttonREFLECT.TabIndex = 24;
            this.buttonREFLECT.Text = "SET";
            this.buttonREFLECT.UseVisualStyleBackColor = true;
            this.buttonREFLECT.Click += new System.EventHandler(this.buttonREFLECT_Click);
            // 
            // textBoxDISTANCE
            // 
            this.textBoxDISTANCE.Location = new System.Drawing.Point(89, 198);
            this.textBoxDISTANCE.Name = "textBoxDISTANCE";
            this.textBoxDISTANCE.Size = new System.Drawing.Size(121, 21);
            this.textBoxDISTANCE.TabIndex = 23;
            // 
            // textBoxEMISS
            // 
            this.textBoxEMISS.Location = new System.Drawing.Point(89, 163);
            this.textBoxEMISS.Name = "textBoxEMISS";
            this.textBoxEMISS.Size = new System.Drawing.Size(121, 21);
            this.textBoxEMISS.TabIndex = 22;
            // 
            // textBoxHUMIDITY
            // 
            this.textBoxHUMIDITY.Location = new System.Drawing.Point(89, 128);
            this.textBoxHUMIDITY.Name = "textBoxHUMIDITY";
            this.textBoxHUMIDITY.Size = new System.Drawing.Size(121, 21);
            this.textBoxHUMIDITY.TabIndex = 21;
            // 
            // textBoxAIRTEMP
            // 
            this.textBoxAIRTEMP.Location = new System.Drawing.Point(89, 93);
            this.textBoxAIRTEMP.Name = "textBoxAIRTEMP";
            this.textBoxAIRTEMP.Size = new System.Drawing.Size(121, 21);
            this.textBoxAIRTEMP.TabIndex = 20;
            // 
            // textBoxREFLECT
            // 
            this.textBoxREFLECT.Location = new System.Drawing.Point(89, 58);
            this.textBoxREFLECT.Name = "textBoxREFLECT";
            this.textBoxREFLECT.Size = new System.Drawing.Size(121, 21);
            this.textBoxREFLECT.TabIndex = 19;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(17, 201);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(53, 12);
            this.label6.TabIndex = 6;
            this.label6.Text = "Distance";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(17, 166);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(65, 12);
            this.label5.TabIndex = 5;
            this.label5.Text = "Emissivity";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(17, 131);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(53, 12);
            this.label4.TabIndex = 4;
            this.label4.Text = "Atm.Tran";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(17, 96);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(53, 12);
            this.label3.TabIndex = 3;
            this.label3.Text = "Atm.temp";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(17, 61);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(59, 12);
            this.label2.TabIndex = 2;
            this.label2.Text = "Refl.temp";
            // 
            // comboBoxUnit
            // 
            this.comboBoxUnit.FormattingEnabled = true;
            this.comboBoxUnit.Items.AddRange(new object[] {
            "Celsius",
            "Kelvin",
            "Fahrenheit"});
            this.comboBoxUnit.Location = new System.Drawing.Point(89, 22);
            this.comboBoxUnit.Name = "comboBoxUnit";
            this.comboBoxUnit.Size = new System.Drawing.Size(121, 20);
            this.comboBoxUnit.TabIndex = 1;
            this.comboBoxUnit.SelectedIndexChanged += new System.EventHandler(this.comboBoxUnit_SelectedIndexChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(17, 31);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "Unit";
            // 
            // buttonShutterCorrection
            // 
            this.buttonShutterCorrection.Location = new System.Drawing.Point(749, 456);
            this.buttonShutterCorrection.Name = "buttonShutterCorrection";
            this.buttonShutterCorrection.Size = new System.Drawing.Size(131, 23);
            this.buttonShutterCorrection.TabIndex = 19;
            this.buttonShutterCorrection.Text = "ShutterCorrection";
            this.buttonShutterCorrection.UseVisualStyleBackColor = true;
            this.buttonShutterCorrection.Click += new System.EventHandler(this.buttonShutterCorrection_Click);
            // 
            // comboBoxPALETTE
            // 
            this.comboBoxPALETTE.FormattingEnabled = true;
            this.comboBoxPALETTE.Items.AddRange(new object[] {
            "WhiteHot",
            "BlackHot",
            "Rainbow",
            "RainbowHC",
            "Iron",
            "Lava",
            "Sky",
            "MidGrey",
            "RdGy",
            "PuOr",
            "Special",
            "Red",
            "IceFire",
            "GreenRed",
            "Special2",
            "RedHot",
            "GreenHot",
            "BlueHot",
            "Green",
            "Blue"});
            this.comboBoxPALETTE.Location = new System.Drawing.Point(749, 496);
            this.comboBoxPALETTE.Name = "comboBoxPALETTE";
            this.comboBoxPALETTE.Size = new System.Drawing.Size(131, 20);
            this.comboBoxPALETTE.TabIndex = 20;
            // 
            // buttonPALETTE
            // 
            this.buttonPALETTE.Location = new System.Drawing.Point(890, 495);
            this.buttonPALETTE.Name = "buttonPALETTE";
            this.buttonPALETTE.Size = new System.Drawing.Size(60, 23);
            this.buttonPALETTE.TabIndex = 31;
            this.buttonPALETTE.Text = "SET";
            this.buttonPALETTE.UseVisualStyleBackColor = true;
            this.buttonPALETTE.Click += new System.EventHandler(this.buttonPALETTE_Click);
            // 
            // SN
            // 
            this.SN.AutoSize = true;
            this.SN.Location = new System.Drawing.Point(751, 556);
            this.SN.Name = "SN";
            this.SN.Size = new System.Drawing.Size(0, 12);
            this.SN.TabIndex = 32;
            // 
            // PN
            // 
            this.PN.AutoSize = true;
            this.PN.Location = new System.Drawing.Point(751, 579);
            this.PN.Name = "PN";
            this.PN.Size = new System.Drawing.Size(0, 12);
            this.PN.TabIndex = 33;
            // 
            // comboBoxGain
            // 
            this.comboBoxGain.FormattingEnabled = true;
            this.comboBoxGain.Items.AddRange(new object[] {
            "High Gain",
            "Low Gain",
            "Auto"});
            this.comboBoxGain.Location = new System.Drawing.Point(749, 523);
            this.comboBoxGain.Name = "comboBoxGain";
            this.comboBoxGain.Size = new System.Drawing.Size(131, 20);
            this.comboBoxGain.TabIndex = 34;
            // 
            // buttonGainSet
            // 
            this.buttonGainSet.Location = new System.Drawing.Point(890, 521);
            this.buttonGainSet.Name = "buttonGainSet";
            this.buttonGainSet.Size = new System.Drawing.Size(60, 23);
            this.buttonGainSet.TabIndex = 35;
            this.buttonGainSet.Text = "SET";
            this.buttonGainSet.UseVisualStyleBackColor = true;
            this.buttonGainSet.Click += new System.EventHandler(this.buttonGainSet_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1047, 608);
            this.Controls.Add(this.buttonGainSet);
            this.Controls.Add(this.comboBoxGain);
            this.Controls.Add(this.PN);
            this.Controls.Add(this.SN);
            this.Controls.Add(this.buttonPALETTE);
            this.Controls.Add(this.comboBoxPALETTE);
            this.Controls.Add(this.buttonShutterCorrection);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.Search);
            this.Controls.Add(this.Comport);
            this.Controls.Add(this.DeviceList);
            this.Controls.Add(this.buttonReadTemp);
            this.Controls.Add(this.buttonSaveImageData);
            this.Controls.Add(this.buttonTempShow);
            this.Controls.Add(this.buttonSaveTempData);
            this.Controls.Add(this.buttonRecord);
            this.Controls.Add(this.buttonSnap);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.btn_search);
            this.Controls.Add(this.button2);
            this.Name = "Form1";
            this.Text = "Form1";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Form1_FormClosing);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button btn_search;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button buttonSnap;
        private System.Windows.Forms.Button buttonRecord;
        private System.Windows.Forms.Button buttonSaveTempData;
        private System.Windows.Forms.Button buttonTempShow;
        private System.Windows.Forms.Button buttonSaveImageData;
        private System.Windows.Forms.TextBox textBoxVER;
        private System.Windows.Forms.Button buttonReadTemp;
        private System.Windows.Forms.ComboBox DeviceList;
        private System.Windows.Forms.ComboBox Comport;
        private System.Windows.Forms.Button Search;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button USBBoardVersion;
        private System.Windows.Forms.Button buttonCoreType;
        private System.Windows.Forms.TextBox textBoxCoreType;
        private System.Windows.Forms.Button buttonCommunicationType;
        private System.Windows.Forms.TextBox textBoxCommunicationType;
        private System.Windows.Forms.Button TempMeasType;
        private System.Windows.Forms.TextBox textBoxTempMeasType;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.ComboBox comboBoxUnit;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox textBoxREFLECT;
        private System.Windows.Forms.TextBox textBoxAIRTEMP;
        private System.Windows.Forms.TextBox textBoxHUMIDITY;
        private System.Windows.Forms.TextBox textBoxEMISS;
        private System.Windows.Forms.Button buttonREFLECT;
        private System.Windows.Forms.TextBox textBoxDISTANCE;
        private System.Windows.Forms.Button buttonAIRTEMP;
        private System.Windows.Forms.Button buttonHUMIDITY;
        private System.Windows.Forms.Button buttonEMISS;
        private System.Windows.Forms.Button buttonDISTANCE;
        private System.Windows.Forms.Button buttonENV_PARAMS_READ;
        private System.Windows.Forms.Button buttonENV_PARAMS_SET;
        private System.Windows.Forms.Button buttonShutterCorrection;
        private System.Windows.Forms.ComboBox comboBoxPALETTE;
        private System.Windows.Forms.Button buttonPALETTE;
        private System.Windows.Forms.Label SN;
        private System.Windows.Forms.Label PN;
        private System.Windows.Forms.ComboBox comboBoxGain;
        private System.Windows.Forms.Button buttonGainSet;
    }
}

