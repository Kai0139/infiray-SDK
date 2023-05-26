using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using OpenCvSharp;
using OpenCvSharp.Extensions;
using System.Text.RegularExpressions;

namespace IRAY_Test
{
    public partial class Form1 : Form
    {
        private delegate void notify(int devtype, string m_sername, string m_url, byte[] m_mac, ushort m_webport, ushort m_localport,
            string m_submask, string m_getway, string m_multiip, string m_dns, ushort m_multiport, int channel);

        [DllImport("user32.dll", EntryPoint = "SendMessage")]
        private static extern int SendMessage(IntPtr hwnd, int wMsg, int wParam, int lParam);

        [DllImport("user32.dll", EntryPoint = "PostMessage")]
        private static extern int PostMessage(IntPtr hwnd, int wMsg, int wParam, int lParam);

        [DllImport("user32.dll")]
        private static extern IntPtr FindWindow(string lpClassName, string lpWindowName);


        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "sdk_loginDevice")]
        static extern int sdk_loginDevice(IntPtr p, IntPtr hWnd);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "ReleaseSDK")]
        static extern void ReleaseSDK(IntPtr p);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SearchDevice")]
        static extern int SearchDevice(IntPtr handle, ref DeviceLst p);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void VideoCallBack(ref byte data, int iWidth, int iHeight, IntPtr pContext);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.StdCall, EntryPoint = "SetVideoCallBack")]
        static extern void SetVideoCallBack(IntPtr p, VideoCallBack pVideoCallBack, IntPtr pContext);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void TempCallBack(ref byte data, int iWidth, int iHeight, IntPtr pContext);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.StdCall, EntryPoint = "SetTempCallBack")]
        static extern void SetTempCallBack(IntPtr p, TempCallBack pVideoCallBack, IntPtr pContext);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "OpenDevice")]
        static extern bool OpenDevice(IntPtr p, int iGetCurSel, int portIndx);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "ReadUSBVersion")]
        static extern UInt32 ReadUSBVersion(IntPtr p);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "TempMeasureType")]
        static extern int TempMeasureType(IntPtr p);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "CoreType")]
        static extern int CoreType(IntPtr p);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "CommunicationType")]
        static extern bool CommunicationType(IntPtr p);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "sdk_set_temp_unit")]
        static extern int sdk_set_temp_unit(IntPtr p, int ucUnit);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "sdk_get_envir_param")]
        static extern int sdk_get_envir_param(IntPtr p, ref envir_param envir_data);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "sdk_envir_effect")]
        static extern int sdk_envir_effect(IntPtr p);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SetReflect")]
        static extern int SetReflect(IntPtr p, int i32value);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SetAirTemp")]
        static extern int SetAirTemp(IntPtr p, int i32value);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SetHumidity")]
        static extern int SetHumidity(IntPtr p, int i32value);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SetEmiss")]
        static extern int SetEmiss(IntPtr p, int i32value);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SetDistance")]
        static extern int SetDistance(IntPtr p, int i32value);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "sdk_shutter_correction")]
        static extern int sdk_shutter_correction(IntPtr p, int iCoreType, int type);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "sdk_set_color_plate")]
        static extern int sdk_set_color_plate(IntPtr p, int iType, int color_plate);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "WriteHandle")]
        static extern int WriteHandle(IntPtr p, byte[] buf, int len);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "ReadHandle")]
        static extern int ReadHandle(IntPtr p, StringBuilder buf, ref int len);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "sdk_read_temp_unit")]
        static extern int sdk_read_temp_unit(IntPtr p, ref byte ucUnit);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "sdk_get_color_plate")]
        static extern int sdk_get_color_plate(IntPtr p, int iType, ref int color_plate);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "sdk_get_SN_PN")]
        static extern int sdk_get_SN_PN(IntPtr p, ref byte strSN, ref int iLenSN, ref byte strPN, ref int iLenPN);

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "sdk_create")]
        static extern IntPtr sdk_create();

        [DllImport("USBSDK.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "sdk_get_temp_coefficient")]
        static extern int sdk_get_temp_coefficient(IntPtr p, int gain, ref short param1, ref short param2);


        /// <summary>
        /// ////////////////
        /// </summary>
        [StructLayout(LayoutKind.Sequential,CharSet=CharSet.Ansi,Pack=1)]
        //[System.Runtime.InteropServices.StructLayout(LayoutKind.Sequential)]

        public struct DeviceInfo
        {
            public int id;      //Device Id
            [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 260)]
            public string cName;
        };

        public struct ComName
        {
            [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 260)]
            public string cComPort;
        };

        public struct DeviceLst
        {
            public int iComCount; //Number of serial ports
            public int iNumber;      //Device Count

            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 50)] // 指定数组尺寸 
            public DeviceInfo[] DevInfo; // 结构体数组定义

            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 50)] // 指定数组尺寸 
            public ComName[] ComNameInfo;
        };

        public struct envir_param
        {
            public int emissivity;
            public int airTemp;
            public int reflectTemp;
            public int humidity;
            public int distance;
        }; //Parameters are actual values * 10000

        public static byte[] video_data_show = new byte[1280 * 1024 * 2];//image data
        public static byte[] temp_data = new byte[1280 * 1024 * 2];//temp data
        public static UInt16[] data_save = new UInt16[1280 * 1024];//temp data
        public static UInt16[] data_show = new UInt16[1280 * 1024];//temp data
        private static VideoCallBack videocallback;
        private static TempCallBack tempcallback;

        public int iTick;//1:snap     2:start record      3:end  record
        string strPath;
        bool bStartVideo;
        OpenCvSharp.VideoWriter writer;
        public int Width = 384;
        public int Height = 288;
        bool bShowTemp;
        float fTempValue;
        int X;
        int Y;
        string strTemp;
        float fSx;
        float fSy;
        static Mutex mt = new Mutex();
        public int iIfTempCore = 0; //是否是测温型机芯
        public int iIfGetVideoSize = 0;
        public int iTempMeasType = 0;//1-人体测温    2-工业测温
        public int iTempUnit = 0;//1-摄氏度   2-开尔文    3-华氏度
        public int iCoreType = 0;//1: LT Temperature measurement type     2：MicroIII Temperature measurement type    3：MicroIII Imaging    4:AT200F    5:AT21F    6:other
        public int iTEn = 0;
        public bool bIfNewNios = false;
        public IntPtr handle;
        public short param01 = -1;//高增益温度计算公式系数
        public short param02 = -1;//高增益温度计算公式系数
        public short param11 = -1;//低增益温度计算公式系数
        public short param12 = -1;//低增益温度计算公式系数
        public int m_type;// 0:测温   1:成像

        public Form1()
        {
            InitializeComponent();
            Control.CheckForIllegalCrossThreadCalls = false;

            iTick = 0;
            Width = 0;
            Height = 0;
            fTempValue = 0.0f;
            fSx = 0.0f;
            fSy = 0.0f;
            bStartVideo = false;
            bShowTemp = false;
            strTemp = "hello";
            strPath = System.Windows.Forms.Application.StartupPath;
            strPath = strPath + "\\Capture\\";
            writer = new VideoWriter();
            //comboBoxUnit.SelectedIndex = 0;
            comboBoxPALETTE.SelectedIndex = 0;
            comboBoxGain.SelectedIndex = 0;
            button2.Enabled = false;

            //sdk_set_type(1, "admin", "admin");
            //sdk_initialize();  //初始化SDK,必须先调用且只能调用一次
            videocallback = new VideoCallBack(VideoCallBackFunc);
            tempcallback = new TempCallBack(TempCallBackFunc);
        }

        protected override void DefWndProc(ref System.Windows.Forms.Message m)
        {
            switch (m.Msg)
            {
                case 2020:   //处理消息
                    ImageShow();
                    break;
                default:
                    base.DefWndProc(ref m);   //调用基类函数处理非自定义消息。
                    break;
            }
        }

        protected void ImageShow()//绿色
        {
            fSx = (float)Width / (float)pictureBox1.Width;
            fSy = (float)Height / (float)pictureBox1.Height;
            OpenCvSharp.Mat mgMat;
            OpenCvSharp.Mat mgMatShow = new OpenCvSharp.Mat();
            mgMat = new OpenCvSharp.Mat(Height, Width, OpenCvSharp.MatType.CV_8UC2, video_data_show, 0);
            
            if (iCoreType == 4 || iCoreType == 5)
            {
                OpenCvSharp.Cv2.CvtColor(mgMat, mgMatShow, OpenCvSharp.ColorConversionCodes.YUV2BGR_YUYV);
            }
            else
                OpenCvSharp.Cv2.CvtColor(mgMat, mgMatShow, OpenCvSharp.ColorConversionCodes.YUV2BGR_UYVY);

            OpenCvSharp.Size size = new OpenCvSharp.Size(pictureBox1.Width, pictureBox1.Height);
            Cv2.Resize(mgMatShow, mgMatShow, size, 0, 0, InterpolationFlags.Cubic);

            if (bShowTemp)//show temp
            {
                OpenCvSharp.Point cor;
                cor.X = X;
                cor.Y = Y;
               // strTemp = "hello";

                Cv2.PutText(mgMatShow, strTemp, cor, OpenCvSharp.HersheyFonts.HersheyScriptSimplex, 1.5, OpenCvSharp.Scalar.Blue, 2);
            }

            pictureBox1.Image = mgMatShow.ToBitmap();


            if(iTick == 1)
            {
                System.DateTime currentTime = new System.DateTime();
                currentTime = System.DateTime.Now;
                string strTime = currentTime.ToString("yyyy_M_d_H_m_s");

                string strFileName = strPath + strTime + "_test.bmp";
                Cv2.ImWrite(strFileName, mgMatShow);
                iTick = 0;
            }

            else if(iTick == 2)
            {
                System.DateTime currentTime = new System.DateTime();
                currentTime = System.DateTime.Now;
                string strTime = currentTime.ToString("yyyy_M_d_H_m_s");

                string strFileName = strPath + strTime + "_test.avi";

                OpenCvSharp.Size Videosize = new OpenCvSharp.Size(mgMatShow.Cols, mgMatShow.Rows);

                int fourcc = 25;
                if (Width == 384)
                    fourcc = 50;
                else if (Width == 640)
                    fourcc = 25;

                writer.Open(strFileName, "xvid", fourcc, Videosize);
                if(writer.IsOpened())
                {
                    writer.Write(mgMatShow);
                }
                iTick = 3;
            }
            else if (iTick == 3)
            {
                writer.Write(mgMatShow);
            }
            else if(iTick == 4)
            {
                writer.Release();
                iTick = 0;
            }
        }

        private unsafe void VideoCallBackFunc(ref byte pBuffer, int iWidth, int iHeight, IntPtr pContext)
        {

            Width = iWidth;
            Height = iHeight;

            byte[] buf = new byte[Width * Height * 2];

            unsafe
            {
                fixed (byte* p = &pBuffer)
                {
                    using (UnmanagedMemoryStream ms = new UnmanagedMemoryStream((byte*)p, Width * Height * 2))
                    {
                        ms.Read(buf, 0, buf.Length);
                    }
                }
            }

            Buffer.BlockCopy(buf, 0, video_data_show, 0, (int)Width * Height * 2);

            PostMessage(this.Handle, 2020, 100, 0);
        }

        private unsafe void TempCallBackFunc(ref byte pData, int iWidth, int iHeight, IntPtr pContext)
        {
            //if(size == 384*288*2)
            //{
            //    Width = 384;
            //    Height = 288;
            //}
            //else if (size == 640 * 512 * 2)
            //{
            //    Width = 640;
            //    Height = 512;
            //}

            Width = iWidth;
            Height = iHeight;

            byte[] buf = new byte[Width * Height * 2];

            unsafe
            {
                fixed (byte* p = &pData)
                {
                    using (UnmanagedMemoryStream ms = new UnmanagedMemoryStream((byte*)p, Width * Height * 2))
                    {
                        ms.Read(buf, 0, buf.Length);
                    }
                }
            }

            Buffer.BlockCopy(buf, 0, temp_data, 0, Width * Height * 2);

            mt.WaitOne();

            for (int ii = 0; ii < Width * Height; ii++)
            {
                data_save[ii] = (UInt16)((UInt16)(temp_data[ii * 2 + 1] << 8) + temp_data[ii * 2]);
                //data_save[ii * 2 + 1] = (UInt16)((UInt16)(temp_data[(ii + 1) * 2 + 1] << 8) + temp_data[(ii + 1) * 2]);
            }

            if (iCoreType == 6)
            {
                for (int j = 0; j < Height; j++)
                {
                    for (int i = 0; i < Width; i++)
                    {
                        if (iTempMeasType == 1)//人体测温
                        {
                            fTempValue = param01 / 100.0f;
                            data_show[j * Width + i] = (UInt16)(data_save[j * Width + i] + param02);
                        }
                        else//工业测温
                        {
                            if (data_save[j * Width + i] > 7300)   //7301~16383， (Value-3300)/15-273.2
                            {
                                fTempValue = param11 / 100.0f;
                                data_show[j * Width + i] = (UInt16)(data_save[j * Width + i] - param12);
                            }
                            else //0~7300，则温度换算公式（换算为摄氏度）(Value + 7000) / 30 - 273.2
                            {
                                fTempValue = param01 / 100.0f;
                                data_show[j * Width + i] = (UInt16)(data_save[j * Width + i] + param02);
                            }
                        }
                    }
                }
            }
            else
            {
                for (int j = 0; j < Height; j++)
                {
                    for (int i = 0; i < Width; i++)
                    {
                        if (iTempMeasType == 1)
                        {
                            if (iCoreType == 4 || iCoreType == 5)
                            {
                                fTempValue = 10.0f;
                                data_show[j * Width + i] = (UInt16)data_save[j * Width + i];
                            }
                            else
                            {
                                fTempValue = 100.0f;
                                data_show[j * Width + i] = (UInt16)(data_save[j * Width + i] + 25000);
                            }
                        }
                        else
                        {
                            if (iCoreType == 4 || iCoreType == 5)
                            {
                                fTempValue = 10.0f;
                                data_show[j * Width + i] = (UInt16)data_save[j * Width + i];
                            }
                            else
                            {
                                if (iTEn != 0 && bIfNewNios)
                                {
                                    //判断温度区间0~7300，则温度换算公式（换算为摄氏度）(Value+7000)/30-273.2
                                    //7301~16383， (Value-3300)/15-273.2

                                    if (data_save[j * Width + i] > 7300)   //7301~16383， (Value-3300)/15-273.2
                                    {
                                        fTempValue = 15.0f;
                                        data_show[j * Width + i] = (UInt16)(data_save[j * Width + i] - 3300);
                                    }
                                    else //0~7300，则温度换算公式（换算为摄氏度）(Value + 7000) / 30 - 273.2
                                    {
                                        fTempValue = 30.0f;
                                        data_show[j * Width + i] = (UInt16)(data_save[j * Width + i] + 7000);
                                    }
                                }
                                else
                                {
                                    data_show[j * Width + i] = data_save[j * Width + i];
                                    fTempValue = 10.0f;
                                }
                            }
                        }
                    }
                }
            }
            mt.ReleaseMutex();
        }

        /// <summary>
        /// 获取字符串中的数字
        /// </summary>
        /// <param name="str">字符串</param>
        /// <returns>数字</returns>
        public static int GetNumberInt(string str)
        {
            int result = 0;
            if (str != null && str != string.Empty)
            {
                // 正则表达式剔除非数字字符（不包含小数点.）
                str = Regex.Replace(str, @"[^\d.\d]", "");
                // 如果是数字，则转换为decimal类型
                if (Regex.IsMatch(str, @"^[+-]?\d*[.]?\d*$"))
                {
                    result = int.Parse(str);
                }
            }
            return result;
        }
        private void button2_Click(object sender, EventArgs e)
        {
            if (button2.Text == "OpenDevice")
            {
                IntPtr myIntPtr = FindWindow(null, "Form1");

                sdk_loginDevice(handle, myIntPtr);
                int iGetCurSel = DeviceList.SelectedIndex;

                int portIndex = 0;
                portIndex = GetNumberInt(Comport.Text);

                if(!OpenDevice(handle, iGetCurSel, portIndex))
                {
                    MessageBox.Show("open fail");
                    return;
                }

                SetVideoCallBack(handle, videocallback, this.Handle);
                SetTempCallBack(handle, tempcallback, this.Handle);

                Thread.Sleep(500);
                iCoreType = CoreType(handle);
                if (iCoreType == 6)
                {
                    int res = -1;
                    res = sdk_get_temp_coefficient(handle, 0, ref param01, ref param02);//高增益
                    if (res == 0)
                    {
                        res = sdk_get_temp_coefficient(handle, 1, ref param11, ref param12);//低增益
                        if (res == 4)
                        {
                            iTempMeasType = 1;//人体
                        }
                        else if (res == 0)
                        {
                            iTempMeasType = 0;//工业
                        }
                    }

                    if (res == 3)
                    {
                        m_type = 3;//成像
                    }
                    else
                    {
                        m_type = 0;//测温
                    }
                }
                else
                {
                    iTempMeasType = TempMeasureType(handle);
                }

                if (iTempMeasType == 1)
                {
                    comboBoxGain.Enabled = false;
                    buttonGainSet.Enabled = false;
                }
                else
                {
                    comboBoxGain.Enabled = true;
                    buttonGainSet.Enabled = true;
                }

                if (iCoreType == 4 || iCoreType == 5)
                {
                    comboBoxUnit.SelectedIndex = 0;
                    buttonENV_PARAMS_READ.Enabled = false;
                    buttonENV_PARAMS_SET.Enabled = false;

                    textBoxREFLECT.Text = "25";
                    textBoxAIRTEMP.Text = "25";
                    textBoxHUMIDITY.Text = "1";
                    textBoxEMISS.Text = "1";
                    textBoxDISTANCE.Text = "0.5";
                }

                byte p8value = 0;
                int errRet = 0;

                if (iCoreType != 4 && iCoreType != 5)
                {
                    buttonENV_PARAMS_READ.Enabled = true;
                    buttonENV_PARAMS_SET.Enabled = true;

                    byte ucTemp = 0;
                    for (int i = 0; i < 10; i++)
                    {
                        errRet = sdk_read_temp_unit(handle, ref ucTemp);
                        if (errRet == 0)
                        {
                            break;
                        }
                    }
                    iTempUnit = ucTemp;
                    comboBoxUnit.SelectedIndex = iTempUnit;

                    int iPalette = 0;

                    for (int i = 0; i < 10; i++)
                    {
                        errRet = sdk_get_color_plate(handle, iCoreType, ref iPalette);
                        if (errRet == 0)
                        {
                            break;
                        }
                    }
                    comboBoxPALETTE.SelectedIndex = iPalette;
                }

                byte[] strSN = new byte[512];
                byte[] strPN = new byte[512];
                int iLenSN = 0;
                int iLenPN = 0;
                string str, strTemp = "";

                if (sdk_get_SN_PN(handle, ref strSN[0], ref iLenSN, ref strPN[0], ref iLenPN) == 0)
                {
                    if (iCoreType == 4 || iCoreType == 5)
                    {
                        for (int i = 0; i < iLenSN; i++)
                        {
                            if (i == 0 && strSN[i] == 0)
                            {
                                continue;
                            }

                            str = String.Format("{0:X2}", strSN[i]);
                            strTemp += str;
                        }
                        SN.Text = "SN:" + strTemp;

                        strTemp = "";
                        for (int i = 0; i < iLenPN; i++)
                        {
                            if (i == 0 && strPN[i] == 0)
                            {
                                continue;
                            }

                            str = String.Format("{0:X2}", strPN[i]);
                            strTemp += str;
                        }
                        PN.Text = "PN:" + strTemp;
                    }
                    else
                    {
                        SN.Text = "SN:" + System.Text.Encoding.UTF8.GetString(strSN);
                        PN.Text = "PN:" + System.Text.Encoding.UTF8.GetString(strPN);
                    }
                }

                if (iCoreType == 1 || (iCoreType == 2 && PN.Text.Substring(2) == "LT"))
                {
                    for (int i = 0; i < 2; i++)
                    {
                        errRet = GUI_LT_TEMP_SWITCH_READ(ref p8value);  // type=0 自动关闭(手动), type=1 自动开启
                        if (errRet == 0)
                        {
                            break;
                        }
                    }
                    iTEn = p8value;
                    if (iTEn == 2)
                    {
                        //不支持温度成像切换
                        bIfNewNios = false;
                    }
                    else
                    {
                        bIfNewNios = true;
                    }

                    if (iTempMeasType == 1)
                    {
                        bIfNewNios = true;
                        iTEn = 1;
                    }
                }

                if (iCoreType != 4 && iCoreType != 5)
                {
                    int iGain = 0;
                    if (GetGain(ref iGain) == 0)
                    {
                        if (iGain == 3)
                            iGain = 2;
                        comboBoxGain.SelectedIndex = iGain;
                    }
                }

                pictureBox1.Visible = true;
                btn_search.Enabled = false;

                button2.Text = "CloseDevice";
            }
            else
            {
                button2.Text = "OpenDevice";
                ReleaseSDK(handle);

                pictureBox1.Visible = false;
            }
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            //var ret = IRNET_ClientStop(_irHndl);
        }

        private void btn_search_Click(object sender, EventArgs e)
        {
            OpenFileDialog ofd = new OpenFileDialog();
            ofd.Filter = "dat file(*.dat)|*.dat|所有文件|*.*";
            ofd.ValidateNames = true;
            ofd.CheckPathExists = true;
            ofd.CheckFileExists = true;
            if (ofd.ShowDialog() == DialogResult.OK)
            {
                string strFileName = ofd.FileName;
                FileStream file = new FileStream(strFileName, System.IO.FileMode.Open);

                FileInfo fileInfo = new FileInfo(strFileName);
                if(fileInfo.Length == 384*288*2)
                {
                    Width = 384;
                    Height = 288;
                }
                else if (fileInfo.Length == 640 * 512 * 2)
                {
                    Width = 640;
                    Height = 512;
                }
                else if (fileInfo.Length == 256 * 192 * 2)
                {
                    Width = 256;
                    Height = 192;
                }

                file.Read(video_data_show, 0, (int)fileInfo.Length);//221184);//384*288*2 

                file.Close();


                OpenCvSharp.Mat mgMat;
                OpenCvSharp.Mat mgMatShow = new OpenCvSharp.Mat();
                mgMat = new OpenCvSharp.Mat(Height, Width, OpenCvSharp.MatType.CV_8UC2, video_data_show, 0);
                if(Width == 256)
                {
                    OpenCvSharp.Cv2.CvtColor(mgMat, mgMatShow, OpenCvSharp.ColorConversionCodes.YUV2BGR_YUYV);
                }
                else
                    OpenCvSharp.Cv2.CvtColor(mgMat, mgMatShow, OpenCvSharp.ColorConversionCodes.YUV2BGR_UYVY);

                OpenCvSharp.Size size = new OpenCvSharp.Size(pictureBox1.Width, pictureBox1.Height);
                Cv2.Resize(mgMatShow, mgMatShow, size, 0, 0, InterpolationFlags.Cubic);

                pictureBox1.Image = mgMatShow.ToBitmap();
            }
        }

        private void buttonSnap_Click(object sender, EventArgs e)
        {
            iTick = 1;
        }

        private void buttonRecord_Click(object sender, EventArgs e)
        {
            if(bStartVideo == false)
            {
                buttonRecord.Text = "stop";
                iTick = 2;
                bStartVideo = true;
            }
            else
            {
                buttonRecord.Text = "Record";
                iTick = 4;
                bStartVideo = false;
            }
        }

        private void buttonSaveTempData_Click(object sender, EventArgs e)
        {
            byte[] temp = new byte[Width * Height * 2];
            Buffer.BlockCopy(data_save, 0, temp, 0, Width * Height * 2);

            System.DateTime currentTime = new System.DateTime();
            currentTime = System.DateTime.Now;
            string strTime = currentTime.ToString("yyyy_M_d_H_m_s");

            FileStream file = new FileStream(strPath + strTime + "_temp_data.dat", FileMode.Create, FileAccess.Write);

            file.Write(temp, 0, temp.Length);

            file.Flush();

            file.Close();
        }

        private void buttonTempShow_Click(object sender, EventArgs e)
        {
            if(bShowTemp == false)
            {
                buttonTempShow.Text = "CloseTempShow";
                bShowTemp = true;
            }
            else
            {
                buttonTempShow.Text = "OpenTempShow";
                bShowTemp = false;
            }
        }

        private void buttonSaveImageData_Click(object sender, EventArgs e)
        {
            System.DateTime currentTime = new System.DateTime();
            currentTime = System.DateTime.Now;
            string strTime = currentTime.ToString("yyyy_M_d_H_m_s");

            FileStream file = new FileStream(strPath + strTime + "_image_data.dat", FileMode.Create, FileAccess.Write);

            int iLength = (int)(Width * Height * 2);
            file.Write(video_data_show, 0, iLength);

            file.Flush();

            file.Close();
        }

        private void pictureBox1_MouseMove(object sender, MouseEventArgs e)
        {
            if (bShowTemp)
            {
                X = e.X;
                Y = e.Y;

                int iY1 = (int)(Y * fSy);
                int iX1 = (int)(X * fSx);

                mt.WaitOne();
                int iTemp = (int)data_show[iY1 * Width + iX1];

                //换算公式:
                //	F = (℃×9 / 5) + 32
                //		℃ = (F - 32)×5 / 9
                //		K = ℃ + 273.2
                //		式中 :
                //		K ——开尔文温度(热力学温度),
                //		℃ ——摄氏温度
                //		F ——华氏温度
                float fK = iTemp / fTempValue;
                float fC = fK - (float)273.2;
                float fF = (fC * 9 / 5) + 32;

                if (iTempUnit == 0)
                {
                    strTemp = fC.ToString("0.0");
                }
                else if (iTempUnit == 1)
                {
                    strTemp = fK.ToString("0.0");
                }
                else if (iTempUnit == 2)
                {
                    strTemp = fF.ToString("0.0");
                }

                mt.ReleaseMutex();
            }
        }

        private void buttonReadTemp_Click(object sender, EventArgs e)
        {
            using (FileStream fs = new FileStream(strPath + "temp_data.dat", FileMode.Open, FileAccess.Read))
            {

                byte[] byteArray = new byte[fs.Length];

                fs.Read(byteArray, 0, byteArray.Length);

                //Buffer.BlockCopy(data_save, 0, byteArray, 0, 384 * 288 * 2);

                for (int j = 0; j < 288; j++)
                {
                    for (int i = 0; i < 384; i++)
                    {
                        data_save[j * 384 + i] = (ushort)((byteArray[j * 384 + (i * 2 + 1)] << 8) + byteArray[j * 384 + (i * 2)]);
                        //判断温度区间0~7300，则温度换算公式（换算为摄氏度）(Value+7000)/30-273.2
                        //7301~16383， (Value-3300)/15-273.2

                        if (data_save[j * 384 + i] > 7300)   //7301~16383， (Value-3300)/15-273.2
                        {
                            fTempValue = 15.0f;
                            data_show[j * 384 + i] = (UInt16)(data_save[j * 384 + i] - 3300);
                        }
                        else //0~7300，则温度换算公式（换算为摄氏度）(Value + 7000) / 30 - 273.2
                        {
                            fTempValue = 30.0f;
                            data_show[j * 384 + i] = (UInt16)(data_save[j * 384 + i] + 7000);
                        }
                    }
                }
            }
            //转为摄氏度
            //data_show[i] / fTempValue - 273.2
        }

        private void Search_Click(object sender, EventArgs e)
        {
            handle = sdk_create();

            DeviceLst devList = new IRAY_Test.Form1.DeviceLst();
            int iRes = SearchDevice(handle, ref devList);

            DeviceList.Items.Clear();
            Comport.Items.Clear();

            for (int i = 0; i < devList.iNumber; i++)
            {
                DeviceList.Items.Add(devList.DevInfo[i].cName.ToString());
            }

            for (int i = 0; i < devList.iComCount; i++)
            {
                Comport.Items.Add(devList.ComNameInfo[i].cComPort.ToString());
            }

            if (DeviceList.Items.Count > 0)
                DeviceList.SelectedIndex = 0;

            if (Comport.Items.Count > 0)
                Comport.SelectedIndex = 0;

            button2.Enabled = true;
        }

        private void TempMeasType_Click(object sender, EventArgs e)
        {
            if (iTempMeasType == 1)
            {
                textBoxTempMeasType.Text = "Human TempMeas";
            }
            else if (iTempMeasType == 2)
            {
                textBoxTempMeasType.Text = "Industry TempMeas";
            }
        }

        private void USBBoardVersion_Click(object sender, EventArgs e)
        {
            uint dwVer = ReadUSBVersion(handle);
            textBoxVER.Text = dwVer.ToString("X");
        }

        private void CoreType_Click(object sender, EventArgs e)
        {
            iCoreType = CoreType(handle);

            if (iCoreType == 1)
            {
                textBoxCoreType.Text = "LT TempMeas";
            }
            else if (iCoreType == 2)
            {
                if(PN.Text.Substring(3, 3) == "M3L")
                {
                    textBoxCoreType.Text = "M3L TempMeas";
                }
                else
                {
                    textBoxCoreType.Text = "MicroIII TempMeas";
                }
            }
            else if (iCoreType == 3)
            {
                if (PN.Text.Substring(3, 3) == "M3L")
                {
                    textBoxCoreType.Text = "M3L Imaging";
                }
                else
                {
                    textBoxCoreType.Text = "MicroIII Imaging";
                }
            }
            else if (iCoreType == 4)
            {
                textBoxCoreType.Text = "AT200F TempMeas";
            }
            else if (iCoreType == 5)
            {
                textBoxCoreType.Text = "AT21F TempMeas";
            }
            else if (iCoreType == 6)
            {
                if(m_type == 3)
                {
                    textBoxCoreType.Text = "Imaging";
                }
                else
                {
                    textBoxCoreType.Text = "TempMeas";
                }
            }
        }

        private void CommunicationType_Click(object sender, EventArgs e)
        {
            bool bType = CommunicationType(handle);
            if (bType)
            {
                textBoxCommunicationType.Text = "Serial port";
            }
            else
            {
                textBoxCommunicationType.Text = "get/set zoom";
            }
        }

        private void comboBoxUnit_SelectedIndexChanged(object sender, EventArgs e)
        {
            int errRet = 0;

            if (iCoreType != 4 && iCoreType != 5)
            {
                for (int i = 0; i < 10; i++)
                {
                    errRet = sdk_set_temp_unit(handle, comboBoxUnit.SelectedIndex);
                    if (errRet == 0)
                    {
                        break;
                    }
                }
                if (errRet == 0)
                {
                    iTempUnit = comboBoxUnit.SelectedIndex;
                    buttonENV_PARAMS_READ_Click(null, null);
                }
            }
            else
            {
                iTempUnit = comboBoxUnit.SelectedIndex;
            }
        }

        private void buttonENV_PARAMS_READ_Click(object sender, EventArgs e)
        {
            if (iCoreType != 3)
            {
                envir_param envir_data = new envir_param();
                int errRet = 0;

                for (int i = 0; i < 10; i++)
                {
                    errRet = sdk_get_envir_param(handle, ref envir_data);
                    if (errRet == 0)
                    {
                        break;
                    }
                }
                if (errRet == 0)
                {
                    textBoxREFLECT.Text = (envir_data.reflectTemp / 10000.0).ToString("0.00");
                    textBoxAIRTEMP.Text = (envir_data.airTemp / 10000.0).ToString("0.00");
                    textBoxHUMIDITY.Text = (envir_data.humidity / 10000.0).ToString("0.00");
                    textBoxEMISS.Text = (envir_data.emissivity / 10000.0).ToString("0.00");
                    textBoxDISTANCE.Text = (envir_data.distance / 10000.0).ToString("0.00");
                }
            }
        }

        private void buttonENV_PARAMS_SET_Click(object sender, EventArgs e)
        {
            int errRet = 0;
            for (int i = 0; i < 10; i++)
            {
                errRet = sdk_envir_effect(handle);
                {
                    break;
                }
            }
            if (errRet != 0)
            {
                MessageBox.Show("set fail");
            }
        }

        private void buttonREFLECT_Click(object sender, EventArgs e)
        {
            float iTemp = Convert.ToSingle(textBoxREFLECT.Text);

            float fMin = 0.0f;
            float fMax = 0.0f;
            if (iTempUnit == 0)
            {
                fMin = -20.0f;
                fMax = 150.0f;
            }
            else if (iTempUnit == 1)
            {
                fMin = -20.0f + 273.15f;
                fMax = 150.0f + 273.15f;
            }
            else
            {
                fMin = (-20.0f * 9 / 5) + 32;
                fMax = (150.0f * 9 / 5) + 32;
            }

            if (iTemp >= fMin && iTemp <= fMax)
            {
                int i32value = 0;
                if (iCoreType == 4 || iCoreType == 5)
                {
                    if (iTempUnit == 0)
                    {
                        i32value = (int)((iTemp + 273.2) * 10);
                    }
                    else if (iTempUnit == 1)
                    {
                        i32value = (int)(iTemp * 10);
                    }
                    else
                    {
                        i32value = (int)(((iTemp - 32) * 5 / 9 + 273.2) * 10);
                    }
                }
                else
                {
                    i32value = (int)(iTemp * 10000);
                }

                int errRet = 0;
                for (int i = 0; i < 10; i++)
                {
                    errRet = SetReflect(handle, i32value); //60. 反射温度 设置
                    if (errRet == 0)
                    {
                        break;
                    }
                }
                if (errRet != 0)
                {
                    MessageBox.Show("set fail");
                }
            }
            else
            {
                if (iTempUnit == 0)
                {
                    MessageBox.Show("Temperature value range: [-20,150], please input again!");
                }
                else if (iTempUnit == 1)
                {
                    MessageBox.Show("Temperature value range: [253.15,423.15], please input again!");
                }
                else
                {
                    MessageBox.Show("Temperature value range: [-4,302], please input again!");
                }
                return;
            }
        }

        private void buttonAIRTEMP_Click(object sender, EventArgs e)
        {
            float iTemp = Convert.ToSingle(textBoxAIRTEMP.Text);

            float fMin = 0.0f;
            float fMax = 0.0f;
            if (iTempUnit == 0)
            {
                fMin = -20.0f;
                fMax = 60.0f;
            }
            else if (iTempUnit == 1)
            {
                fMin = -20.0f + 273.15f;
                fMax = 60.0f + 273.15f;
            }
            else
            {
                fMin = (-20.0f * 9 / 5) + 32;
                fMax = (60.0f * 9 / 5) + 32;
            }

            if (iTemp >= fMin && iTemp <= fMax)
            {
                int i32value = 0;
                if (iCoreType == 4 || iCoreType == 5)
                {
                    if (iTempUnit == 0)
                    {
                        i32value = (int)((iTemp + 273.2) * 10);
                    }
                    else if (iTempUnit == 1)
                    {
                        i32value = (int)(iTemp * 10);
                    }
                    else
                    {
                        i32value = (int)(((iTemp - 32) * 5 / 9 + 273.2) * 10);
                    }
                }
                else
                {
                    i32value = (int)(iTemp * 10000);
                }

                int errRet = 0;
                for (int i = 0; i < 10; i++)
                {
                    errRet = SetAirTemp(handle, i32value); //60. 反射温度 设置
                    if (errRet == 0)
                    {
                        break;
                    }
                }
                if (errRet != 0)
                {
                    MessageBox.Show("set fail");
                }
            }
            else
            {
                if (iTempUnit == 0)
                {
                    MessageBox.Show("Temperature value range: [-20,60], please input again!");
                }
                else if (iTempUnit == 1)
                {
                    MessageBox.Show("Temperature value range: [253.15,333.15], please input again!");
                }
                else
                {
                    MessageBox.Show("Temperature value range: [-4,140], please input again!");
                }
                return;
            }
        }

        private void buttonHUMIDITY_Click(object sender, EventArgs e)
        {
            float fValue = Convert.ToSingle(textBoxHUMIDITY.Text);

            if (fValue < 0.009 || fValue > 1)
            {
                MessageBox.Show("Range: [0.01,1]!");
                return;
            }
            else
            {
                int i32value = 0;
                if (iCoreType == 4 || iCoreType == 5)
                {
                    i32value = (int)(256 * (1.0 / fValue));
                }
                else
                {
                    i32value = (int)(fValue * 10000);
                }

                int errRet = 0;
                for (int i = 0; i < 10; i++)
                {
                    errRet = SetHumidity(handle, i32value); //60. 反射温度 设置
                    if (errRet == 0)
                    {
                        break;
                    }
                }
                if (errRet != 0)
                {
                    MessageBox.Show("set fail");
                }
            }
        }

        private void buttonEMISS_Click(object sender, EventArgs e)
        {
            float fValue = Convert.ToSingle(textBoxEMISS.Text);

            if (fValue < 0.009 || fValue > 1)
            {
                MessageBox.Show("Range: [0.01,1]!");
                return;
            }
            else
            {
                int i32value = 0;
                if (iCoreType == 4 || iCoreType == 5)
                {
                    i32value = (int)(256 * (1.0 / fValue));
                }
                else
                {
                    i32value = (int)(fValue * 10000);
                }

                int errRet = 0;
                for (int i = 0; i < 10; i++)
                {
                    errRet = SetEmiss(handle, i32value); //60. 反射温度 设置
                    if (errRet == 0)
                    {
                        break;
                    }
                }
                if (errRet != 0)
                {
                    MessageBox.Show("set fail");
                }
            }
        }

        private void buttonDISTANCE_Click(object sender, EventArgs e)
        {
            float fValue = Convert.ToSingle(textBoxDISTANCE.Text.Trim());

            if (fValue < 0.1)
            {
                MessageBox.Show("Range: > 0.1, please input again!");
                return;
            }
            else
            {
                int i32value = 0;
                if (iCoreType == 4 || iCoreType == 5)
                {
                    i32value = (int)(fValue * 10);
                }
                else
                {
                    i32value = (int)(fValue * 10000);
                }

                int errRet = 0;
                for (int i = 0; i < 10; i++)
                {
                    errRet = SetDistance(handle, i32value); //60. 反射温度 设置
                    if (errRet == 0)
                    {
                        break;
                    }
                }
                if (errRet != 0)
                {
                    MessageBox.Show("set fail");
                }
            }
        }

        private void buttonShutterCorrection_Click(object sender, EventArgs e)
        {
            int errRet = 0;

            for (int i = 0; i < 10; i++)
            {
                if (iCoreType == 1)
                {
                    errRet = sdk_shutter_correction(handle, iCoreType, 0);
                    if (errRet == 0)
                    {
                        break;
                    }
                }
                else
                {
                    errRet = sdk_shutter_correction(handle, iCoreType, 1);
                    if (errRet == 0)
                    {
                        break;
                    }
                }
            }
        }

        private void buttonPALETTE_Click(object sender, EventArgs e)
        {
            iCoreType = CoreType(handle);
            int iPalette = comboBoxPALETTE.SelectedIndex;
            int errRet = 0;

            for (int i = 0; i < 10; i++)
            {
                errRet = sdk_set_color_plate(handle, iCoreType, iPalette);
                if (errRet == 0)
                {
                    break;
                }
            }
        }

        public int GUI_LT_TEMP_SWITCH_READ(ref byte p8value) //70. 温度成像T值切换开关状态读取，p8value=0: 关,  p8value=1:开
        {
            //Prepare Data
            byte[] szCmd = { 0xAA, 0x05, 0x07, 0x71, 0x00, 0x00, 0x27, 0xEB, 0xAA };

            //Send Request

            int errRet = WriteHandle(handle, szCmd, 0x09);
            if (errRet != 0)
            {
                return errRet;
            }

            Thread.Sleep(100);

            //Receive Data
            int recvCnt = 0;
            //byte[] recvBuf = new byte[512];
            StringBuilder recvBuf = new StringBuilder();
            errRet = ReadHandle(handle, recvBuf, ref recvCnt);
            if (errRet != 0)
            {
                return errRet;
            }

            //Parse Data	
            if (recvCnt > 3 &&
                recvBuf[0] == 0x55 &&
                recvBuf[1] == recvCnt &&
                recvBuf[2] == 0x07 &&
                recvBuf[3] == 0x71 &&
                recvBuf[4] == 0x33)
            {
                p8value = (byte)recvBuf[5];
                return 0;
            }
            else
            {
                if (recvCnt > 3 &&
                    recvBuf[0] == 0x55 &&
                    recvBuf[1] == 0x05 &&
                    recvBuf[2] == 0x07 &&
                    recvBuf[3] == 0xF0 &&
                    recvBuf[4] == 0x33)
                {
                    p8value = 2; //机芯返回55 05 07 F0 33 00 sum EB AA指令格式正确但不支持此指令
                    return 0;
                }
                else
                {
                    return -1;
                }
            }
        }

        private void DeviceList_SelectedIndexChanged(object sender, EventArgs e)
        {
        }

        //计算CHKSUM
        byte RAY_AAL_CKSUM(byte[] buf, int len)
        {
            byte cksum = 0;
            int i;

            for (i = 0; i < len; i++)
            {
                cksum += buf[i];
            }

            return cksum;
        }

        public int SetGain(int iGainType)
        {
            byte[] cmd = { 0xAA, 0x05, 0x07, 0x01, 0x01, 0x00, 0x00, 0xEB, 0xAA };

            cmd[0x05] = (byte)iGainType;
            cmd[0x06] = RAY_AAL_CKSUM(cmd, 0x06);

            if (WriteHandle(handle, cmd, 9) != 0)
            {
                return -1;
            }
            return 0;
        }

        public int GetGain(ref int iGainType)
        {
            byte[] cmd = { 0xAA, 0x05, 0x07, 0x01, 0x00, 0x00, 0x00, 0xEB, 0xAA };

            cmd[0x06] = RAY_AAL_CKSUM(cmd, 0x06);

            if (WriteHandle(handle, cmd, 9) == 0)
            {
                StringBuilder recv = new StringBuilder();
                int size = 0;
                int t = 0;
                TIP:
                Thread.Sleep(100);
                if (ReadHandle(handle, recv, ref size) == 0)
                {
                    if (size > 3 && recv[0] == 0x55 && recv[1] == size - 4 && recv[2] == 0x07 && recv[3] == 0x01 && recv[4] == 0x33)
                    {
                        iGainType = recv[5];
                        return 0;
                    }
                    else
                    {
                        t++;
                        if (t < 1000)
                            goto TIP;
                        return -1;
                    }
                }
                return -1;
            }
            else
            {
                return -1;
            }
        }

        private void buttonGainSet_Click(object sender, EventArgs e)
        {
            int iGain = 0;
            iGain = comboBoxGain.SelectedIndex;

            if (iGain == 2)
            {
                iGain = 3;
            }

            if (SetGain(iGain) != 0)
            {
                MessageBox.Show("set fail");
            }
        }
    }
}

    

