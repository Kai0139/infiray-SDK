package me.giraffetree.jnafunc;

import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.Pointer;
import com.sun.jna.Structure;
import com.sun.jna.examples.win32.W32API;
import com.sun.jna.ptr.ByteByReference;
import com.sun.jna.ptr.FloatByReference;
import com.sun.jna.ptr.IntByReference;
import com.sun.jna.win32.StdCallLibrary;
import jdk.nashorn.internal.runtime.Context;
import org.opencv.core.Mat;
import org.opencv.highgui.HighGui;
import org.opencv.imgproc.Imgproc;

import javax.swing.*;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.awt.image.DataBufferByte;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.List;

import static me.giraffetree.jnafunc.test.*;
import static org.opencv.core.CvType.CV_8UC2;
import static org.opencv.highgui.HighGui.imshow;

/**
 * @author fu
 */
public class InterfaceForUSB {

    public interface JnaLibrary extends Library {
        // JNA 为 dll 名称
        JnaLibrary INSTANCE = Native.load("USBSDK", JnaLibrary.class);

        IntByReference sdk_create();//SDK创建
        int sdk_loginDevice(IntByReference hHandle, W32API.HWND hWnd);
        int SearchDevice(IntByReference handle,DeviceLst.ByReference rms);//搜索设备
        boolean OpenDevice(IntByReference handle,int iGetCurSel, int portIndex);//打开设备
        interface iVideoCallBack extends StdCallLibrary.StdCallCallback{
            public void invoke(Pointer pBuffer, int iWidth, int iHeight );
        }
        void SetVideoCallBack(IntByReference handle,VideoCallBack pVideoCallBack, Context context);//视频回调

        interface iTempCallBack extends StdCallLibrary.StdCallCallback{
            public void invoke(Pointer pBuffer, int iWidth, int iHeight );
        }
        void SetTempCallBack(IntByReference handle,TempCallBack tempcallback, Context context);//温度回调
        int ReadUSBVersion(IntByReference handle); //读取 USB 板程序版本
        boolean CommunicationType(IntByReference handle);//获取通信类型
        int CoreType(IntByReference handle);//获取机芯类型
        int TempMeasureType(IntByReference handle);//获取测温类型
        void CloseDevice(IntByReference handle);//关闭设备
        int ReadHandle(IntByReference handle,ByteByReference buf, IntByReference pLen);//通信读指令接口
        int WriteHandle(IntByReference handle,ByteByReference buf, int len);//通信写指令接口
        int sdk_shutter_correction(IntByReference handle,int iCoreType, int type);//快门校正
        int sdk_set_color_plate(IntByReference hanle,int iType, int color_plate);//色板切换
        int sdk_get_color_plate(IntByReference handle,int iType, IntByReference color_plate);//色板读取
        int sdk_get_SN_PN(ByteByReference strSN, ByteByReference strPN);//读取PN SN
        int sdk_get_FPA_temp(FloatByReference fTemp);//读取 FPA 温度
        int sdk_get_camera_temp(FloatByReference fTemp);//读取 camera 温度
        int sdk_get_width(IntByReference iValue);//读取面阵宽
        int sdk_get_height(IntByReference iValue);//读取面阵高
        int sdk_get_wtr_status(IntByReference iStatus);//读取温宽拉伸开关
        int sdk_set_wtr_status(int iStatus);//设置温宽拉伸开关
        int sdk_set_wtr_low_threshold(int iThreshold);//设置温宽拉伸低温阈值
        int sdk_get_wtr_low_threshold(IntByReference iThreshold);//读取温宽拉伸低温阈值
        int sdk_set_wtr_high_threshold(int iThreshold);//设置温宽拉伸高温阈值
        int sdk_get_wtr_high_threshold(IntByReference iThreshold);//读取温宽拉伸高温阈值
        int sdk_set_envir_param(IntByReference handle,Envir_param envir_param);//设置环境变量
        int sdk_get_envir_param(IntByReference handle,Envir_param.ByReference genvir_param);//读取环境变量
        int sdk_envir_effect(IntByReference handle);//环境变量生效
        int sdk_read_temp_unit(IntByReference handle,ByteByReference ucUnit);//读取温度单位
        int sdk_set_temp_unit(IntByReference handle,byte ucUnit);//切换温度单位
        void ReleaseSDK(IntByReference handle); //释放SDK

