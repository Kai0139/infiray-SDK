package me.giraffetree.jnafunc;

import com.sun.jna.Native;
import com.sun.jna.examples.win32.W32API;
import com.sun.jna.ptr.ByteByReference;
import com.sun.jna.ptr.IntByReference;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import static me.giraffetree.jnafunc.InterfaceForUSB.*;

public class test {
    public static int iCoreType;
    public static int iPort;
    public static StringBuffer[] stringBuffer = new StringBuffer[10];
    public static StringBuffer[] port = new StringBuffer[10];
    static JTextField bairTemp=new JTextField();
    static JTextField bdistance=new JTextField();
    static JTextField bemissivity=new JTextField();
    static JTextField bhumidity=new JTextField();
    static JTextField breflectTemp=new JTextField();
    static JTextField JCommunicationType=new JTextField();
    static JTextField JCoreType=new JTextField();
    static JTextField JTempMeasureType=new JTextField();
    static JTextField Jsdk_get_color_plate=new JTextField();
    static JTextField Jsdk_read_temp_unit=new JTextField();
    static JTextField JReadUSBVersion=new JTextField();
    static JPanel jpp1 ;//
    static JComboBox jcombo ;//机芯名
    static JPanel comname ;
    static JComboBox icomname;//端口号
    static IntByReference handle;
    static JButton get_envir_param;
    static JButton envir_effect;
    static JButton get_color_plate;
    static JButton read_temp_unit;
    static JButton set_temp_unit;