        public static class DeviceInfo extends Structure {
            public static class ByReference extends DeviceInfo implements Structure.ByReference{
            }
            public static class ByValue extends DeviceInfo implements Structure.ByValue{
            }
            public byte[] id=new byte[4];///Device Id
            public byte[] cName = new byte[260]; //the Device name
         //   public byte[] cComPort = new byte[260]; //the Device ComPort
            @Override
            protected List<String> getFieldOrder() {
                List<String> Field = new ArrayList<String>();
                Field.add("id");
                Field.add("cName");
              //  Field.add("cComPort");
                return Field;
            }
        }
        public static class Envir_param extends Structure {
            public static class ByReference extends Envir_param implements Structure.ByReference{
            }
            public static class ByValue extends Envir_param implements Structure.ByValue{
            }
            public int emissivity;
            public int airTemp;
            public int reflectTemp;
            public int humidity;
            public int distance;
            @Override
            protected List<String> getFieldOrder() {
                List<String> Field = new ArrayList<String>();
                Field.add("emissivity");
                Field.add("airTemp");
                Field.add("reflectTemp");
                Field.add("humidity");
                Field.add("distance");
                return Field;
            }
        }
        public static class ComName extends Structure {
            public static class ByReference extends ComName implements Structure.ByReference{
            }
            public static class ByValue extends ComName implements Structure.ByValue{
            }
            public byte[] cComPort = new byte[260]; //the Device name

            @Override
            protected List<String> getFieldOrder() {
                List<String> Field = new ArrayList<String>();
                Field.add("cComPort");
                return Field;
            }
        }
        public static class DeviceLst extends Structure {
            public static class ByReference extends DeviceLst implements Structure.ByReference{
            }
            public static class ByValue extends DeviceLst implements Structure.ByValue{
            }
           // public byte[] iComCount=new byte[4];
            public int iComCount=0;
            public int iNumber = 0; //Device Count
            public DeviceInfo[] DevInfo = new DeviceInfo[50];
            public ComName[] ComNameInfo = new ComName[50];
            @Override
            protected List<String> getFieldOrder() {
                List<String> Field = new ArrayList<String>();
                Field.add("iComCount");
                Field.add("iNumber");
                Field.add("DevInfo");
                Field.add("ComNameInfo");
                return Field;
            }
        }
    }

    /**
     * 将OpenCV的Mat转换为Image
     * @param matrix
     * @return
     */
    private static Image mat2BufferedImage(Mat matrix) {
        int type = BufferedImage.TYPE_BYTE_GRAY;
        if (matrix.channels() > 1) {
            type = BufferedImage.TYPE_3BYTE_BGR;
        }
        int bufferSize = matrix.channels() * matrix.cols() * matrix.rows();
        byte[] buffer = new byte[bufferSize];
        matrix.get(0, 0, buffer); // 获取所有的像素点
        BufferedImage image = new BufferedImage(matrix.cols(), matrix.rows(), type);
        final byte[] targetPixels = ((DataBufferByte) image.getRaster().getDataBuffer()).getData();
        System.arraycopy(buffer, 0, targetPixels, 0, buffer.length);
        return image;
    }

    /**
     * 图片容器
     */
    private static class PaintPanel extends JPanel {

        private ImageIcon imageIcon;
        private Dimension size;
        public PaintPanel(Image image, Dimension size) {
            imageIcon = new ImageIcon(image);
            this.size = size;
        }

        @Override
        public Dimension getPreferredSize() {
            // 初识大小
            return size;
        }

        @Override
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);