    private static class Listen implements ActionListener { //ActionListener用来响应用户点击按钮
        public void actionPerformed(ActionEvent e) {  //定义处理事件的方法
            // TODO Auto-generated method stub
            String name=e.getActionCommand();//返回与此动作相关的命令字符串
            if(name.equals("初始化")){
                handle = initializeSDK();
                W32API.HWND hwnd = new W32API.HWND(Native.getComponentPointer(f));
                System.out.println("sdk_create:"+hwnd.toString());
                System.out.println("sdk_login:"+LoginDevice(handle,hwnd));


            }else if (name.equals("搜索设备")){
                /** 搜索设备*/
                me.giraffetree.jnafunc.InterfaceForUSB.JnaLibrary.DeviceLst.ByReference Devicelists = new InterfaceForUSB.JnaLibrary.DeviceLst.ByReference();
                int result = SearchDevice(handle, Devicelists);
                System.out.println("SearchDevice result:"+result);
                System.out.println("Devicelists.iNumber:"+Devicelists.iNumber);
                System.out.println("Devicelists.iComCount:"+Devicelists.iComCount);

                for(int i = 0;  i < Devicelists.iNumber;i++) {
                    stringBuffer[i] = new StringBuffer();
                    for (int j = 0; j <5; j++) {
                        stringBuffer[i].append((char) Devicelists.DevInfo[i].cName[j]);
                        System.out.println("Name:"+Devicelists.DevInfo[i].cName[j]);
                    }
                    System.out.println(stringBuffer[i]);
                }

                for(int i = 0; i < Devicelists.iComCount; i ++){
                    port[i] = new StringBuffer();
                    for(int j = 0 ;j < 5; j++){
                        port[i].append((char) Devicelists.ComNameInfo[i].cComPort[j]);
                        System.out.println("port:"+j+":"+Devicelists.ComNameInfo[i].cComPort[j]);
                    }
                    System.out.println(port[i]);
                }
                jpp1 = new JPanel();
                jcombo = new JComboBox(stringBuffer);
                //实例化JPanel面板
                jpp1.add(jcombo);
                jpp1.setBounds(210, 80, 100, 30);
                f.add(jpp1);
                jpp1.updateUI();
                comname = new JPanel();
                icomname = new JComboBox(port);
                //实例化JPanel面板
                comname.add(icomname);
                comname.setBounds(210, 120, 100, 30);
                f.add(comname);
                comname.updateUI();

            }else if (name.equals("打开设备")){
                /** 打开设备*/
                iPort = Integer.parseInt(port[icomname.getSelectedIndex()].substring(3,4).toString());
               // iPort = 4;
                System.out.println(iPort);
                InterfaceForUSB.startView start = new InterfaceForUSB.startView();

                Thread thread = new Thread(start);
                thread.start();
            }else if (name.equals("关闭设备")){
                closeView();
                /** 关闭设备*/

            }else if (name.equals("程序版本")){
                /** 程序版本*/
                int Version = ReadUSBVersion(handle);
                JReadUSBVersion.setText(Integer.toHexString(Version));
                System.out.println("Version:"+Version);
            }
            else if (name.equals("通信类型")){
                /** 通信类型*/
                boolean bool =  CommunicationType(handle);
                System.out.println("bool:"+bool);
                if(bool){
                    JCommunicationType.setText("串口通信");
                    System.out.println("串口通信");

                }else{
                    JCommunicationType.setText("get/set zoom");
                    System.out.println("get/set zoom");
                }
            }
            else if (name.equals("机芯类型")){
                /** 机芯类型*/

                iCoreType = CoreType(handle);
                System.out.println("iCoreType:>>>>>>>>>>>>>>>>"+iCoreType);
                if(iCoreType == 0) JCoreType.setText("获取失败");
                else if (iCoreType == 1) JCoreType.setText("LT测温型");
                else if(iCoreType == 2) JCoreType.setText("MicroIII 测温型");
                else if(iCoreType == 3) JCoreType.setText("MicroIII 成像型");
                else if(iCoreType == 4) {
                    JCoreType.setText("AT200F");
                    get_envir_param.setEnabled(false);
                    envir_effect.setEnabled(false);
                    get_color_plate.setEnabled(false);
                    read_temp_unit.setEnabled(false);
                    set_temp_unit.setEnabled(false);
                    bairTemp.setText("25");
                    bdistance.setText("0.5");
                    bemissivity.setText("1");
                    bhumidity.setText("1");
                    breflectTemp.setText("25");
                }
                else if(iCoreType == 5) {
                    JCoreType.setText("AT21F");
                    get_envir_param.setEnabled(false);
                    envir_effect.setEnabled(false);
                    get_color_plate.setEnabled(false);
                    read_temp_unit.setEnabled(false);
                    set_temp_unit.setEnabled(false);
                    bairTemp.setText("25");
                    bdistance.setText("0.5");
                    bemissivity.setText("1");
                    bhumidity.setText("1");
                    breflectTemp.setText("25");
                    iCoreType=4;
                }
                else System.out.println(iCoreType);

            }
            else if (name.equals("测温类型")){
                /** 测温类型*/
                int type = TempMeasureType(handle);
                if(type == 0) JTempMeasureType.setText("获取失败");
                else if (type == 1) JTempMeasureType.setText("人体测温");
                else if(type == 2) JTempMeasureType.setText("工业测温");
            }
            else if (name.equals("通信读指令")){
                /** 通信读指令*/
                ByteByReference buf = new ByteByReference();
                IntByReference pLen = new IntByReference();
                System.out.println(ReadHandle(buf, pLen));
            }
            else if (name.equals("通信写指令")){
                /** 通信写指令*/
                ByteByReference buf = new ByteByReference();
                int pLen = 0;
                System.out.println(WriteHandle(buf, pLen));
            }
            else if (name.equals("快门校正")){
                /** 快门校正*/
                int type = 0;
                if(iCoreType == 1 ) type = 0;
                else type = 1;
                int t = sdk_shutter_correction(handle,iCoreType,type);
                if(t == 0) System.out.println("快门校正成功");
                else if (t == -1) System.out.println("快门校正失败");
            }
            else if (name.equals("色板切换")){
                /** 色板切换*/
                int iType = iCoreType;
                if(Jsdk_get_color_plate.getText().equals("")){
                    ShowUtils.plainMessage("提示", "请输入要切换的伪彩值");
                    return;
                }
                int color_plate = Integer.parseInt(Jsdk_get_color_plate.getText());
                System.out.println(color_plate);
                int t = sdk_set_color_plate(handle,iType, color_plate);
                if(t == 0) System.out.println("色板切换成功");
                else if (t == -1) System.out.println("色板切换失败");
            }
            else if (name.equals("色板读取")){
                /** 色板读取*/
                int iType = iCoreType;
                IntByReference color_plate = new IntByReference();
                int t = sdk_get_color_plate(handle,iType, color_plate);
                if(t == 0 ){
                    Jsdk_get_color_plate.setText(Integer.toString(color_plate.getValue()));
                }
                else System.out.println("色板读取失败");
            }
            else if (name.equals("读取SN&PN")){
                /** 读取SN&PN*/
                ByteByReference buf = new ByteByReference();
                int pLen = 0;
                System.out.println(WriteHandle(buf, pLen));
            }else if (name.equals("读取FPA温度")){
                /** 读取FPA温度*/
                ByteByReference buf = new ByteByReference();
                int pLen = 0;
                System.out.println(WriteHandle(buf, pLen));
            }
            else if (name.equals("设置环境变量")){
                /** 设置环境变量*/

                JnaLibrary.Envir_param envir_data = new JnaLibrary.Envir_param();
                envir_data.airTemp = (int)(Double.parseDouble(bairTemp.getText())*10000.0);
                envir_data.distance = (int)(Double.parseDouble(bdistance.getText())*10000.0);
                envir_data.emissivity = (int)(Double.parseDouble(bemissivity.getText())*10000.0);
                envir_data.humidity = (int)(Double.parseDouble(bhumidity.getText())*10000.0);
                envir_data.reflectTemp = (int)(Double.parseDouble(breflectTemp.getText())*10000.0);
                int t = sdk_set_envir_param(handle,envir_data);

                if(t == 0){

                    System.out.println("airTemp: "+ String.format("%.2f",envir_data.airTemp / 10000.0));
                    System.out.println("distance: "+ String.format("%.2f",envir_data.distance / 10000.0 ));
                    System.out.println("emissivity: "+ String.format("%.2f", envir_data.emissivity / 10000.0) );
                    System.out.println("humidity: "+ String.format("%.2f",envir_data.humidity / 10000.0 ));
                    System.out.println("reflectTemp: "+ String.format("%.2f",envir_data.reflectTemp / 10000.0 ));
                    System.out.println("设置成功");
                }
                else System.out.println("设置失败");
            }
            else if (name.equals("读取环境变量")){
                /** 读取环境变量*/
                JnaLibrary.Envir_param.ByReference envir_data = new JnaLibrary.Envir_param.ByReference();
                int t = sdk_get_envir_param(handle,envir_data);
                if(t == 0){
                    bairTemp.setText(String.format("%.2f",envir_data.airTemp / 10000.0));
                    bdistance.setText(String.format("%.2f",envir_data.distance / 10000.0));
                    bemissivity.setText(String.format("%.2f",envir_data.emissivity / 10000.0));
                    bhumidity.setText(String.format("%.2f",envir_data.humidity / 10000.0));
                    breflectTemp.setText(String.format("%.2f",envir_data.reflectTemp / 10000.0));

                    System.out.println("airTemp: "+ String.format("%.2f",envir_data.airTemp / 10000.0));
                    System.out.println("distance: "+ String.format("%.2f",envir_data.distance / 10000.0 ));
                    System.out.println("emissivity: "+ String.format("%.2f", envir_data.emissivity / 10000.0) );
                    System.out.println("humidity: "+ String.format("%.2f",envir_data.humidity / 10000.0 ));
                    System.out.println("reflectTemp: "+ String.format("%.2f",envir_data.reflectTemp / 10000.0 ));
                }else {
                    System.out.println(t);
                }
            }
            else if (name.equals("环境生效")){
                /** 环境生效*/
                int t = sdk_envir_effect(handle);
                if(t == 0 ) System.out.println("环境变量已生效");else System.out.println("请重试");
            }
            else if (name.equals("读取温度单位")){
                /** 读取温度单位*/
                ByteByReference ucUnit = new ByteByReference();
                int t = sdk_read_temp_unit(handle,ucUnit);
                if(t == 0 ){
                    if(ucUnit.getValue() == 0){
                        Jsdk_read_temp_unit.setText("摄氏度");
                    }else if(ucUnit.getValue() == 1){
                        Jsdk_read_temp_unit.setText("开尔文");
                    }else if(ucUnit.getValue() == 2){
                        Jsdk_read_temp_unit.setText("华氏度");
                    }
                }else System.out.println("请重试:"+t);

            }
            else if (name.equals("切换温度单位")){
                /** 关闭设备*/
                byte ucUnit = Byte.parseByte(Jsdk_read_temp_unit.getText());
                int t = sdk_set_temp_unit(handle,ucUnit);
                if(t == 0){
                    System.out.println("切换成功");
                }else{
                    System.out.println("请重试:"+t);
                }
            }
        }
    }

    public static JFrame f = new JFrame("USB SDK Demo");
    public static void main(String[] args)  {
        f.setSize(800, 700);
        f.setLocation(560,190);
        f.setLayout(null);
        JButton b = new JButton("初始化");
        b.setBounds(100, 50, 120, 30);
        f.add(b);
        JButton Search = new JButton("搜索设备");
        Search.setBounds(100, 100, 120, 30);
        f.add(Search);
        JButton open = new JButton("打开设备");
        open.setBounds(100, 150, 120, 30);
        f.add(open);
        JButton ReadVersion = new JButton("程序版本");
        ReadVersion.setBounds(100, 200, 120, 30);
        f.add(ReadVersion);
        JReadUSBVersion.setBounds(230, 200, 100, 30);
        f.add(BorderLayout.NORTH,JReadUSBVersion);    //文本框边界顶部放置
        //JReadUSBVersion.setBackground(Color.green);

        JButton CommType = new JButton("通信类型");
        CommType.setBounds(100, 250, 120, 30);
        f.add(CommType);
        JCommunicationType.setBounds(230, 250, 100, 30);
        f.add(BorderLayout.NORTH,JCommunicationType);    //文本框边界顶部放置
        // JCommunicationType.setBackground(Color.green);

        JButton coreType = new JButton("机芯类型");
        coreType.setBounds(100, 300, 120, 30);
        f.add(coreType);
        JCoreType.setBounds(230, 300, 100, 30);
        f.add(BorderLayout.NORTH,JCoreType);    //文本框边界顶部放置
        //  JCoreType.setBackground(Color.green);
        JButton TempType = new JButton("测温类型");
        TempType.setBounds(100, 350, 120, 30);
        f.add(TempType);
        JTempMeasureType.setBounds(230, 350, 100, 30);
        f.add(BorderLayout.NORTH,JTempMeasureType);    //文本框边界顶部放置
        //  JTempMeasureType.setBackground(Color.green);
        JButton readHandle = new JButton("通信读指令");
        readHandle.setBounds(100, 400, 120, 30);
       // f.add(readHandle);
        JButton writeHandle = new JButton("通信写指令");
        writeHandle.setBounds(100, 450, 120, 30);
       // f.add(writeHandle);
        get_envir_param = new JButton("读取环境变量");//
        get_envir_param.setBounds(350, 50, 120, 30);
        f.add(get_envir_param);
        JButton set_envir_param = new JButton("设置环境变量");
        set_envir_param.setBounds(350, 100, 120, 30);
        f.add(set_envir_param);
        envir_effect = new JButton("环境生效");//
        envir_effect.setBounds(350, 150, 120, 30);
        f.add(envir_effect);
        JButton shutter_correction = new JButton("快门校正");
        shutter_correction.setBounds(350, 200, 120, 30);
        f.add(shutter_correction);
        JButton set_color_plate = new JButton("色板切换");
        set_color_plate.setBounds(350, 250, 120, 30);
        f.add(set_color_plate);
        get_color_plate = new JButton("色板读取");//
        get_color_plate.setBounds(350, 300, 120, 30);
        f.add(get_color_plate);
        Jsdk_get_color_plate.setBounds(500, 250, 100, 30);
        f.add(BorderLayout.NORTH,Jsdk_get_color_plate);    //文本框边界顶部放置
        //  Jsdk_get_color_plate.setBackground(Color.green);
        read_temp_unit = new JButton("读取温度单位");//
        read_temp_unit.setBounds(350, 350, 120, 30);
        f.add(read_temp_unit);
        Jsdk_read_temp_unit.setBounds(500, 350, 100, 30);
        f.add(BorderLayout.NORTH,Jsdk_read_temp_unit);    //文本框边界顶部放置
        //  Jsdk_read_temp_unit.setBackground(Color.green);
        set_temp_unit = new JButton("切换温度单位");//
        set_temp_unit.setBounds(350, 400, 120, 30);
        f.add(set_temp_unit);
        JTempMeasureType.setBounds(230, 350, 100, 30);
        f.add(BorderLayout.NORTH,JTempMeasureType);    //文本框边界顶部放置
        //  JTempMeasureType.setBackground(Color.green);
        JButton close = new JButton("关闭设备");
        close.setBounds(500, 400, 120, 30);
        f.add(close);


        bairTemp.setBounds(500, 20, 120, 30);
        f.add(BorderLayout.NORTH,bairTemp);    //文本框边界顶部放置
        //  bairTemp.setBackground(Color.green);
        bairTemp.setText("airTemp");


        bdistance.setBounds(500, 60, 120, 30);
        f.add(BorderLayout.NORTH,bdistance);    //文本框边界顶部放置
        //   bdistance.setBackground(Color.green);
        bdistance.setText("distance");


        bemissivity.setBounds(500, 100, 120, 30);
        f.add(BorderLayout.NORTH,bemissivity);    //文本框边界顶部放置
        //  bemissivity.setBackground(Color.green);
        bemissivity.setText("emissivity");


        bhumidity.setBounds(500, 140, 120, 30);
        f.add(BorderLayout.NORTH,bhumidity);    //文本框边界顶部放置
        //  bhumidity.setBackground(Color.green);
        bhumidity.setText("humidity");


        breflectTemp.setBounds(500, 180, 120, 30);
        f.add(BorderLayout.NORTH,breflectTemp);    //文本框边界顶部放置
        //  breflectTemp.setBackground(Color.green);
        breflectTemp.setText("reflectTemp");

        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Listen l = new Listen();
        b.addActionListener(l);
        Search.addActionListener(l);
        open.addActionListener(l);
        close.addActionListener(l);
        CommType.addActionListener(l);
        coreType.addActionListener(l);
        TempType.addActionListener(l);
        TempType.addActionListener(l);
        readHandle.addActionListener(l);
        writeHandle.addActionListener(l);
        get_envir_param.addActionListener(l);
        set_envir_param.addActionListener(l);
        shutter_correction.addActionListener(l);
        set_color_plate.addActionListener(l);
        get_color_plate.addActionListener(l);
        envir_effect.addActionListener(l);
        read_temp_unit.addActionListener(l);
        ReadVersion.addActionListener(l);
        set_temp_unit.addActionListener(l);
        f.setVisible(true);
    }
    //byte[]与int转换
    public static int byteArrayToInt(byte[] b) {
        return   b[3] & 0xFF |
                (b[2] & 0xFF) << 8 |
                (b[1] & 0xFF) << 16 |
                (b[0] & 0xFF) << 24;
    }
}