            // 图片大小自适应，可拖拽
            g.drawImage(this.imageIcon.getImage(), 0, 0, this.getWidth(), this.getHeight(), imageIcon.getImageObserver());
        }
    }
    public static class startView implements Runnable {
        @Override
        public void run() {
            try {
                System.out.println("打开设备："+OpenDevice(0, iPort));
                iCoreType = CoreType(handle);
                System.out.println("iCoreType:"+iCoreType);
                if(iCoreType != 205){
                    SetTempCallBack(tempCallBack,null);
                    SetVideoCallBack(videoCallBack,null);}
            }catch (Exception e){}

        }

    }
    public static void closeView() {
        EventQueue.invokeLater(new Runnable() {
            @Override
            public void run() {
                try {
                    ReleaseSDK(handle);
                    System.out.println("关闭设备成功");
                }catch (Exception e){
                    e.printStackTrace();
                }
            }
        });
    }
    private static TempCallBack tempCallBack = new TempCallBack();
    private static VideoCallBack videoCallBack = new VideoCallBack();

    static Image img;

    private final static String ovpath = InterfaceForUSB.class.getClassLoader().getResource("//").getPath();
    private final static String OPENCV_DLL_PATH =   "win32-x86-64/opencv_java411.dll";

    static {
        //加载动态链接库
        System.load(ovpath+OPENCV_DLL_PATH);
    }

    /** 初始化*/
    public static IntByReference initializeSDK(){
        return JnaLibrary.INSTANCE.sdk_create();
    }
    /** 释放SDK*/
    public static void ReleaseSDK(IntByReference handle){
        JnaLibrary.INSTANCE.ReleaseSDK(handle);
    }
    /** 搜索设备*/
    public static int SearchDevice(IntByReference handle,JnaLibrary.DeviceLst.ByReference p){
        return JnaLibrary.INSTANCE.SearchDevice(handle,p);
    }

    /** 登录设备*/
    public static int LoginDevice(IntByReference hHandle, W32API.HWND hWnd){
        return JnaLibrary.INSTANCE.sdk_loginDevice(hHandle, hWnd);
    }
    /** 打开设备*/
    public static boolean OpenDevice(int iGetCurSel, int portIndex){
        return JnaLibrary.INSTANCE.OpenDevice(handle,iGetCurSel,portIndex);

    }
    /** 注册图像回调*/
    public static void  SetVideoCallBack(VideoCallBack pVideoCallBack, Context context){
        JnaLibrary.INSTANCE.SetVideoCallBack(handle,pVideoCallBack,context);

    }
    /** 注册温度回调*/
    public static void  SetTempCallBack(TempCallBack ptmpCallBack, Context context){
        JnaLibrary.INSTANCE.SetTempCallBack(handle,ptmpCallBack,context);

    }
    /** 关闭设备*/
    public static void CloseDevice(IntByReference handle){
        JnaLibrary.INSTANCE.CloseDevice(handle);

    }
    /** 获取通信类型*/
    public static boolean CommunicationType( IntByReference handle) {
        return JnaLibrary.INSTANCE.CommunicationType(handle);
    }
    /** 获取机芯类型*/
    public static int CoreType(IntByReference handle) {
        return JnaLibrary.INSTANCE.CoreType(handle);
    }
    /** 获取程序版本*/
    public static int ReadUSBVersion(IntByReference handle) {
        return JnaLibrary.INSTANCE.ReadUSBVersion(handle);
    }
    /** 获取测温类型*/
    public static int TempMeasureType(IntByReference handle) {

        return JnaLibrary.INSTANCE.TempMeasureType(handle);
    }
    /** 通信读指令接口*/
    public static int ReadHandle(ByteByReference buf,IntByReference pLen) {

        return JnaLibrary.INSTANCE.ReadHandle(handle,buf, pLen);
    }
    /** 通信写指令接口*/
    public static int WriteHandle(ByteByReference buf,int pLen) {

        return JnaLibrary.INSTANCE.WriteHandle(handle,buf, pLen);
    }
    /** 快门校正*/
    public static int sdk_shutter_correction(IntByReference handle,int iCoreType, int type) {

        return JnaLibrary.INSTANCE.sdk_shutter_correction(handle,iCoreType, type);
    }
    /** 色板切换*/
    public static int sdk_set_color_plate(IntByReference handle,int iType, int color_plate) {

        return JnaLibrary.INSTANCE.sdk_set_color_plate(handle,iType, color_plate);
    }
    /** 色板读取*/
    public static int sdk_get_color_plate(IntByReference handle,int iType, IntByReference color_plate) {

        return JnaLibrary.INSTANCE.sdk_get_color_plate(handle,iType, color_plate);
    }
    /** 读取PN SN*/
    public static int sdk_get_SN_PN(ByteByReference strSN, ByteByReference strPN) {

        return JnaLibrary.INSTANCE.sdk_get_SN_PN(strSN, strPN);
    }
    /** 读取 FPA 温度*/
    public static int sdk_get_FPA_temp(FloatByReference fTemp) {

        return JnaLibrary.INSTANCE.sdk_get_FPA_temp(fTemp);
    }
    /** 读取 camera 温度*/
    public static int sdk_get_camera_temp(FloatByReference fTemp) {

        return JnaLibrary.INSTANCE.sdk_get_camera_temp(fTemp);
    }
    /** 读取面阵宽*/
    public static int sdk_get_width(IntByReference iValue) {

        return JnaLibrary.INSTANCE.sdk_get_width(iValue);
    }
    /** 读取温宽拉伸开关*/
    public static int sdk_get_wtr_status(IntByReference iStatus){

        return JnaLibrary.INSTANCE.sdk_get_wtr_status(iStatus);
    }
    /** 设置温宽拉伸开关*/
    public static int sdk_set_wtr_status(int iStatus) {

        return JnaLibrary.INSTANCE.sdk_set_wtr_status(iStatus);
    }
    /** 设置温宽拉伸低温阈值*/
    public static int sdk_set_wtr_low_threshold(int iThreshold){

        return JnaLibrary.INSTANCE.sdk_set_wtr_low_threshold(iThreshold);
    }
    /** 读取温宽拉伸低温阈值*/
    public static int sdk_get_wtr_low_threshold(IntByReference iThreshold) {

        return JnaLibrary.INSTANCE.sdk_get_wtr_low_threshold(iThreshold);
    }
    /** 设置温宽拉伸高温阈值*/
    public static int sdk_set_wtr_high_threshold(int iThreshold) {

        return JnaLibrary.INSTANCE.sdk_set_wtr_high_threshold(iThreshold);
    }
    /** 读取温宽拉伸高温阈值*/
    public static int sdk_get_wtr_high_threshold(IntByReference iThreshold) {

        return JnaLibrary.INSTANCE.sdk_get_wtr_high_threshold(iThreshold);
    }
    /** 设置环境变量*/
    public static int sdk_set_envir_param(IntByReference handle,JnaLibrary.Envir_param envir_data) {

        return JnaLibrary.INSTANCE.sdk_set_envir_param(handle,envir_data);
    }
    /** 读取环境变量*/
    public static int sdk_get_envir_param(IntByReference handle,JnaLibrary.Envir_param.ByReference genvir_data) {

        return JnaLibrary.INSTANCE.sdk_get_envir_param(handle,genvir_data);
    }

    /** 环境变量生效*/
    public static int sdk_envir_effect(IntByReference handle) {

        return JnaLibrary.INSTANCE.sdk_envir_effect(handle);
    }
    public static int sdk_read_temp_unit(IntByReference handle,ByteByReference ucUnit){
        return JnaLibrary.INSTANCE.sdk_read_temp_unit(handle,ucUnit);
    }
    public static int sdk_set_temp_unit(IntByReference handle,Byte ucUnit){
        return JnaLibrary.INSTANCE.sdk_set_temp_unit(handle,ucUnit);
    }
    /** 读取温宽拉伸高温阈值
     public static int sdk_read_temp_unit(unsigned char* ucUnit) {

     return JnaLibrary.INSTANCE.sdk_read_temp_unit(ucUnit);
     }
     */
    /** 读取温宽拉伸高温阈值
     public static int sdk_set_temp_unit(unsigned char ucUnit) {

     return JnaLibrary.INSTANCE.sdk_set_temp_unit(ucUnit);
     }
     */

    public static Dimension size = new Dimension();

    public static class VideoCallBack implements JnaLibrary.iVideoCallBack {
        @Override
        public void invoke(Pointer pBuffer, int iWidth, int iHeight ){
            int Width = iWidth;
            int Height = iHeight;
            //System.out.println(Width);384
            //System.out.println(Height);288
            ByteBuffer buffer = pBuffer.getByteBuffer(0,Width*Height*2);
            Mat mat = new Mat(Height, Width, CV_8UC2, buffer);

            Mat mgMatSrc = new Mat();
            if(iCoreType == 4)
                Imgproc.cvtColor(mat, mgMatSrc, Imgproc.COLOR_YUV2BGR_YUYV);
            else
                Imgproc.cvtColor(mat, mgMatSrc, Imgproc.COLOR_YUV2BGR_UYVY);
            //img = mat2BufferedImage(mgMatSrc);
            //int channels = mgMatSrc.channels();
            imshow("Demo", mgMatSrc);
            HighGui.waitKey(1);

            //size.height = 288;
            //size.width = 384;
            //showImage(img, size);
        }

    }
    //此处为温度回调
    public static class TempCallBack implements JnaLibrary.iTempCallBack {
        @Override
        public void invoke(Pointer pBuffer, int iWidth, int iHeight ){

            int max_x = 0, max_y = 0;
            float temp = 0;

     /*       float[] tempArray = pBuffer.getFloatArray(0, iWidth * iHeight);
            for (int i = 0; i < iHeight; i++) {
                for (int j = 0; j < iWidth; j++) {
                    if (tempArray[iHeight*i + j] > temp) {
                        temp = tempArray[iHeight*i + j];
                        max_x = j;
                        max_y = i;
                    }
                }
            }
            System.out.printf("max temp[%3d,%3d] = %f%n", max_x, max_y, temp);*/
        }

    }


}
