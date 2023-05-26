// VSNETStructDef.h
#ifndef __VSNET_STRUCTDEF_H__
#define __VSNET_STRUCTDEF_H__

enum
{
    VSNETALARMMSG_SERSTART = 1,                // Server Start
    VSNETALARMMSG_MOTION,                      // Moving Detection Alarm
    VSNETALARMMSG_VIDEOLOST,                   // Video Lost Alarm
    VSNETALARMMSG_SENSOR,                      // Sensor Alarm
    VSNETALARMMSG_DISKFULL,                    // Disk Full Alarm
    VSNETALARMMSG_HIDEALARM,                   // Video Hide Alarm
    VSNETALARMMSG_SERSTOP,                     // Server Stop
    VSNETALARMMSG_DISKERROR,                   // Disk Error Alarm(smart)
    VSNETALARMMSG_ACCESSVIOLATION,             // violative access
    VSNETALARMMSG_ANALYSESINGLELINEALARM = 11, // Intellective Analyses and single-line Alarm
    VSNETALARMMSG_ANALYSEDOUBLELINEALARM,      // Intellective Analyses and double-line Alarm
    VSNETALARMMSG_ANALYSEREGIONENTRYALARM,     // Alarm for entering Intellective Analyses Region
    VSNETALARMMSG_ANALYSEREGIONEXITALARM,      // Alarm for Leaving Intellective Analyses Region
    VSNETALARMMSG_ANALYSEHOVERALARM,           // Alarm for hovering Intellective Analyses Region
    VSNETALARMMSG_NETANOMALYALARM,             // Network Anomaly Alarm
    VSNETALARMMSG_NVR_PUSENSOR,                // NVR pu Sensor Alarm
	VSNETALARMMSG_DISKLOST,                    // Disk Lost Alarm
	VSNETALARMMSG_ALARM_IN_SHUT = 34,          // Sensor Alarm stop
    VSNETALARMMSG_SGLINEALARM = 100,           // Alarm for Intellective Analyses caution line(>=100 and <=109，Now There are 10 rules for caution line
    VSNETALARMMSG_NODISK = 110,                // No Disk
    VSNETALARMMSG_NET_BROKEN,                  // network line broken
    VSNETALARMMSG_DISKUNHEALTH,                // Disk is unhealth, please change disk timely.
    VSNETALARMMSG_PLATECHECK,                  // Alarm for plate check
    VSNETALARMMSG_FR_NETOFF,                   // Alarm for front device network off
	VSNETALARMMSG_FR_IPUPDATE,                 // Alarm for front device ip address update
    VSNETALARMMSG_IPUPDATE,                    // Alarm for device ip address update
    VSNETALARMMSG_GLOBAL_TEMP,                 // Alarm for global temperature limit
    VSNETALARMMSG_REGION_TEMP,                 // Alarm for region temperature limit
    VSNETALARMMSG_ALARM_IN,                    // Alarm in
    
	//特殊版本命令由120开始，依次累加
    VSNETALARMMSG_IPCONFLICT = 120,            // IP conflict
	
	//DX特殊命令由200开始依次累加
    VSNETALARMMSG_USBSTATE = 200,              // DX USB status 0:plugin 1:plugout
    VSNETALARMMSG_AUDIOCH = 201,               // DX auidoch
    VSNETALARMMSG_DXSWITCHCH = 202,            // DX Swtch Channel
    VSNETALARMMSG_DVDSTATE = 203,              // DX DVD status 0:plugin 1:plugout
    VSNETALARMMSG_DISPDVDINFO = 204,           // DX Notify to display DVD information: 0-no display; 1-get and display 
    
	//报警命令由300以后开始，以此累加（范围：int 65535）
	VSNETALARMMSG_HM_INFRARED = 301,           // 红外对射报警
    VSNETALARMMSG_HM_DEMOLITION = 302,         // 防拆报警

    //VSNETALARMMSG_SD_SPACE_FULL = 400,         ///<SD卡空间满

    //红外报警命令由400以后开始，以此累加（范围：int 65535）
    VSNETALARMMSG_IR_HIGH_TEMPERATURE_ALARM = 401,              // 红外高温报警
    VSNETALARMMSG_IR_LOW_TEMPERATURE_ALARM = 402,               // 红外低温报警
    VSNETALARMMSG_FIRE,                        // Alarm for fire temperature limit
    VSNETALARMMSG_TEMPDIFF,                    // Alarm for temperature compare
    VSNETALARMMSG_SMART_ANALYSIS,              // Alarm for smart analysis
};

enum ENUM_VSNET_VIDEO_RESOLUTION
{
    VSNET_VIDEO_RESOLUTION_QCIF = 0,
    VSNET_VIDEO_RESOLUTION_CIF,
    VSNET_VIDEO_RESOLUTION_2CIF,
    VSNET_VIDEO_RESOLUTION_4CIF,
    VSNET_VIDEO_RESOLUTION_DCIF,
    VSNET_VIDEO_RESOLUTION_QVGA,               // 320*240
    VSNET_VIDEO_RESOLUTION_VGA_60HZ,           // 640*480
    VSNET_VIDEO_RESOLUTION_SVGA_60HZ,          // 800*600
    VSNET_VIDEO_RESOLUTION_XGA_60HZ,           // 1024*768
    VSNET_VIDEO_RESOLUTION_SXGA_60HZ,          // 1280*1024
    VSNET_VIDEO_RESOLUTION_UXGA_60HZ,          // 1600*1200
    VSNET_VIDEO_RESOLUTION_720P,               // 1280*720, no use
    VSNET_VIDEO_RESOLUTION_HDTV,               // 1920*1080, no use
    VSNET_VIDEO_RESOLUTION_SVGA_75HZ,          // 800*600
    VSNET_VIDEO_RESOLUTION_XGA_75HZ,           // 1024*768
    VSNET_VIDEO_RESOLUTION_720P_50HZ,          // 1280*720, 50HZ
    VSNET_VIDEO_RESOLUTION_720P_60HZ,          // 1280*720, 60HZ
    VSNET_VIDEO_RESOLUTION_1080P_50HZ,         // 1920*1080, 50HZ
    VSNET_VIDEO_RESOLUTION_1080P_60HZ,         // 1920*1080, 60HZ
    VSNET_VIDEO_RESOLUTION_LTF,                // 240*192
    VSNET_VIDEO_RESOLUTION_WQVGA1,             // 480*352
    VSNET_VIDEO_RESOLUTION_WQVGA2,             // 480*272
    VSNET_VIDEO_RESOLUTION_UVGA_50HZ,          // 1280*960,50HZ
    VSNET_VIDEO_RESOLUTION_UVGA_60HZ,          // 1280*960,60Hz
    VSNET_VIDEO_RESOLUTION_1080P_30HZ,         // 1920*1080, 30HZ
    VSNET_VIDEO_RESOLUTION_1080I_50HZ,         // 1920*1080, 50HZ
    VSNET_VIDEO_RESOLUTION_1080I_60HZ,         // 1920*1080, 60HZ
    VSNET_VIDEO_RESOLUTION_SXGA_75HZ,          // 1280*1024, 75HZ
    VSNET_VIDEO_RESOLUTION_WXGA_60HZ,          // 1280*800, 60HZ
    VSNET_VIDEO_RESOLUTION_WXGA_75HZ,          // 1280*800, 75HZ
    VSNET_VIDEO_RESOLUTION_SXGAP_60HZ,         // 1400*1050, 60HZ SXGA+
    VSNET_VIDEO_RESOLUTION_SXGAP_75HZ,         // 1400*1050, 75HZ SXGA+
    VSNET_VIDEO_RESOLUTION_WXGAP_60HZ,         // 1440*900,  60HZ WXGA+
    VSNET_VIDEO_RESOLUTION_WSXGAP_60HZ,        // 1680*1050, 60HZ WSXGA+
    VSNET_VIDEO_RESOLUTION_WSUVGAP_60HZ,       // 1920*1080, 60HZ WSUVGA+
    VSNET_VIDEO_RESOLUTION_1366X768_60HZ,      // 1366*768, 60HZ
    VSNET_VIDEO_RESOLUTION_WXGA_59HZ,          // 1280*800, 60HZ,非标
    VSNET_VIDEO_RESOLUTION_1280X720_59HZ,      // 1280*720, 60HZ 非标
    VSNET_VIDEO_RESOLUTION_1360X768_60HZ,      // 1360*768, 60HZ
};

// record type
enum
{
    HDISK_RECTYPE_HAND              = (1 << 0),
    HDISK_RECTYPE_TIMER             = (1 << 1),
    HDISK_RECTYPE_MOTION            = (1 << 2),
    HDISK_RECTYPE_ALARM             = (1 << 3),
    HDISK_RECTYPE_VILOST            = (1 << 4),
    HDISK_RECTYPE_VIHIDE            = (1 << 5),
    HDISK_RECTYPE_OTHER             = (1 << 6),
    HDISK_RECTYPE_BACKUP            = (1 << 7),
    HDISK_RECTYPE_NETANOMALY        = (1 << 8),
    HDISK_RECTYPE_PLATE             = (1 << 9),  // 车牌识别触发的抓拍图片
    HDISK_RECTYPE_TEMP              = (1 << 10), //全局测温和区域测温报警
    HDISK_RECTYPE_SMART_ANALYSIS    = (1 << 11), //智能分析报警
    HDISK_RECTYPE_MASK              = 0xff       //录像掩码，表示所有类型
};

//FTP连接状态
typedef enum
{
    VS_FTP_LINK_OFF = 0,       //连接关闭
    VS_FTP_LINK_SUCCESS,       //连接成功
    VS_FTP_LINK_FAIL,          //连接失败
} VS_FTP_LINK_STATE;        



/*ptz conctrl code*/
enum{
    PTZ_LEFT         =  0,
    PTZ_RIGHT        =  1,
    PTZ_UP           =  2,
    PTZ_DOWN         =  3,
    PTZ_IRISADD      =  4,
    PTZ_IRISDEC      =  5,
    PTZ_FOCUSADD     =  6,
    PTZ_FOCUSDEC     =  7,
    PTZ_ZOOMADD      =  8,
    PTZ_ZOOMDEC      =  9,
    PTZ_GOTOPOINT    =  10,
    PTZ_SETPOINT     =  11,
    PTZ_AUTO         =  12,
    PTZ_STOP         =  13,
    PTZ_LEFTSTOP     =  14,
    PTZ_RIGHTSTOP    =  15,
    PTZ_UPSTOP       =  16,
    PTZ_DOWNSTOP     =  17,
    PTZ_IRISADDSTOP  =  18,
    PTZ_IRISDECSTOP  =  19,
    PTZ_FOCUSADDSTOP =  20,
    PTZ_FOCUSDECSTOP =  21,
    PTZ_ZOOMADDSTOP  =  22,
    PTZ_ZOOMDECSTOP  =  23,
    PTZ_LIGHT        =  24,
    PTZ_LIGHTSTOP    =  25,
    PTZ_RAIN         =  26,
    PTZ_RAINSTOP     =  27,
    PTZ_TRACK        =  28,
    PTZ_TRACKSTOP    =  29,
    PTZ_DEVOPEN      =  30,
    PTZ_DECCLOSE     =  31,
    PTZ_AUTOSTOP     =  32,
    PTZ_CLEARPOINT   =  33,
    PTZ_LEFTUP       =  200,
    PTZ_LEFTUPSTOP   =  201,
    PTZ_RIGHTUP      =  202,
    PTZ_RIGHTUPSTOP  =  203,
    PTZ_LEFTDOWN     =  204,
    PTZ_LEFTDOWNSTOP =  205,
    PTZ_RIGHTDOWN    =  206,
    PTZ_RIGHTDOWNSTOP=  207,
	PTZ_LOOP_START     =  208,     // 开始预置点轮巡   部分设备支持  value 轮巡序号 priority 轮询时间（0或5-1800）
	PTZ_LOOP_STOP      =  209,     // 停止预置点轮巡   部分设备支持  value 轮巡序号
};

//道口主机  获取格式化状态值
enum
{
	HDISK_UNFORMATTED = 0,
	HDISK_FORMATTING,
	HDISK_FORMATFINISH,
};

//Device type
#define DEVICE_DVS      0X01
#define DEVICE_DVR      0X02
#define DEVICE_IPC      0X03
#define DEVICE_NVR      0X04

// Transmit Customer's Rights
#define VSNET_USER_RIGHT_ADMIN      1   // Administrator Right
#define VSNET_USER_RIGHT_HIOPER     2   // High-grade Operator
#define VSNET_USER_RIGHT_OPERIAL    3   // Operator

#define VSNET_DVR_MAXCH             64  // Max number for channel
#define VSNET_DVR_MAXALARMOUT       16  // Max number for alarm output
#define VSNET_DVR_MAXTRACKNUM       16  // Max number for track
#define VSNET_DVR_MAXVONUM          8   // Max number for vo
#define VSNET_DVR_MAXSTM            4   // Max number for stream

#define VSNET_OSDTITLE_NUM          6   //Max number for OSDTITLE
#define VSNET_CAPTURE_OSDSTR_LENTH  60  //Max number for character

#define VSNET_NETCFG_IPV6LEN        48  //ipv6 config

/**********************************VSNET_DVR_GUI_PORT******************************************/
#define VSNET_DVR_GUI_PORT          10000   // DVR GUI内部通信端口10000~10999，DVR GUI专用
// 10001:参数端口
// 10002:串口数据
/************************************VSNET_DVR_GUI_PORT****************************************/

#ifndef TEMP_AREA_NUM
#define TEMP_AREA_NUM 1
#endif

/* 通道码流带宽 */
typedef struct
{
    unsigned int m_bandwidthRecv[VSNET_DVR_MAXCH][VSNET_DVR_MAXSTM];       //通道码流接收带宽，单位Bps
    unsigned int m_bandwidthRecvAv[VSNET_DVR_MAXCH][VSNET_DVR_MAXSTM];     //通道码流平均接收带宽，单位Bps
}VSNET_STREAMINFO_S;

typedef struct
{
    char                m_username[20];     // Username
    char                m_password[20];     // Password
} ONEUSER;

typedef struct
{
    ONEUSER             m_admin;            // Administrator
    ONEUSER             hl_operator[10];    // High-grade Operator
    ONEUSER             m_operator[10];     // Operator
} WHOLE_USER;

typedef struct
{
    ONEUSER             m_adminsuper;
    ONEUSER             m_admin;            // Administrator
    ONEUSER             hl_operator[10];    // High-grade Operator
    ONEUSER             m_operator[10];     // Operator
} WHOLE_USERSUPER;

typedef struct
{
    int                 bUseDDNS;           // DDNS Enable
    char                DDNSSerIp[40];      // DDNS Server IP
    unsigned short      DDNSSerPort;        // DDNS Server Port
    unsigned short      LocalMapPort;       // Local Port
} WHOLE_DDNS;

typedef struct
{
    char                pStrWebRomVer[50];       // Web Page Version
    char                pStrWebRomBuildTime[50]; // Web Page Compile Time
} VERSIONWEBROM;

typedef struct
{
    char                pStrBSPVer[50];       // BSP Version
    char                pStrAPPVer[50];       // Application Version
    char                pStrBSPBuildTime[50]; // BSP Compile Time
    char                pStrAPPBuildTime[50]; // Application Compile Time
} VERSIONINFO;

// Flash版本信息
typedef struct
{
    char                pStrFLASHVer[64];       // FLASH Version
    char                pStrFLASHBuildTime[64]; // FLASH Compile Time
} VSNET_FLASHVERSION;

typedef struct
{
    char                m_servername[24];   // Server Name
    char                m_serverip[16];     // IP Address
    char                m_servermask[16];   // Subnet Mask
    char                m_gatewayAddr[16];  // GateWay
    char                m_dnsaddr[16];      // DNS Address
    char                m_multiAddr[16];    // Multicasting Address
    unsigned short      m_serport;          // Data Port
    unsigned short      m_mulport;          // Multicasting Port
    unsigned short      m_webport;          // Web Page Port
    unsigned char       m_isPAL;            // Video Mood(1-PAL,0-NTSC)
    unsigned char       m_launage;          // Language
    unsigned char       m_phyAddr[6];       // Physical Address
    unsigned short      m_reserved;         // reserved
    unsigned char       m_serial[8];        // Serial Number
    WHOLE_DDNS          m_ddns;             // DDNS Parameter
    VERSIONINFO         m_version;          // Version
} WHOLEPARAM;

typedef struct
{
    char                m_servername[60];   // Server Name
    char                m_serverip[16];     // IP Address
    char                m_servermask[16];   // Subnet Mask
    char                m_gatewayAddr[16];  // GateWay
    char                m_dnsaddr[16];      // DNS Address
    char                m_multiAddr[16];    // Multicasting Address
    unsigned short      m_serport;          // Data Port
    unsigned short      m_mulport;          // Multicasting Port
    unsigned short      m_webport;          // Web Page Port
    unsigned char       m_isPAL;            // Video Mood(PAL,NTSC)
    unsigned char       m_launage;          // Language
    unsigned char       m_phyAddr[6];       // Physical Address
    unsigned short      m_reserved;         // Reserved
    unsigned char       m_serial[8];        // Serial Number
    WHOLE_DDNS          m_ddns;             // DDNS Parameter
    VERSIONINFO         m_version;          // Version
} WHOLEPARAMEX;

typedef struct
{
    unsigned char       m_starthour;        // Start Hour
    unsigned char       m_startmin;         // Start Minute
    unsigned char       m_stophour;         // Stop Hour
    unsigned char       m_stopmin;          // Stop Hour
    unsigned char       m_maskweek;         // Week
    unsigned char       bReceive[3];        // Reserved
} TIMECHECK;

typedef struct
{
    TIMECHECK           pList[7];           // Time Table
} TIMELIST;

typedef struct
{
    unsigned char       m_beanb;             // Moving Detection Enable
    unsigned char       m_alarmsenstive;     // sensitivity of Moving Detection
    unsigned char       m_brecord;           // relate to recording
    unsigned char       bReceive;            // Reserved
    unsigned char       m_outputmap[8];      // relate to output
    unsigned char       m_detect[18][22];    // Detection Range
    TIMELIST            m_timelist;          // Detection Time Table
} CHANNMOTION;

typedef struct
{
    unsigned char       m_beanb;             // Moving Detection Enable
    unsigned char       m_alarmsenstive;     // sensitivity of Moving Detection
    unsigned char       m_brecord;           // relate to recording
    unsigned char       m_capjpeg;           // relate to jpeg capture image
    unsigned char       m_singlehost;        // Center for uploading
    unsigned char       m_reseved1;          // Reserved
    unsigned char       m_reseved2;          // Reserved
    unsigned char       m_reseved3;          // Reserved
    unsigned char       m_outputmap[8];      // relate to output
    unsigned char       m_detect[18][22];    // Detection Range
    TIMELIST            m_timelist;          // Detection Time Table
} CHANNMOTIONEX, CHANNVAEX;

typedef struct
{
    int                 nFormat;            // Format of Display
    unsigned short      x, y;               // Coordinate of Display
} TIMEOSD;

typedef struct
{
    int                 bShow;              // Show(1),Hide(0)
    unsigned short      x, y;               // Coordinate of Display
} BITSINFOOSD;

typedef struct
{
    char                lpString[32];       // characters to be showed
    unsigned short      x, y;               // Coordinate
} TITALOSD;


typedef struct
{
    TIMEOSD             m_time;             // Time
    TITALOSD            m_tital[4];         // Title
    BITSINFOOSD         m_bits;             // Bit Rate
#if defined(PLATFORM_TXSL)
    char                m_channelName[32];
#endif
} CHANNOSD;


typedef struct
{
    TIMEOSD             m_time;                         // Time
    TITALOSD            m_tital[VSNET_OSDTITLE_NUM];    // Title
    BITSINFOOSD         m_bits;                         // Bit Rate
} CHANNOSD_EXT;

typedef struct
{
    char                lpString[44];       // characters to be showed
    unsigned short      x, y;               // Coordinate
} TITALOSD_HT;

typedef struct
{
    TIMEOSD             m_time;             // Time
    TITALOSD_HT            m_tital[4];         // Title
    BITSINFOOSD         m_bits;             // Bit Rate
} CHANNOSD_HT;

typedef struct
{
    int             m_enable;                   // label of channel OSD superposition for Intellective analyses alarm   0-Disable 1-Enable
    unsigned short  m_x, m_y;                   // Coordinate
    char            m_tripwire_osdText[32];     // literal contents  of OSD superposition for alarm of caution line
    char            m_regionEnter_osdText[32];  // literal contents  of OSD superposition for alarm of entering region
    char            m_regionLeave_osdText[32];  // literal contents  of OSD superposition for alarm of leaving region
    char            m_regionWander_osdText[32]; // literal contents  of OSD superposition for alarm of hovering region
} VSNETCHVAALARMOSD;

#ifndef MAX_OSDSTRLEN
#define MAX_OSDSTRLEN 200
#endif 

typedef struct
{
    unsigned short    m_nStrLen;                     // 设备支持的最大字符个数 只能获取
    unsigned short    m_bShow;                       // show(1),hide(0)    
    char              m_szString[MAX_OSDSTRLEN];     // characters to be showed
    unsigned short    m_nX, m_nY;                    // coordinate
} VSNET_TITALOSD;

//osd叠加扩展 从设备获取支持的最大字符数
typedef struct
{
    TIMEOSD           m_time;            // time
    VSNET_TITALOSD    m_tital[4];        // title
    BITSINFOOSD       m_bits;            // bit rate
} VSNET_CHANNOSD;

typedef struct
{
    unsigned char          m_alpha;
    unsigned char          m_red;           //红色  
    unsigned char          m_green;         //绿色
    unsigned char          m_blue;          //蓝色
    unsigned short         m_rgb;
    unsigned char          reserve[2];      //保留为
} VSNET_RGB_COLOR;

typedef struct
{
    VSNET_RGB_COLOR     m_fgcolor;          //字体颜色
    VSNET_RGB_COLOR     m_bgcolor;          //未使用
} VSNET_OSDCOLOR;       

typedef struct
{
    int                m_enable;            // label of Intellective analyses alarm  OSD superposition   0-Disable 1-Enable
    VSNETCHVAALARMOSD  m_chAlarmOsd[8];     // setting of OSD superposition for channel Intellective analyses alarm
} VSNETVAALARMOSD;

typedef struct
{
    int                 m_bmask;            // Image Mask Enable
    unsigned short      m_x;                // x
    unsigned short      m_y;                // y
    unsigned short      m_width;            // width
    unsigned short      m_height;           // height
} CHANNVIDEOMASK;

typedef struct
{
    unsigned char       m_bri;              // Image Brightness
    unsigned char       m_con;              // Image Contrast
    unsigned char       m_sat;              // Image Saturation
    unsigned char       m_hue;              // Image Hue
} CHANNVIPARAM;

typedef struct
{
    char                m_channelName[16];  // Channel Name
    int                 m_streamType;       // Stream Type:Video Stream、AV Stream
    int                 m_encodeType;       // Image Type:CIF,2CIF,4CIF
    int                 m_Iinterval;        // key frame interval(10-200)
    int                 m_videoFrameRate;   // Frame rate
    int                 m_bitratetype;      // bit rate type：CBR & VBR
    int                 m_maxqueue;         // VBR Quantified Coefficient(2-31)
    int                 m_minqueue;         // CBR Quantified Coefficient(2-31)
    int                 m_maxbitrates;      // CBR Max bit rate(64K-8000K)
    int                 m_audiosample;      // AF sampling frequency
    int                 m_audiobitrate;     // AF bit rate
    int                 m_delay;            // Alarm Delay
    int                 m_benrecord;        // Regular Recording Enable
    TIMELIST            m_record;           // Regular Recording Time Table
} CHANNELPARAM;

typedef struct
{
    char                m_channelName[60];  // Channel Name
    int                 m_streamType;       // Stream Type:Video Stream、AV Stream
    int                 m_encodeType;       // Image TypeCIF,2CIF,4CIF
    int                 m_Iinterval;        // key frame interval(10-200)
    int                 m_videoFrameRate;   // Frame rate
    int                 m_bitratetype;      // bit rate type：CBR & VBR
    int                 m_maxqueue;         // VBR Quantified Coefficient(2-31)
    int                 m_minqueue;         // CBR Quantified Coefficient(2-31)
    int                 m_maxbitrates;      // CBR Max bit rate(64K-8000K)
    int                 m_audiosample;      // AF sampling frequency
    int                 m_audiobitrate;     // AF bit rate
    int                 m_delay;            // Alarm Delay
    int                 m_benrecord;        // Regular Recording Enable
    TIMELIST            m_record;           // Regular Recording Time Table
} CHANNELPARAMEXNAME;

typedef struct
{
    char                m_channelName[16];  // Channel Name
    int                 m_streamType;       // Stream Type:Video Stream、AV Stream
    int                 m_encodeType;       // Image TypeCIF,2CIF,4CIF
    int                 m_Iinterval;        // key frame interval(10-200)
    int                 m_videoFrameRate;   // Frame rate
    int                 m_bitratetype;      // bit rate type：CBR & VBR
    int                 m_maxqueue;         // CBR Quantified Coefficient(2-31)
    int                 m_minqueue;         // VBR Quantified Coefficient(2-31)
    int                 m_maxbitrates;      // CBR Max bit rate(64K-8000K)
    int                 m_audiosample;      // AF sampling frequency
    int                 m_audiobitrate;     // AF bit rate
    int                 m_delay;            // Alarm Delay
    int                 m_nPrerecordTime;   // Prerecording Time(0=off,1-10=ON)
    int                 m_videofilebackup;  // Video File Backup(0=OFF,1=ONLY Alarm File,2=All Files)
    int                 m_jpegfilebackup;   // Jpeg File Backup(0=OFF,1=ONLY Alarm File,2=All Files)
    int                 m_benrecord;        // Regular Recording Enable
    TIMELIST            m_record;           // Regular Recording Time Table
} CHANNELPARAMEX;
//m_channelName：    通道名称；
//m_streamType：     流格式，0：复合流；1：视频流；
//m_encodeType：     编码分辨率，0:QCIF,1:CIF,2:2CIF,3:D1,5:QVGA(320*240),6:VGA(640*480),7:SVGA@60HZ(800*600),8:XGA@60HZ(1024*768),9:SXGA@60HZ(1280*1024),10:UXGA@60HZ(1600*1200),11:720P(1280*720),12:HDTV(1920*1080),13:SVGA@75HZ(800*600),14:XGA@75HZ(1024*768),15:720P@50HZ(1280*720),16:720P@60HZ(1280*720)
//m_Iinterval：      I帧间隔，取值范围：10-200；
//m_videoFrameRate： 视频帧率，PAL取值范围：1-25；NTSC取值范围：1-30；
//m_bitratetype：    码流类型，0：定码率；1：变码率；
//m_maxqueue：       最大量化系数，取值范围：8-31，取值越大图像质量越差，这个值在定码率时有效，他决定图像最差质量如果该值大于31，编码器会根据码率自动丢帧，如果是31，编码器不会丢帧；
//m_minqueue:       最好质量时的量化系数，这个值在定码率时的范围为2-31，变码率时4-31(4CIF时是5-31)，这个值越小质量越好；
//m_maxbitrates：    定码率时的最大码率，取值范围：32-4000，即对应32K-4M；
//m_audiosample：    音频采样频率，取值为8000,16000,32000；
//m_audiobitrate：   音频压缩码率，取值为8，16，24，32，48，64；当采样频率为32K时码率必须不小于32；
//m_delay：          报警延迟时间，取值范围：5-600秒；
//m_benrecord：      定时录像标志，TRUE：启动定时录像；FALSE：取消定时录像；
//m_record：         定时录像计划表；

/*********************************************************************
                        编码视频预处理设置
 正常模式       用作>=D1的h264编码              5  0  2  128  2
 低照度模式     用作>=D1低照度下的h264编码      5 -4  3  255  4
 增强模式       用作<D1的h264编码，不可更改     7  5  2  128  2
 手动模式       用作>=D1的h264编码
 *********************************************************************/
typedef struct
{
    int      m_nVppmode;     /* VPP模式 0-关闭 1-正常 2-低照度 3-增强 4-手动 */
    int      m_nIeSth;       /* IE Strength [0,10] */
    int      m_nSpSth;       /* SP Strength [-4,5] */
    int      m_nDnSfCosSth;  /* coarse DN sf Strength [0,3] */
    int      m_nDnSfIncSth;  /* Inching of DN sf Strength [0,255] */
    int      m_nDnTfSth;     /* DN tf Strength [0,4] */
} VSNET_ENC_VPP;

typedef struct
{
    int                 m_baudrate;         // baud rate
    int                 decoderModel;       // Protocol Type(Not Use)
    unsigned char       m_databit;          // Data bit
    unsigned char       m_stopbit;          // Stop bit
    unsigned char       m_checkbit;         // Check bit
    unsigned char       m_flowcontrol;      // Flow Control
    unsigned char       decoderAddress;     // Decoder Address
    unsigned char       bReceive[3];        // Reserved
} SERIAL485_PARAM;

typedef struct
{
    int                 baudrate;           // baud rate
    char                databit;            // data bit
    char                stopbit;            // stop bit
    char                checkbit;           // check bit
    char                flowcontrol;        // flow control
} VSSERIAL_INFO;

typedef struct
{
    int                 m_year;             // Year
    unsigned char       m_month;            // Month
    unsigned char       m_dayofmonth;       // Day
    unsigned char       m_dayofweek;        // Week
    unsigned char       m_hour;             // Hour
    unsigned char       m_minute;           // Minute
    unsigned char       m_second;           // Second
    unsigned char       bReceive[2];        // Reserved
} TIME_PARAM;

typedef struct
{
    int                 m_bias;             // Timezone in minutes
} TIMEZONE_PARAM;

typedef struct
{
    unsigned char       m_record[16];       // relate to recording
    unsigned char       m_out[8];           // relate to output
    unsigned char       m_enpreno[16];      // relate to preset point
    unsigned char       m_preno[16];        // number of preset point to be called
    TIMELIST            m_timelist;         // detection time table
} ALARMRECORD;

typedef struct
{
    int                 m_alarmmode;        // Alarm Mode 0：OFF,1：ON
    int                 m_singlehost;       // label of center for uploading alarm signal
    unsigned char       m_record[16];       // relate to recording
    unsigned char       m_out[8];           // relate to output
    unsigned char       m_enpreno[16];      // relate to preset point
    unsigned char       m_preno[16];        // number of preset point to be called
    unsigned char       m_capjpeg[16];      // relate to capturing
    TIMELIST            m_timelist;         // detection time table
} ALARMRECORDEX;

typedef struct
{
    int                 m_benab;            // Alarm Enable
    ALARMRECORD         m_alarmrec[8];      // parameter of relating to alarm
} ALARMPARAM;

typedef struct
{
    int                 m_benab;            // Alarm Enable
    ALARMRECORDEX       m_alarmrec[8];      // parameter of relating to alarm
} ALARMPARAMEX;

typedef struct
{
    int                 m_benab;            // 使能
    ALARMRECORDEX       m_alarmrec[9];      // 1 + 8(外接报警盒上的8个报警输入)
} ALARMPARAMEX_SEA;

typedef struct
{
    int                 m_chanuser[16];     // Channel
    unsigned char       m_chanIP[16][20][4];// Linked IP Address
} CONNECTIP;

typedef struct
{
    int                 m_chanuser[64];     // Channel
    unsigned char       m_chanIP[64][20][48];// Linked IP Address
} CONNECTIPEX;

typedef struct
{
    unsigned int        m_videotag;         // Video tag
    short               m_width, m_height;  // Video Size
    int                 m_bhaveaudio;       // have audio or not
    int                 m_samplesize;       // audio sampling frequency
    unsigned short      m_audiotag;         // audio tag
    unsigned short      m_audiobitrate;     // audio bit rate
} VSTREAMINFO;

typedef struct
{
    unsigned int        m_url;              // URL address
    char                m_sername[24];      // Server Address
    int                 m_ch;               // channel
    int                 trantype;           // transport type
#ifndef USE_HANDLE_32
    /*int*/void*        handle;             // handle
#else
    int                 handle;             // handle
#endif
    
} VSUSERINFO;

typedef struct
{
    int                 m_benable;          // hide detection enable
    int                 m_decval;           // sensitivity of detection(1(lowest)---3(highest))
    unsigned char       m_out[8];           // output of relating alarm
    TIMELIST            pTimeList;          // detection time
} CHANNELHIDEALARM;

typedef struct
{
    int                 m_benable;          // hide detection enable
    int                 m_bsinglehost;      // label of center for alarm signal
    int                 m_decval;           // sensitivity of detection(1(lowest)---3(highest))
    unsigned char       m_out[8];           // output of relating alarm
    TIMELIST            pTimeList;          // detection time
} CHANNELHIDEALARMEX;

typedef struct
{
    int                 m_benbale;          // Regular Restart Enable
    int                 m_invalidtime;      // interval time(HOUR AS UNIT，10h-240h:10 hours to 10 days)
    int                 m_rsthour;          // Restart Hour
    int                 m_rstminute;        // Restart Minute
} VSTIMERRESET;

typedef struct
{
    char                m_hostserverurl[40]; // IP of Recording Server
    char                m_alarservermurl[40];// IP of Alarm Server
    unsigned short      m_hostserverport;    // Port of Recording Server
    unsigned short      m_alarserverport;    // Port of Alarm Server
} VSREMOTEHOST;

typedef struct
{
    int                 m_streamType;       // Stream Type:Video Stream、AV Stream
    int                 m_encodeType;       // Image TypeCIF,2CIF,4CIF
    int                 m_Iinterval;        // Key Frame interval(10-200)
    int                 m_videoFrameRate;   // frame rate
    int                 m_bitratetype;      // bit rate type：CBR & VBR
    int                 m_maxqueue;         // VBR Quantified Coefficient(2-31)
    int                 m_minqueue;         // CBR Quantified Coefficient(2-31)
    int                 m_maxbitrates;      // CBR max bit rate(64K-8000K)
} VSSUBCHANPARAM;

typedef struct
{
    int                 m_hds;             // Total of Hard Disk
    int                 m_hdtype[8];       // Disk Type
    int                 m_hdstate[8];      // Disk State 0xff-错误，0xfe-空硬盘
    int                 m_totalsize[8];    // Disk Size
    int                 m_freesize[8];     // free size
} VSDISKSTATE;

typedef struct
{
    unsigned int        m_channel;         // Channel NO.
    unsigned short      m_detectall;       // all alarm
    unsigned char       m_detect[18][22];  // alarm block
} VSNETVIDEOMOVE_BLOCK;

typedef struct
{
    int                 m_busepppoe;        // USE PPPOE
    char                m_pppoename[64];    // PPPOE username
    char                m_pppoepswd[64];    // PPPOE password
} VSNETPPPOEPARAM;

typedef struct
{
    int      m_packet_type;                 // packet type of recording(0:packing with file size; 1:packing with time)
    int      m_packet_size;                 // packet size of recording，MB as UNIT
    int      m_packet_time;                 // packet time of recording，Minute as UNIT
    int      m_hdisk_reserved_size;         // Reserved Space of DISK，MB as UNIT
    int      m_hdisk_full_alarm;            // whether alarm when free space less than reserved space of hard disk
    int      m_hdisk_full_action;           // the action when free space less than reserved space of hard disk(1:circular covering; 0:stop recording)
} VSNETRECORDPARAM;

typedef struct
{
    int                 m_bsinglehost;      // label of center for uploading
    unsigned char       m_out[8];           // alarm output
    TIMELIST            m_timelist;         // detection time
} VSNETVIDEOLOSTPARAM;

typedef struct
{
    unsigned char       m_caprate;          // frame rate of capturing (1-5)
    unsigned char       m_encquant;         // quality of capturing(JPEG,1-100)
    unsigned char       m_encformat;        // format of capturing(CIF,2CIF,4CIF)
    unsigned char       m_reserved;         // reserved
    int                 m_capnums;          // frame number to be captured(-1:keep capturing)
} VSNETJPEGCAPPARAM;

/* 存储模式配置,tyto内部使用 */
typedef struct
{
    int                 m_storagemode;      // LC_STORAGEMODE_E
    int                 m_stilloption;      // LC_STILLOPT_E
    int                 m_visibleoption;    // LC_VISIBLEOPT_E
    int                 m_iroption;         // LC_IROPT_E
    int                 m_spectrum;         // LC_SPECTRUM_E
    int                 m_viscomprate;      // LC_COMPRATE_E
    int                 m_ircomprate;       // LC_COMPRATE_E
    int                 m_visoption;        // LC_VISOPT_E
    int                 m_video_subtitle;   // 1使能
} VSNETSTORAGEMODE; 

/* 视频输出模式配置 */
typedef struct
{
    int                 m_hdmioutput_mode;  // LC_HDMIMODE_E
    int                 m_vis_zoom;         // 100,200,400
} VSNETVOUTMODE; 

typedef struct
{
    int                 m_stillperiod;      // 0~60s
    int                 m_stillishz;        // 0,1
    int                 m_videosnapshot;    // 0,1
    int                 m_imagenumbers;     // Number of images to capture total - -1 for unlimited capture
} VSNETSTILLPARAM; 

typedef struct
{
    unsigned int        m_id;               //0, 1
    unsigned int        m_color;            //COLOR_XX 
    unsigned int        m_on_msec;          //led on msec
    unsigned int        m_cycle_msec;       //led on and off cycle msec
} VSNETLEDCTRL; //the same as led_ctrl

typedef struct
{
    unsigned char       m_sd1_mount;        //0, 1
    unsigned char       m_sd2_mount;        //0, 1
    unsigned short      m_sd_alarm_state;   //0, 1
    unsigned int        m_sd1_space;        //unit: Mb
    unsigned int        m_sd2_space;        //unit: Mb
    unsigned int        m_sd1_total_space;  //unit: Mb
    unsigned int        m_sd2_total_space;  //unit: Mb
    unsigned char       m_sd1_state;        //
    unsigned char       m_sd2_state;        //
    unsigned short      m_reserve;          //0, 1
} VSNETMSDSTATUS;                          //sd卡状态，tyto内部使用

typedef struct
{
    float               m_essivity;
    float               m_bkgtmp;//Ambient temperature
    float               m_atmktmp;//Atmosphere temperature
    float               m_wintmp;//win_temperature 
    float               m_wintrans;//win_transmission
    float               m_atmtrans;//atmosphere transmission
    float               m_humidity;//Relative humidity
    float               m_lenstrans;//Lens transmission
    float               m_lensfnum;//Lens F number
}VSNETRADPARAM;/*辐射量参数*/

typedef struct
{
    unsigned short      m_frequency;
    short               m_orientation;
    unsigned int        m_color;
    float               m_zoom;
}VSNETVIDEOPARAM;/*视频相关参数*/

typedef struct
{
    char                m_sn[20];
    char                m_pn[20];
    char                m_ver[20];
    char                m_devsn[20];
    char                m_devpn[20];
}VSNETCAMERAINFO;/*camera信息*/

typedef struct 
{
    float               m_startupTemp;   ///<启动温度，单位℃
    float               m_fpaTemp;       ///<FPA温度，单位℃
    float               m_housingTemp;   ///<外壳温度，单位℃
}VSNETDEVICEPARAM;/*tau设备信息*/

/*************************M10 parameter start********************************/
typedef struct
{
    int                 m_osd_enable;       //全局OSD叠加使能开关 0:关闭 1:开启
    float               m_envtemp;          //环境温度，单位℃
    float               m_detectdist;       //检测距离，单位m
    float               m_radrate;          //辐射率,范围[0,1]
    float               m_humidity;         //湿度,范围[0,100],单位%
}VSNETTEMPPARAM;/*测温相关参数，用于OSD叠加，旧接口，机器人上的m10在用*/

typedef struct
{
    float               m_envtemp;          //环境温度，单位℃
    float               m_detectdist;       //检测距离，单位m
    float               m_radrate;          //辐射率,范围[0,1]
    float               m_humidity;         //湿度,范围[0,100],单位%
}VSNETTEMPPARAM_EX;/*测温相关参数*/

typedef struct
{
    float               m_emissivity;       ///<场景发射率
    float               m_winTrans;         ///<窗口传输率
    float               m_winTemp;          ///<窗口温度，单位℃
    float               m_winRefl;          ///<窗口反射率
    float               m_reflTemp;         ///<窗口反射温度，单位℃
    float               m_atmTrans;         ///<大气传输率
    float               m_atmTemp;          ///<大气温度，单位℃
    float               m_bkgTemp;          ///<背景温度，单位℃
}VSNETTEMPCALIBPARAM;/*测温相关参数，用于温度校准*/

typedef struct
{
    int                 m_enable;           //手动使能开关
    float               m_hightemp;         //最高温值
    float               m_lowtemp;          //最低温值
}VSNETAGCPARAM;/*AGC参数*/

typedef struct
{
    float               m_maxtemp;          //最高温值
    float               m_mintemp;          //最低温值
    float               m_avgtemp;          //平均温值
}VSNETTEMPVALUE;

typedef struct
{
    float               m_ir_avgtemp;       //测温平均温度
    float               m_ir_hightemp;      //测温最高温度
    float               m_ir_lowtemp;       //测温最低温度
    float               m_ir_high;          //温度条最高温度
    float               m_ir_low;           //温度条最低温度
}VSNETTEMPDATA;/*测温数据*/

typedef struct
{   
    int                 min_x;              //最低温度x坐标
    int                 min_y;              //最低温度y坐标
    int                 max_x;              //最高温度x坐标
    int                 max_y;              //最高温度y坐标
}VSNETCOORDINFO;

typedef struct
{
    int                 m_enable;           //融合功能使能开关 0:关闭 1:开启
    int                 m_strength;         //融合强度(高/中/低) 0:低 1:中 2:高
}VSNETIMAGEFUSEPARAM;

typedef struct
{
    int                 m_horiz_offset;     //水平偏移值
    int                 m_vert_offset;      //垂直偏移值
}VSNETIMAGEFUSEOFFSET;

typedef struct
{
    int                 m_osd_enable;       //全局OSD叠加使能开关 0:关闭 1:开启
}VSNETOSDPARAM;

typedef struct
{
    int                 m_ir_temp_enable;    //红外全局测温叠加使能 0:关闭 1:开启
    int                 m_ir_param_enable;   //红外全局测温参数叠加使能 0:关闭 1:开启
    int                 m_ir_strip_enable;   //红外伪彩色条叠加使能 0:关闭 1:开启
    int                 m_ir_cursor_enable;  //红外高低温光标叠加使能 0:关闭 1:开启
}VSNETIROSDPARAM;

typedef struct
{
    int                 m_type;    //0:纯可见光 1:pip
}VSNETVIS_ENCSRC;   //ch0编码源选择

#define REGIONTEMPNUM 8

typedef struct
{
    int                 m_region_enable; // 区域测温使能
    int                 m_osd_enable;    // 区域测温osd叠加使能
    int                 m_cursor_enable; // 区域测温高低温光标叠加使能
    int                 m_param_enable;  // 区域测温使用本地参数
    unsigned short      m_x;             // x
    unsigned short      m_y;             // y
    unsigned short      m_width;         // width
    unsigned short      m_height;        // height
    float               m_detectdist;    //目标距离，单位m
    float               m_radrate;       //辐射率,范围[0,1]
}VSNETREGIONTEMPAREA;

typedef struct
{
    VSNETREGIONTEMPAREA m_region[REGIONTEMPNUM];   //区域测温参数
}VSNETREGIONTEMPPARAM;

typedef struct
{
    char m_firmwaretag[32];   //设备标记
}VSNETFIRMWARETAG;

typedef struct
{
    VSNETTEMPVALUE      m_region_temp[REGIONTEMPNUM];   //区域温度信息
}VSNETREGIONTTEMPVALUE;

typedef struct
{
    short               m_valid;    // 1:有效 0:无效
    short               m_val;      // T * 100℃
    unsigned short      m_x;        //X坐标     
    unsigned short      m_y;        //Y坐标   
}VSNETREGION;

typedef struct
{
    int                 m_enable;   //区域测温使能 
    VSNETREGION         m_max;      //最高温值
    VSNETREGION         m_min;      //最低温值
    VSNETREGION         m_avg;      //平均温值
}VSNETREGIONTEMP;
typedef struct
{
    VSNETREGIONTEMP     m_region_temp[REGIONTEMPNUM]; //最高温值
}VSNETREGIONTEMPLIST;

typedef struct
{
    int                 m_gaintype;       //增益切换类型 0:自动切换 1:手动切换
    int                 m_gainmode;       //增益模式 1:低增益 2:高增益(自动切换时设置无效)
}VSNETGAINMODE;

/* 视频输出模式配置 */
typedef struct
{
    int                 m_videoout_mode;  // HDMIMODE_E 0:可见光 1:PIP 2:红外光
}VSNETVIDEOOUTMODE; 

typedef struct
{
    VSNETCOORDINFO      m_global_coord;                  //全局高低温点坐标
    VSNETCOORDINFO      m_region_coord[REGIONTEMPNUM];   //区域高低温点坐标
}VSNETTEMPCOORDINFO;

/* 设备端口配置 */
typedef struct
{
    short               m_localport;      //本地端口号
    short               m_webport;        //Web服务器端口
    short               m_multiport;      //多播端口
    short               m_recv2;          //保留，用做对齐
}VSNETCHPORT; 

typedef struct
{
    char  m_product_type[32]; //sensor设备序列号
}PRODUCTINFO; 
typedef struct
{
    char  m_sensor_serial[32]; //sensor设备序列号
}VSNETSERIALNO; 

typedef struct
{
    float m_temp_value;
    int   m_temp_x;
    int   m_temp_y;
}VSNETCOORDVALUE; //坐标信息

typedef struct
{
    VSNETCOORDVALUE m_maxtempinfo; 
    VSNETCOORDVALUE m_mintempinfo;
    float           m_avgtempinfo;
}VSNETTEMPVALUE_EX;

typedef struct
{
    int m_mode;             //0: 正常模式， 1: 校准模式
}VSNETSWITCHMODE;         //校准模式切换

typedef struct
{
    int m_segment;          //NUC表索引，范围[0~4]
}VSNETTEMPSEGMENT;        //测温段编号

typedef struct
{
    unsigned char m_NUCTableIdx;  //NUC表索引，范围[0~4]
    char          m_DevState;     //设备状态，-1-设备状态未知，0-稳定，1-不稳定
    unsigned char m_u8Reserve[2]; //保留
    int           m_FPA;          //当前FPA X 100,单位C
    int           m_FPASpeed;     //当前FPA变化速率 X 1000，单位C/min；> 0升温，< 0降温
    int           m_s32Reserve[5];//保留
}VSNETSENSORSTATE;              //Sensor状态

///**************时间表日期***************************/
//typedef enum
//{
//    ETI_DAY_MONDAY = 0,    //星期一
//    ETI_DAY_TUESDAY = 1,    //星期二
//    ETI_DAY_WEDNESDAY = 2,    //星期三
//    ETI_DAY_THURSDAY = 3,    //星期四
//    ETI_DAT_FRIDAY = 4,    //星期五
//    ETI_DAY_SATURDAY = 5,    //星期六
//    ETI_DAY_SUNDAY = 6,    //星期天
//    ETI_DAY_MON_FRI = 7,    //星期一-星期五
//    ETI_DAY_SAT_SUN = 8,    //星期六-星期天
//    ETI_DAY_DAILY = 9,    //每天
//    ETI_DAY_OFF = 10,   //关闭
//}ETI_TIME_DAYTYPE;
typedef struct
{
    short           m_OBJTemp;        //目标温度，范围[0~450]C
    unsigned char   m_ErrRange;       //误差范围，±m_ErrRange C或者±m_ErrRange %C
    unsigned char   m_GainMode;       //0-当前增益，1-低增益，2-高增益
    unsigned short  m_MinFlux;        //误差允许范围内m_OBJTemp对应的最小像素值
    unsigned short  m_MaxFlux;        //误差允许范围内m_OBJTemp对应的最大像素值
}VSNETOBJFLUXRANGE;                 //目标像素范围


/* 高温报警参数 */
typedef struct
{
    int                	m_enable;           // function enable
	int					m_typethreshold;	// 0: >m_htempthreshold, 1: <m_ltempthreshold, 2: [m_ltempthreshold, m_htempthreshold], 3: not belong to[m_ltempthreshold, m_htempthreshold]
    float               m_htempthreshold;   // highTempAlarm Threshold
    float               m_ltempthreshold;   // lowTempAlarm Threshold
    int                 m_singlehost;       // label of center for uploading alarm signal
    unsigned char       m_record[16];       // relate to recording
    unsigned char       m_out[8];           // relate to output	1:ON, 0：OFF
    unsigned char       m_enpreno[16];      // relate to preset point
    unsigned char       m_preno[16];        // number of preset point to be called
    unsigned char       m_capjpeg[16];      // relate to capturing
    TIMELIST            m_timelist;         // detection time table define ETI_TIME_DAYTYPE
} VSNETTEMPALARMPARAM;

/* 着火点参数设置 */
typedef struct
{
    int                	m_enable;           // function enable
    float               m_tempthreshold;    // threshold of threshold
} VSNETFIREPOINTPARAM;

/* 着火点获取温度值 */
typedef struct
{
    int m_isfire;   //0: no , 1: yes
    VSNETCOORDVALUE m_maxtempinfo; 
} VSNETFIREPOINTDATA;

typedef struct
{
    int m_indexes;             //按位表示 bit0-低增益，bit1-高增益1段，bit2-高增益2段，bit3-高增益3段，bit4-高增益4段，即bitn为1表示支持该段，反之为0则不支持
}VSNETTAUNUCTABLEINDEX;      //TAU当前所支持的nuc table索引集和

typedef struct
{
    int m_enable;              //检测TAU当前所支持的nuc table使能，1-开启检测，0-关闭检测
}VSNETTAUNUCTABLEFUNCTION;  //TAU当前所支持的nuc table检测功能

/*************************M10 parameter end********************************/

/*************************LEO parameter start********************************/
typedef struct
{
    int m_denoise;             // 降噪参数，[0,100]
}VSNETDENOISEPARAM; 

typedef struct
{
    int m_roll;             // 翻转参数，0：上下 1：左右
}VSNETROLLPARAM;

typedef struct
{
    int m_mode;           // 数字输出模式，0 原始raw，1 正常raw，2 双输出（正常raw+图像）
}VSNETDIGITALOUTMODE; 	//第一版仅支持原始raw和正常raw，且出厂工具可使用

typedef struct
{
    int m_mode;             // 0：manual、1：auto、2：external
}VSNETFFCMODE;

typedef struct
{
    int m_frame;             // 帧数
}VSNETFFCFRAMEPARAM;

typedef struct
{
    int m_temp;             // 温度 
}VSNETFFCTEMPPARAM;

typedef struct
{
    int m_temp;             // 温度
}VSNETVTEMPTEMP;

typedef struct
{
    int m_region;             //区域号（0 - 5）
}VSNETVTEMPREGION;

typedef struct
{
    int m_enable;             //使能
}VSNETKENABLE;

typedef struct
{
    int m_enable;             //使能
}VSNETBENABLE;

typedef struct
{
    int m_enable;             //使能
}VSNETBLINDENABLE;

typedef struct
{
    int m_enable;             //使能
}VSNETFILTEENABLE;

typedef struct
{
    int m_value;             //滤波系数
}VSNETFILTEPARAM;

typedef struct
{
    unsigned char cmd[256];
    int  len;             //透传
}VSNETTRAN;

typedef struct
{
    unsigned char m_register[22];             //寄存器配置(171bit)有效
}VSNETSMARTDATA;

typedef struct
{
    float m_shuttertemp;    //shutter温度
    float m_lenstemp;       //镜头温度
    float m_iboardtemp;     //i板温度
    float m_sboardtemp;     //s板温度
}VSNETSENSORTEMP;

typedef struct
{
    char m_type;    //类型，0:K值; 1:盲元；2:DDAC
    char m_group;   //组号，0 - 5
    char m_res[2];  //保留    
}VSNETWRITEFLASH;

/*************************LEO parameter end********************************/

typedef struct
{
    char                m_serverIP[40];     // Server IP
    unsigned int        m_port;             // Server Port
    unsigned int        m_intervaltime;     // interval time
    char                m_senddata[512];    // data to be sent
} VSNETHOSTNOTIFY;

typedef struct
{
    char                m_alarmname[32];    // name of alarm sensor
    int                 m_senseorinterval;  // interval time for sensor alarming
} VSNETSENSORALARM;

typedef struct
{
    int  m_videolossinterval;   // interval time for video losing
    int  m_videomoveinterval;   // interval time for video moving
    int  m_videohideinterval;   // interval time for video hiding
    int  m_reserved;            // reserved
} VSNETALARMINTERVAL;           // interval time for alarming

typedef struct
{
    int     m_alarmtype;        // sensor type
} ALARMTYPE;

typedef struct
{
    int m_audioinline;          // 1:linear input  0:Mic input
    int m_audioinDBline;        // proportion of linear input(-34 - +12DB) range of linear input(0-100)
    int m_audioinDBMic;         // proportion of Mic input(0,20DB)  range of Mic input(0-1)
    int m_audiooutDB;           // proportion of input(-73 - +6DB)  range of  input(0-100)
} VSNETAUDIOPARAM;              // structure of audio parameter

// structure of audio silent
typedef struct
{
    int m_audiosilent;          // silent:0， not:others
} VSNETAUDIOSILENT;

typedef struct
{
    int             m_usecdma;  // use cdma
} VSNETCDMAPARAM;

typedef struct
{
    int             m_usewifi;          // use wifi
    char            m_wifiipaddr[16];   // wireless IP address
    char            m_wifinetmask[16];  // wireless MASK address
    char            m_wifigateway[16];  // wireless gateway
    char            m_wifidns[16];      // wireless DNS
    char            m_wifissid[40];     // wireless ssid
    int             m_wifiencmode;      // encription mode 0,no encription 1,wep-60  2,wep-128
    char            m_wifipwd[64];      // cryptographic key wep-60(5 ASCII or 10 HEX) wep-128(13 ASCII or 26 HEX)
} VSNETWIFIPARAM;

typedef struct
{
    int             m_usewifi;          // use wifi 0,OFF 1,Static 2,ppoe 3,DHCP
    int             m_usedefaultgw;     // wireless gateway as default enable (zero,disable nonzero,enable)
    char            m_pppoename[64];    // wireless PPPOE username
    char            m_pppoepswd[64];    // wireless PPPOE password
    char            m_wifiipaddr[16];   // wireless IP address
    char            m_wifinetmask[16];  // wireless MASK address
    char            m_wifigateway[16];  // wireless gateway
    char            m_wifidns[16];      // wireless DNS
    char            m_wifissid[40];     // wireless ssid
    int             m_wifiencmode;      // encription mode 0,no encription 1,wep-60  2,wep-128 3,wep-152 8,wpa-psk/wpa2-psk
    char            m_wifipwd[64];      // cryptographic key wep-60(5 ASCII or 10 HEX) wep-128(13 ASCII or 26 HEX)
} VSNETWIFIPARAMEX;

typedef struct
{
    char            m_wifissid[40];     // wireless ssid
    int             m_wifiencmode;      // encription mode      0-no encription 1-WEP 2-WPA-PSK/WPA2-PSK
} VSNETWIFISSIDINFO;

#define MAX_SSIDNUM 40
typedef struct
{
    int                 m_ssidnum;      // number of wireless router which have been searched
    VSNETWIFISSIDINFO   m_ssidinfo[MAX_SSIDNUM]; // route information
} VSNETWIFISSIDLIST;

typedef struct
{
    char            m_deviceID[32];      // Device ID
    int             m_maxconnect;        // max connection number,computing with 5 per channel
    int             m_linktype;          // link type,1:LAN,2:ADSL,3:others
    char            m_ftpuser[20];       // ftp username
    char            m_ftppass[20];       // ftp password
    char            m_devicemodel[32];   // device model
    int             m_sipport;           // sip port
} VSNETLINKCONFIG;                       // link configuration

typedef struct
{
    int             m_dnsprovider;       // ddns provider
    int             m_ddnsnotifytime;    // ddns update time
    char            m_dnsusername[20];   // ddns username
    char            m_dnspassword[20];   // ddns password
    char            m_dnsdomainname[50]; // dns domain name
} VSNETDNSEXPARAM;

typedef struct
{
    int             m_comport;           // serial port NO.
    int             m_protocol;          // protocol of serial port
    int             m_addr;              // device address
    int             m_alarmchecktime;    // time of alarm check
    int             m_alarmintervaltime; // interval time of alarm
} VSNETEXALARMPARAM;

typedef struct
{
    int             m_benablecheck;      // temperature alarm enable
    TIMELIST        m_timeList;          // detection time
    char            m_boutput[8];        // alarm output,each bit maps alarm output
    char            m_record[16];        // recording label
    char            m_capture[16];       // capturing label
    int             m_delay;             // alarm delay time
    int             m_singlehost;        // center  for uploading
    float           m_tempmax;           // max temperature
    float           m_tempmin;           // min temperature
    float           m_hummax;            // max humidity
    float           m_hummin;            // min humidity
} VSNETHUMITUREPRAM;

typedef struct
{
    int             m_xoffset;           // horizontal offset 0~32
} VSNETVIDEOOFFSET;

typedef struct
{
    unsigned short      m_x;             // x
    unsigned short      m_y;             // y
    unsigned short      m_width;         // width
    unsigned short      m_height;        // height
} VSNETVIDEOMASKAREA;

typedef struct
{
    int                 m_bmask;         // image mask enable
    VSNETVIDEOMASKAREA  m_maskarea[4];   // image mask area
} VSNETVIDEOMASK;

typedef struct
{
    unsigned short      m_x;             // x
    unsigned short      m_y;             // y
    unsigned short      m_width;         // width
    unsigned short      m_height;        // height
    int                 m_qp;            // quality,range(2-31),low is better
} VSNET_VIDEOINTEREST_AREA;

typedef struct
{
    int                      m_enable;   // video interest enable
    VSNET_VIDEOINTEREST_AREA m_area[4];  // video interest area
} VSNET_VIDEOINTEREST;

typedef struct
{
    char                mans_url[128];       // address of manager server
    char                mans_username[32];   // username of manager server
    char                mans_psd[32];        // password of manager server
    char                mans_conrequrl[128]; // inverse link PU address
    char                mans_conreqname[32]; // inverse linkPU username
    char                mans_conreqpsd[32];  // inverse link PU password
} VSNETSNMPCONFIG;

typedef struct
{
    int                 m_nyear;            // received time
    unsigned char       m_nmonth;
    unsigned char       m_nday;
    unsigned char       m_nhour;
    unsigned char       m_nminute;
    unsigned char       m_nsecond;
    unsigned char       m_received[3];      // reserved
    char                m_peplenum[100];    // supercargo number
    char                m_boxnum[100];      // box number
    unsigned short      m_recvnum;          // received box number
    unsigned short      m_sendnum;          // sent box number
} NETRVS_BANKINFO;

typedef struct
{
    int             m_CapJpgEnable;         // regular capturing enable
    int             m_ftp_timecapjpg;       // regular capturing FTP uploading
    int             m_CapJpgInterval;       // interval time for regular capturing
    TIMELIST        m_timeList;             // capture time
} VSNETTIMERCAP;

typedef struct
{
    int             m_busedhcp;             // use DHCP
} VSNETUSEDHCP;

typedef struct
{
    char            m_pppoename[64];        // wifi PPPOE username
    char            m_pppoepswd[64];        // wifi PPPOE password
} VSNETWIFIPPPOEPARAM;


typedef struct
{
    int m_busedefaultaddr;  // use default address or not
    int m_busealarmsms;     // message alarm enable
    int m_interval;         // min interval for sending
} VSNETALARMSMSPARAM;       // parameter structure of message for setting alarm

typedef struct
{
    int  m_zone;         // exactly timezone
    int  m_nReserve[3];  // reserved
} VSNET_EXACTTIMEZONE;

typedef struct
{
	char             m_ip[16];           //ip address
	unsigned short   m_webport;          //web port
	unsigned short   m_webportout;       //web outport
	unsigned short   m_webportstatus;    //webport status
	unsigned short   m_rtspport;         //rtsp port
	unsigned short   m_rtspportout;      //rtsp outport
	unsigned short   m_rtspportstatus;   //rtspport status
	unsigned short   m_msgport;          //msg port
	unsigned short   m_msgportout;       //msg outport
	unsigned short   m_msgportstatus;    //msgport status
	unsigned short   m_videoport;        //video port
	unsigned short   m_videoportout;     //video outport
	unsigned short   m_videoportstatus;  //videoport status
	unsigned short   m_fileoptport;      //file port
	unsigned short   m_fileoptportout;   //file outport
	unsigned short   m_fileoptportstatus;//fileport status
	unsigned short   m_reserve;          //reserved
}VSNET_UPNPINFO;

typedef struct
{
	int m_timetype;      //Time recordtype 0:主码流;1:子码流;2:第三码流
	int m_ftptype;       //FTP recordtype 0:主码流;1:子码流;2:第三码流
	int m_alltype;       //support type 0:主码流；1:主码流和子码流；2:主码流、子码流和第三码流
}VSNET_RECORDSTREAMTYPE;

typedef struct
{
	int m_wifimode;      //0:802.11b;1:802.11g;2:802.11b&802.11g
}VSNET_WIFIMODE;

typedef struct
{
	int   m_motion;        //移动侦测标志 0:关闭1:开启
	int   m_videohide;     //视频遮挡标志 0:关闭1:开启
	int   m_neterror;      //网络异常标志 0:关闭1:开启
	int   m_sensdec[16];   //探头标志     0:关闭1:开启 
}VSNET_ALARMSHORTMSGPARAM;

typedef struct
{
	int             m_enable;          //网络异常报警开关0:关闭1:启动
	unsigned char   m_capchannels[16]; //联动抓图通道
	unsigned char   m_revchannels[16]; //联动录像通道
	unsigned char   m_alarmouts[4];    //联动报警输出
}VSNET_NETERRORPARAM;

typedef struct
{
	short     m_disktype;        //存储设备类型 0:设备硬盘 2:NAS网络硬盘
    short     m_NASenable;       //远程录制开关 0:关闭1:开启
	char      m_NASaddr[128];    //远程地址 
    char      m_NASpath[128];    //远程路径
	char      m_NASuser[56];     //用户名
	char      m_NASpassword[56]; //密码
}VSNET_DISKSELECTPARAM;  

typedef struct
{
	int	m_Hour;			//小时
	int	m_Min;			//分
	int	m_Sec;			//秒
	int m_Type;			//0日转夜,1为夜转日
}VSNET_DAYNIGHTTIME;


typedef struct
{
	VSNET_DAYNIGHTTIME   m_daynight[2];
	int                  m_daynight_mode;  //0:手动;1:根据设定的时间段控制红外; 2:自动彩转黑(包括外触发IR_CUT和内触发)
	int                  m_handblackwhite; //手动彩转黑   0:彩色; 1:黑色(夜间)
    int                  m_autoblackwhite; //自动彩转黑   0:外触发IR_CUT;1内触发
    int                  m_lux;//后续需修改内触发方式的彩转黑
}VSNET_DAYNIGHTSWITCH;
    
//光敏触发类型
typedef struct
{
	int m_nType;             // 0 高电平/夜；低电平/昼 1 低电平/夜；高电平/昼
} VSNET_PHOTO_SENSITIVE_TYPE;// 只有在选择红外设备 昼夜模式为自动的时候 才有效
   
typedef struct
{
	int  m_videoin; //视频输入方式0:色差输入 1:VGA输入 2:HDMI输入
}VSNET_VIDEOINTYPE;

typedef struct
{
	int  m_nAICheck; //AI校正的值
} VSNET_AI_CHECK;

typedef struct
{
	int m_wifienable;//是否支持wifi 0:不支持 1:支持
	int m_3genable;  //是否支持3g 0:不支持 1:支持
}VSNET_WIFIENABLE;

typedef struct
{
    int                 m_noisemode;        //降噪模式     0:自动; 1:手动
    int                 m_noiseenable;      //降噪开关     0:OFF;  1:ON
    int                 m_noiselevel;       //降噪等级     0:自适应 1:低 2:中 3:高   抓拍机使用时：降噪强度  降噪模式设置为手动时可设置，取值范围；0~255
}VSNET_NOISEPARAM;

typedef struct
{
    VSNET_NOISEPARAM    m_noise;            //降噪参数
    int                 m_wdrmode;          //sensor工作模式 0:线性(linear)模式, 1:宽动态(wdr)模式(目前AR0331支持wdr模式)
}VSNET_NOISEMODEPARAM;

typedef struct
{
	int m_serParamDevType;                  //设备类型    0: 非红外设备  1: 红外设备
}VSNET_SENEORPARAMDEVTYPE; 
           
/***************** long-distance retrieval,download,play ****************/
#define  MAX_FILE_DATA            10

typedef struct
{
    int                 m_year;             // year
    unsigned char       m_month;            // month
    unsigned char       m_day;              // day
    unsigned char       m_hour;             // hour
    unsigned char       m_minute;           // minute
    unsigned char       m_second;           // second
    unsigned char       Received[3];        // reserved
} VSNETPLAY_NETTIME, VSNETDIARY_NETTIME;

typedef struct
{
    int                 m_channel;          // channel NO.
    char                sFileName[100];     // file name
    VSNETPLAY_NETTIME   struStartTime;      // start time of file
    VSNETPLAY_NETTIME   struStopTime;       // end time of file
    unsigned int        dwFileSize;         // file size
} VSNETPLAY_FIND_DATA;

typedef struct
{
    int                 m_filenum;                 // file number
    VSNETPLAY_FIND_DATA m_filedata[MAX_FILE_DATA]; // file attribute
} VSNETPLAY_FILE_DATA;

typedef struct
{
    char                desc[200];
} VSNETALARMHOST_DESC;

typedef struct
{
    int                 m_logtime;                 /*时间  为方便操作暂时保留*/
    char                m_logadmname[20];          /*操作员名字:  假设事件发生时没有操作员的时候全部清0*/
    int                 m_logch;                   /*通道号 或 探头号或0*/
    int                 m_logmajtype;              /*事件主类型*/
    int                 m_logmintype;              /*事件次类型*/
    VSNETPLAY_NETTIME   m_logctltime;              /*以后日志就用这个结构,发生时间*/
}VSNET_LOGINFO;

#define LOG_MAX_NUM 2500

typedef struct
{
    unsigned              m_lognum;                        /*当前日志数*/
    unsigned              m_logcurlocat;                   /*当前位置*/
    VSNET_LOGINFO         m_loginfo[LOG_MAX_NUM];          /*日志信息*/ 
}VSNET_LOGCASE;

typedef struct
{
    char             m_logctl;           //默认为0,1时为删除日志操作，2时为导出日志操作
    char             m_logogich;         // 0为所有日志，其他为搜索
    char             m_logtypesearch;    //按类型搜索 0,1,2,3 默认为0
    char             Received;		     //保留
    int              m_logstarttime;     //检索时的起始时间
    int  			 m_logstoptime;      //检索时的结束时间
    char*            m_logbuff;          //存放日志(VSNET_LOGCASE *)
}VSNET_LOGCTL;

/*************************FTP uploading parameter********************************/
typedef struct
{
    int                 m_enable_ftp;      // label of FTP upload(reserved)
    char                m_remote_IP[32];   // IP address
    unsigned short      m_remote_port;     // port
    char                m_linkstatus;      // FTP link state
    char                m_resume_enable;   //offline resume enable
    char                m_ftp_user[40];    // Ftp username
    char                m_ftp_pwd[40];     // Ftp password
} VSNETFTPINFO;

/*************************UPNP parameter********************************/
typedef struct
{
    int                 m_enable_upnp;     // upnp enable
} VSNETUPNPCFG;

typedef struct
{
    int                 m_upnp_status;     // upnp status
} VSNETUPNPSTATUS;

/*************************MAIL parameter********************************/
#define SEND_MAIL_MAX_ADDR_NUM              0x3
#define SEND_MAIL_MAX_ATTACH_NUM            0x3
#define SEND_MAIL_MAX_SUBJECT_LEN           0x40
#define SEND_MAIL_MAX_CONTENT_LEN           0x100
#define SEND_MAIL_STRING_LEN                0x40
#define SEND_MAIL_NAME_LEN                  0x20
#define SEND_MAIL_ADDR_LEN                  0x40


typedef struct
{
    char        m_mail_name[SEND_MAIL_NAME_LEN];    // sender name
    char        m_mail_addr[SEND_MAIL_ADDR_LEN];    // sender address
} VSNETMAILADDR;

typedef struct
{
    int                 m_enable_sendmail;                     // sending alarm mail enable
    char                m_server_addr[SEND_MAIL_ADDR_LEN];     // mail server address
    int                 m_server_port;                         // mail server port，25 as default
    char                m_auth_name[SEND_MAIL_STRING_LEN];     // mail verification name
    char                m_auth_pwd[SEND_MAIL_STRING_LEN];      // mail verification password

    int                 m_priority;                            // priority of mail
    char                m_subject[SEND_MAIL_MAX_SUBJECT_LEN];  // title of mail
    char                m_content[SEND_MAIL_MAX_CONTENT_LEN];  // content of mail
    VSNETMAILADDR       m_from_addr;                           // sender address
    VSNETMAILADDR       m_send_addr[SEND_MAIL_MAX_ADDR_NUM];   // receiver address
} VSNETMAILCFG;

/*************************CCD parameter ********************************/
typedef struct
{
    int              m_shuttermode;      // shutter mode 0:AES; 1:MES
    int              m_shtspeed;         // shutter speed 0~255
    int              m_aelevel;          // AE level 0~255

    int              m_awb;              // balance mode 0~255
    int              m_wbr;              // balance by hand R 0~255
    int              m_wbg;              // balance by hand G 0~255
    int              m_wbb;              // balance by hand B 0~255

    int              m_vflip;            // vertical overset 0:OFF; 1:ON
    int              m_hmirror;          // horizontal overset 0:OFF; 1:ON

    int              m_exposuremode;     // exposure mode 0:AE; 1:ME
    int              m_blc;              // back light compensation 0:OFF; 1:ON
    int              m_agc;              // automatic gain 0~255
    int              m_iris;             // iris 0~255
    int              m_toblackwhite;     // color to black-and-white 0:automatic; 1:infrared(night)
    int              m_zoom;             // zoom 0:OFF; 1:ON

    int              m_lightmode;        // switch between day and night 0~255
    int              m_flc;              // 0:OFF; 1:ON
    int              m_switch;           // switch between positive and negative 0:Posi 1:Nega
    int              m_sense;            // 0:OFF; 1:ON
    int              m_sensemax;         // 0:x2; 1:x4; ...; 7:x256
    int              m_prio;             // 0:AGC; 1:Sense up
} VSNETCCDPARAM;
/*************************SENSOR parameter ********************************/
// 色度参数
typedef struct
{
    int     m_nRed;      // 红色，取值范围0 ~ 1023
    int     m_nGreen;    // 绿色，取值范围0 ~ 1023
    int     m_nBlue;     // 蓝色，取值范围0 ~ 1023
} VSNET_VIRBGPARAM;

// 彩转黑参数
typedef struct
{
    int     m_nMode;     // 0:彩色；1:黑白；2:自动  
    int     m_nDay;      // 白天阈值，取值范围0~255，自动时有效
    int     m_nNight;    // 夜晚阈值，取值范围0~255，自动时有效
} VSNET_COLORMODE;

// SENSOR参数
typedef struct
{
    int                 m_nRGBEnable;            // RGB使能，0：关闭;1：开启
    VSNET_VIRBGPARAM    m_nRGB;                  // RGB参数值
    
    int                 m_nShutEnable;           // 快门使能，0：关闭;1：开启
    int                 m_nShutData;             // 快门速度，按位表示：1 < 0 1/25 1 < 1 1/30 1 < 2 1/50... 1 < 12 1/100K...
    unsigned char       m_nShutMode;             // 快门模式，0：AES; 1：MES
    unsigned char       m_nShutSpeed;            // 固定快门速度 0~255
    
    unsigned char       m_nAwbEnable;            // 白平衡使能，0：关闭;1：开启
    unsigned char       m_nAwb;                  // 白平衡模式，0：自动;1：手动; 抓拍机:0；自动；1；晴天；2；阴天；3；高压钠灯；
    unsigned char       m_nWbr;                  // 手动白平衡R，取值范围0 ~ 255
    unsigned char       m_nWbg;                  // 手动白平衡G，取值范围0~255； 抓拍机不使用该参数
    unsigned char       m_nWbb;                  // 手动白平衡B，取值范围0~255
    
    unsigned char       m_nVflipEnable;          // 垂直翻转使能，0：关闭;1：开启
    unsigned char       m_nVflip;                // 垂直翻转，0：OFF; 1：ON
    unsigned char       m_nHmirrEnable;          // 水平翻转使能，0：关闭;1：开启
    unsigned char       m_nHmirr;                // 水平翻转，0：OFF; 1：ON
    
    unsigned char       m_nExposEnable;          // 曝光模式 0：关闭;1：开启
    unsigned char       m_nExposMode;            // 曝光模式 0：AE; 1：ME
    
    unsigned char       m_nBlcEnable;            // 背光补偿使能 0：关闭;1：开启
    unsigned char       m_nBlc;                  // 背光补偿 0：OFF; 1：ON
    
    unsigned char       m_nAgcEnable;            // 自动增益使能，0：关闭;1：开启
    int                 m_nAgcData;              // 按位：1 < 0 低 1 < 1 中 1 < 2 高 1 < 3 关  
    unsigned char       m_nAgc;                  // 自动增益，0 ~ 3分别是高\中\低\关，默认为高，不能修改因为自动彩转黑必须开增益
    
    unsigned char       m_nIrisEnable;           // 光圈使能，0：关闭;1：开启
    unsigned char       m_nIris;                 // 光圈，取值范围0~255
    
    unsigned char       m_nColorEnable;          // 彩转黑使能，0：关闭;1：开启
    int                 m_nColorData;            // 按位：1 < 0 彩色 1 < 1 黑白 1 < 2 自动
    VSNET_COLORMODE     m_nColorMode;            // 彩转黑参数
    
    unsigned char       m_nZoomEnable;           // 变焦使能，0：关闭;1：开启
    unsigned char       m_nZoom;                 // 变焦 0：OFF; 1：ON
    
    unsigned char       m_nLightEnable;          // 日夜切换使能，0：关闭;1：开启
    unsigned char       m_nLightMode;            // 日夜切换 0~255
    
    unsigned char       m_nFlcEnable;            // 抗闪烁（应用场景）使能，0：关闭;1：开启
    unsigned char       m_nFlc;                  // 抗闪烁（应用场景），0：室内50HZ光源; 1：室内60HZ光源; 2：室外 3.自动 4.关闭
    
    unsigned char       m_nSwitchEnable;         // 正负片切换使能，0：关闭;1：开启
    unsigned char       m_nSwitch;               // 正负片切换，0：Posi 1：Nega
    
    unsigned char       m_nSenseEnable;          // 锐度菜单使能，0：关闭;1：开启
    unsigned char       m_nSensedate;            // 锐度按位取值，0：低; 1：中  2:较高 3:高
    unsigned char       m_nSenMaxEnable;         // 锐度使能，0：关闭;1：开启
    unsigned char       m_nSenMax;               // 锐度，取值范围0 ~ 30，0：x2; 1：x4; ...; 7：x256...
    int                 m_nSenMode;              // 锐度模式，0；自动;1；手动；  抓拍机使用
	
	unsigned char       m_nGammaEnable;          // gamma 使能，0：关闭;1：开启
    unsigned char       m_nGamma;                // gamma值，取值范围0~3
    
    unsigned char       m_nAelEnable;            // AE级别使能，0：关闭;1：开启
    unsigned char       m_nAel;                  // AE级别，取值范围0 ~ 255
    
    unsigned char       m_nSensiEnable;          // 灵敏度使能，0：关闭;1：开启
    unsigned char       m_nSensi;                // 灵敏度，取值范围0~255
    
    unsigned char       m_nBadPtEnable;          // 坏点补偿使能，0：关闭;1：开启
    unsigned char       m_nBadPt;                // 坏点补偿，0：OFF; 1：ON
    
    unsigned char       m_nPrioEnable;           // 0：关闭;1：开启
    unsigned char       m_nPrio;                 // 0：AGC; 1：Sense up
    
	unsigned char       m_nVYHEnable;          // 85-VYH设备视频参数调节使能 0：关闭;1：开启
    unsigned char       m_nVYHType;            // 视频参数调节方式 0:自动调节 1:手动调节
    unsigned char       m_nVYHlight;           // 亮度  范围：0~255
    unsigned char       m_nVYHaberrB;          // 色差分量B 范围：0~255
    unsigned char       m_nVYHaberrR;          // 色差分量R 范围：0~255
    
	unsigned char       m_nMirrorEnable;         // 镜像使能：0：关闭;1：开启
	unsigned char       m_nMirror;               // 镜像：0：OFF; 1：ON
	
	unsigned char       m_nLDCEnable;            // LDC使能：0：关闭;1：开启
	unsigned char       m_nLDC;                  // LDC：0：OFF; 1：ON
	
	unsigned char       m_ndrcEnable;            // 宽动态使能：0：关闭;1：开启
	unsigned char       m_ndrc;                  // 宽动态：0:OFF;1:ON

    unsigned char       m_irisstopenable;        // AI校正使能：0：关闭;1：开启
    unsigned char       m_irisstopvalue;         // AI校正停止值,校正前由用户配置 

    unsigned char       m_noiseenable;           // 降噪使能：0：关闭;1：开启
    VSNET_NOISEPARAM    m_noise;                 // 降噪参数
    unsigned char       m_wdrmode;               // sensor工作模式 0:线性(linear)模式, 1:宽动态(wdr)模式(目前AR0331支持wdr模式)
	
	unsigned char       m_frameAccEnable;        // 帧积累使能
    unsigned char       m_frameAcc;              // 帧积累frame accumulation 0 关闭,2 二帧积累,10 十帧积累,25 二十五帧积累

    unsigned char       m_rotation;              // 图像旋转角度：0不旋转;1~4-保留;5-顺时针90度;6顺时针270度

    unsigned char       m_cShutParamEnable;       // 电子快门模式下参数调节使能 0：关闭;1：开启
    unsigned char       m_cShutTargetBri;         // 期望图像亮度值，范围0~100, 用于电子快门
    unsigned short      m_nShutCurrentBri;        // 当前图像亮度值，用于电子快门，只读
    unsigned short      m_nShutSpeedMin;          // 快门速度范围最小值，范围32us~40000us，用于电子快门
    unsigned short      m_nShutSpeedMax;          // 快门速度范围最大值，范围32us~40000us，用于电子快门    
    unsigned char       m_cShutAgcMin;            // 模拟增益范围最小值，范围0~100, 用于电子快门
    unsigned char       m_cShutAgcMax;            // 模拟增益范围最大值，范围0~100, 用于电子快门
    unsigned char       m_cShutImageBriMin;       // 图像亮度阈值范围最小值，范围0~100, 用于电子快门
    unsigned char       m_cShutImageBriMax;       // 图像亮度阈值范围最大值，范围0~100, 用于电子快门

    unsigned char       m_cBlackLevelEnable;      // 黑电平参数调节使能 0：关闭;1：开启
    unsigned char       m_cBlackLevel;           // 黑电平，范围0~100,设置到ISP
    short               m_nFpgaBlackLevelOffset; //黑电平偏差值 范围[-512, 512],设置到FPGA
    unsigned char       m_cFpgaBlackLevel;       // 黑电平，固定为100，设置到FPGA

    unsigned char       m_cAgcOffsetEnable;      // 增益偏差值使能 0：关闭;1：开启
    short               m_nAgcOffset;            // 增益偏差值，范围[-512, 512]

    unsigned char       m_Mes_Agcenable;             // 固定快门模式下增益调节使能 0：关闭;1：开启
    unsigned char       m_Mes_AgcMax;                // 固定快门模式下增益设置[0, 199]

    unsigned char       m_Knf_enable;             // 3D降噪---空域降噪使能 0：关闭;1：开启
    unsigned char       m_Knf;                    // 3D降噪---空域降噪
    unsigned char       m_Tnf_enable;             // 3D降噪---时域降噪使能 0：关闭;1：开启
    unsigned char       m_Tnf;                    // 3D降噪---时域降噪 (现在只用0和非0区分开启或则关闭  以后可能还有降噪等级)

    short               m_reserved;                 //保留，用作扩展
    int                 m_reserve[36];               // 保留，用作扩展
}VSNET_SENSORPARAM;

//VPN参数
typedef struct
{
    int        m_bVpnenable;                //是否启用VPN
    char       m_szVpnSerIpAddr[32];        //VPN服务器IP地址
    char       m_szVpnUsername[32];         //VPN登录用户名
    char       m_szVpnUserpasswd[32];       //VPN登录密码
    char       m_szVpnLinkIpAddr[32];       //VPN连接成功后服务器分配的IP地址，只读
    int		   m_nVpnLinkStatus;            //VPN连接状态，只读 0;  //未连接	1; //已连接	2 ; //正在连接VPN服务器	3; //VPN拨号超时，正在重新拨号	4; //VPN网络已断开，正在重新拨号5; //VPN参数已修改，正在重新拨号
    char       m_nReserveD[28];             //保留，用作对齐
} VSNET_VPN_INFO;

//wifi参数
typedef struct
{
	int  m_nWifiState;   // wifi状态：0:未连接, 1:已连接
	int  m_nWifiSignal;  // wifi信号强度 
} VSNET_WIFI_INFO;

/************************APP platform configuration parameter*******************************/
typedef struct
{
    unsigned char       m_register_type;       // register type
    unsigned char       m_enable_register;     // register enable
    short               m_reserved;            // reserved for alignment
    unsigned int        m_register_interval;   // interval time for register，Second as UNIT，0 means only register once when device start
    unsigned char       m_sessionid[128];      // platform session ID
    unsigned char       m_store_sessionid[128];// store session ID
} VSNETPLATFORM_REGISTER_STRATEGY;

typedef struct
{
    unsigned char           m_heartbeat_type;    // heart beat type  0 udp  1 tcp
    unsigned char           m_enable_heartbeat;  // heart beat enable
    short                   m_reserved;          // reserved for alignment
    unsigned int            m_heartbeat_interval;// interval time for heart beat ,Second as UNIT
} VSNETPLATFORM_HEARTBEAT_STRATEGY;

/*************************IP-PORT pair structure********************************/
typedef struct
{
    unsigned char           m_ipaddr[32];   // ip
    unsigned int            m_port;         // port
} VSNETPLATFORM_IPPORT;

typedef struct
{
    VSNETPLATFORM_IPPORT       m_mannage_server;   // configuration of manager server
    VSNETPLATFORM_IPPORT       m_register_server;  // configuration of register server
    VSNETPLATFORM_IPPORT       m_heartbeat_server; // configuration of heart beat server
    VSNETPLATFORM_IPPORT       m_alarm_server;     // configuration of alarm server
    VSNETPLATFORM_IPPORT       m_store_server;     // configuration of store server
} VSNETPLATFORM_SERVERINFO;

#define VSNET_MAX_PLATFORM_IPPAIR   4
/*************************platform link configuration********************************/
typedef struct
{
    unsigned  int                m_platformtype;               // platform type
    char                         m_deviceID[32];               // device ID
    unsigned short               m_maxconnet;                  // max connection number，computing with 5 per channel
    unsigned short               m_linktype;                   // link type,1:LAN,2:ADSL,3:others
    unsigned short               m_msgport;                    // message port
    unsigned short               m_videoport;                  // video port
    unsigned short               m_audioport;                  // audio port
    unsigned short               m_talkport;                   // talk port
    unsigned short               m_updateport;                 // update port
    short                              m_reserved;             // reserved for alignment
    VSNETPLATFORM_SERVERINFO           m_platform_serverinfo;  // information of platform server
    VSNETPLATFORM_REGISTER_STRATEGY    m_platform_reg;         // information of platform register
    VSNETPLATFORM_HEARTBEAT_STRATEGY   m_platform_heatbeat;    // information of platform heart beat
} VSNETPLATFORM_INFO;
/*********************************************************/

typedef struct
{
    unsigned char                m_enable_vo;      // enable image circle or not 0:off 1:on 101:不支持
    unsigned char                m_enable_vo_vga;  // enable VGA 0:off 1:on 101:不支持
    unsigned char                m_vo_vga_res;     // 7:800*600 8:1024*768 101:不支持
    unsigned char                m_reserved[1];    // reserved for alignment
} VSNETVOCFG;

typedef struct
{
    unsigned char                m_upload_record;  // upload record
    unsigned char                m_upload_capjpeg; // upload captured image
    unsigned char                m_reserved[2];    // reserved for alignment
} VSNETFTPUPLOAD;

typedef struct
{
    char    m_ccCode[32];                          // manufacturer code
    char    m_devID[32];                           // device ID
    char    m_devType[32];                         // device type
    char    m_reserved[256];                       // reserved for extension
} VSNETDEVINFO_HH;

typedef struct
{
    int     m_run_seconds;                         // run time,second as UNIT
} VSNETRUNTIME_HH;

typedef struct
{
    VSNETFTPUPLOAD               m_ftp_upload[16]; // channel FTP upload parameter
} VSNETALARMFTPUPLOAD;

typedef struct
{
    unsigned char     m_alarm_rec[16];             // alarm relate to recording
    unsigned char     m_alarm_capjpeg[16];         // alarm relate to  JPEG capture
    unsigned char     m_ftp_alarmrec[16];          // uploading recording of alarm relating to FTP
    unsigned char     m_ftp_alarmcapjpeg[16];      // uploading capturing image of alarm relating to FTP
} VSNETALARMCONTACTEX;

typedef struct
{
    unsigned char     m_bEnable;                   // preset point plan enable
    unsigned char     m_reserved[1];               // reserved for alignment
    unsigned char     m_start_month;               // start month
    unsigned char     m_start_day;                 // start day
    unsigned char     m_start_hour;                // start hour
    unsigned char     m_start_min;                 // start minute
    unsigned char     m_stop_month;                // end month
    unsigned char     m_stop_day;                  // end day
    unsigned char     m_stop_hour;                 // end hour
    unsigned char     m_stop_min;                  // end minute
    unsigned char     m_point_intime;              // preset point number to be called in time
    unsigned char     m_point_outtime;             // preset point number to be called out of time
} VSNETAUTOPOINT_ITEM;

typedef struct
{
    unsigned char           m_bEnable;             // preset point plan enable
    unsigned char           m_interval;            // interval time reset automatically，minute as UNIT
    unsigned char           m_reserved[2];         // reserved for alignment
    VSNETAUTOPOINT_ITEM     m_scheme[4];           // 4 scheme of call preset point
} VSNETAUTOGOTOPOINT;

typedef struct
{
    unsigned char           m_enable;                  // temperature and humidity sensor enable
    unsigned char           m_addrtem;                 // address of temperature and humidity server
    unsigned char           m_osd_temperature;         // OSD temperature enable
    unsigned char           m_osd_humidity;            // OSD humidity enable
    int                     m_alarmtime;               // interval time for alarm
    TIMELIST                m_timelist;                // time for defense
    unsigned char           m_temperature_alarmout[16];// output of temperature alarm relating,previous 4 outputs are alarm outputs ,then 11 GPIO
    unsigned char           m_humidity_alarmout[16];   // output of humidity alarm relating,previous 4 outputs are alarm outputs ,then 11 GPIO
    float                   m_max_temperature;         // max temperature
    float                   m_min_temperature;         // min temperature
    float                   m_max_humidity;            // max humidity
    float                   m_min_humidity;            // min humidity
} VSNETTEMHUMYWCNCEN;

typedef struct
{
    unsigned char    m_enable;               // voltage sensor enable
    unsigned char    m_addrtem;              // voltage sensor address
    unsigned char    m_osd_voltage;          // OSD voltage enable
    unsigned char    m_reserved;             // reserved for alignment
    int              m_alarmtime;            // interval time for alarm
    TIMELIST         m_timelist;             // time for defence
    unsigned char    m_voltage_alarmout[16]; // output of humidity alarm relating,previous 4 outputs are alarm outputs ,then 11 GPIO
    float            m_rating;               // voltage rating ,V as UNIT
    float            m_alarm_voltage;        // alarm voltage，V as UNIT
} VSNETVYWCNCEN;

typedef struct
{
    unsigned char    m_bEnable[3];              // enable relate to dangerous temperature and humidity
    unsigned char    m_reserved;                // reserved
    unsigned char    m_bEnable_maxdan_tem[4];   // max dangerous temperature enable
    float            m_maxdan_temperature[3];   // max dangerous temperature
    unsigned char    m_bEnable_mindan_tem[4];   // min dangerous temperature enable
    float            m_mindan_temperature[3];   // min dangerous temperature
    unsigned char    m_bEnable_maxdan_hum[4];   // max dangerous humidity enable
    float            m_maxdan_humidity[3];      // max dangerous humidity
    unsigned char    m_bEnable_mindan_hum[4];   // min dangerous humidity enable
    float            m_mindan_humidity[3];      // min dangerous humidity
    unsigned int     m_checktimersecond;        // interval time for checking
} VSNETDANTEMHUMYWCNCEN;

typedef struct
{
    int                     m_alarmmode;        // alarm mode0：OFF,1：ON
    int                     m_singlehost;       // label of center for uploading alarm signal
    unsigned char           m_record[16];       // relating to recording
    unsigned char           m_out[15];          // relating to output
    unsigned char           m_osd_enable;       // OSD Enable
    unsigned char           m_enpreno[16];      // relating to preset point
    unsigned char           m_preno[16];        // perset point number to be called
    unsigned char           m_capjpeg[16];      // relating to capture
    TIMELIST                m_timelist;         // check time table
} ALARMRECORDEXYWCNCEN;

typedef struct
{
    int                     m_benab;            // alarm enable
    ALARMRECORDEXYWCNCEN    m_alarmrec[8];      // parameter of relating alarm
} ALARMPARAMEXYWCNCEN;

typedef struct
{
    float                   m_rate_voltage;     // rating voltage
    float                   m_cur_voltage;      // current voltage
} VSNETVALARMYWCNCEN;

typedef struct
{
    short                   m_temhumdata;       // temperature and humidity
    short                   m_alarmtype;        // alarm type 0:no alarm,1:higher than upper limit,2:lower than upper limit
} VSNETTEMHUMALARMYWCNCEN;

// caution line
typedef struct
{
    int     m_sgline_flg;        // single line alarm enable
    char    m_sgline_name[64];   // alarm rule name for single line
    int     m_sgline_drc;        // single line direction 0:Left1:Right 2:bidirectional
    int     m_sgline_beg_x;      // alarm coordinate of single line , top left
    int     m_sgline_beg_y;      // alarm coordinate of single line , top left
    int     m_sgline_end_x;      // alarm coordinate of single line , down right
    int     m_sgline_end_y;      // alarm coordinate of single line , down right
} VSNETVASINGLELINERULE;

typedef struct
{
    int                    m_multiline_flg;      // broken line alarm
    char                   m_multiline_name[64]; // rule name of broken line alarm
    int                    m_lineCount;          // single line count of broken line
    VSNETVASINGLELINERULE  m_multiline[10];      // rule of broken line
} VSNETVAMULTILINERULE;

typedef struct
{
    int     m_dbline_flg;        // double line alarm enable
    char    m_dbline_name[64];   // rule name of double line alarm
    int     m_dbline_drc;        // double line direction 0:left 1:right
    int     m_dbline0_beg_x;     // alarm coordinate of line one , top left
    int     m_dbline0_beg_y;     // alarm coordinate of line one , top left
    int     m_dbline0_end_x;     // alarm coordinate of line one , down right
    int     m_dbline0_end_y;     // alarm coordinate of line one , down right
    int     m_dbline1_beg_x;     // alarm coordinate of line two , top left
    int     m_dbline1_beg_y;     // alarm coordinate of line two , top left
    int     m_dbline1_end_x;     // alarm coordinate of line two , down right
    int     m_dbline1_end_y;     // alarm coordinate of line two , down right
} VSNETVADOUBLELINERULE;

// region alarm(enter,leave,hover) public segment
typedef struct
{
    int                m_region_valid;                  // valid label of region alarm
    int                m_region_flg;                    // region alarm enable
    char               m_region_name[64];               // rule name of region alarm
    unsigned int       m_packed_msk[352 * 288 / 8 / 4]; // region mask---stored as bit (0-->>0) (1-->>255)
} VSNETVAREGIONERULE;

typedef struct
{
    int                m_frm_bkgd;        // frame number when background initialization finished
    int                m_frm_pixels;      // average value of background and covariance period for updating---per m_frm_pixels frame updating once
    int                m_frm_object;      // time for static object becomes background ---update moving point for a long time  to background
} VSNETVABACKGROUND;

typedef struct
{
    int                m_obj_min_area;    // min area of moving object
    int                m_obj_max_area;    // max area of moving object
} VSNETVAOBJECTAREA;

typedef struct
{
    int                m_alm_window_enable;     // object rectangle enable
    int                m_alm_dotline_enable;    // point of object track enable
    int                m_stabilization_enable;  // image stabilization enable
    int                m_region_shield_enable;  // region shield enable
    unsigned int       m_region_shield_msk[352 * 288 / 8 / 4]; // mask code of region shield after packing---store with bit (0-->>0) (1-->>255)
} VSNETVAALARMSETTING;

typedef struct
{
    int                m_enable;    // 0:disable; 1:enable local preview
    int                m_scale;     // 0:1 picture; 1:4 pictures; 2:9 pictures; 3:16 pictures
    unsigned char      m_vichn[16]; // select input channels for 16 output channels
    // nvr: index is vochn  value is decch
} VSNETVIEWPARAM;

typedef struct
{
    VSNETVIEWPARAM     m_viewparam[VSNET_DVR_MAXVONUM];
} VSNETVIEWCFG;

typedef struct
{
    int                m_time;             // round look time
    int                m_scale;            // 0:1 picture; 1:4 pictures; 2:9 pictures; 3:16 pictures
    unsigned char      m_vichn[16];        // select input channels for 16 output channels
} VSNETLOOPPARAM;

typedef struct
{
    int                m_enable;           // 0:disable; 1:enable round look
    int                m_loopnum;          // group number of round look
    VSNETLOOPPARAM     m_loopparam[20];    // parameter of round look
} VSNETLOOPVIEW;

typedef struct
{
    VSNETLOOPVIEW      m_loopview[VSNET_DVR_MAXVONUM];
} VSNETLOOPCFG;

typedef struct
{
    int                m_enabled;          // disk support smartctl or not,1:enable，0:disable
    int                m_health;           // disk check,1:passed, 0:failed.
    int                m_temperature;      // disk temperature
    int                m_poweronhours;     // disk power-on time
    int                m_uncorrectalbe;    // percentage of error sector scanned off line
} VSNETSMARTPARAM;

typedef struct
{
    int                m_disknum;          // total of disk
    VSNETSMARTPARAM    m_smartinfo[8];     // smart information of 8 disks
} VSNETSMARTINFO;

typedef struct
{
    int                m_enable;           // nfs 1：enable， 0：disable
    char               m_deviceip[40];     // device IP address
    char               m_devicedir[40];    // device path
} VSNETMNTNFS;

typedef struct
{
    int                m_enable;                        // enable
    int                m_singlehost;                    // label of center for uploading alarm signal
    int                m_singlebuzzer;                  // buzzer trigger
    int                m_magnify[VSNET_DVR_MAXVONUM];   // relating amplification
    int                m_reseved1;                      // reserved
    unsigned char      m_record[VSNET_DVR_MAXCH];       // relate to recording
    unsigned char      m_capjpeg[VSNET_DVR_MAXCH];      // relate to capture
    unsigned char      m_ftprecord[VSNET_DVR_MAXCH];    // ftp upload recording
    unsigned char      m_ftpcapjpeg[VSNET_DVR_MAXCH];   // ftp upload alarm capturing
    unsigned char      m_out[VSNET_DVR_MAXALARMOUT];    // relate to output
    unsigned char      m_enable_ptz[VSNET_DVR_MAXCH];   // enable relate to cloud platform
    unsigned char      m_enable_type[VSNET_DVR_MAXCH];  // ability type，1:call preset point，2:call track, 3:ONLY preset point,4:ONLY track
    unsigned char      m_preno[VSNET_DVR_MAXCH];        // call preset point
    unsigned char      m_pretrackno[VSNET_DVR_MAXCH];   // relating track number
    TIMELIST           m_timelist;                      // check time table
} VSNETDVRALARMPARAM;

typedef struct
{
    VSNETDVRALARMPARAM  m_alarmparam;
    unsigned char       m_alarmsenstive;    // sensitivity of moving detection
    unsigned char       m_reseved1;         // reserved
    unsigned char       m_reseved2;
    unsigned char       m_reseved3;
    unsigned char       m_detect[18][22];   // range to be detected
} VSNETDVRMOTIONALARM;                      // parameter of moving detection

typedef struct
{
    VSNETDVRALARMPARAM  m_alarmparam;
    int                 m_alarmmode;        // alarm mode0：OFF,1：ON
    int                 m_senseorinterval;  // interval time of sensor alarm
    char                m_alarmname[32];    // sensor name
} VSNETDVRSENSORALARM;                      // parameter of sensor alarm

typedef struct
{
    VSNETDVRALARMPARAM  m_alarmparam;
    int                 m_decval;           // detection sensitivity(1(lowest)---5(highest))
} VSNETDVRHIDEALARM;                        // hide alarm

typedef struct
{
    VSNETDVRALARMPARAM  m_alarmparam;
} VSNETDVRVILOSTALARM;                      // video lost

typedef struct
{
    VSNETDVRALARMPARAM  m_diskfull;         // disk full
    VSNETDVRALARMPARAM  m_diskerror;        // disk error
    VSNETDVRALARMPARAM  m_accessviolation;  // violative access
    VSNETDVRALARMPARAM  m_nodisk;           // no disk
    VSNETDVRALARMPARAM  m_reseved1;         // reserved
    VSNETDVRALARMPARAM  m_reseved2;         // reserved
    VSNETDVRALARMPARAM  m_reseved3;         // reserved
    VSNETDVRALARMPARAM  m_reseved4;         // reserved
} VSNETDVROTHERALARM;                       // other parameter

typedef struct
{
    VSNETDVRALARMPARAM  m_alarmparam;
    int                 m_capinterval;      // interval time of capture, 0:snap one picture
    int                 m_alarmtime;        // delay time of alarm
    float               m_alarmtemp;        // return difference temperature of alarm
    int                 m_alarmmode;        // alarm mode, 0:higher than 1:lower than 2:outof 3:between
    float               m_hightemp;         // the highest temperature of alarm
    float               m_lowtemp;          // the lowest temperature of alarm
}VSNETREGIONTEMPALARM;

typedef struct
{
    char                m_deviceID[16];     // device ID
    char                m_active;           // status, 1 : active
    char                m_reserved[3];
} VSNETREMOTECTRL;

typedef struct
{
    unsigned int      m_right;                // each bit represents a kind of right,from low to high,it is
    // local playback,long-distance playback,long-distance preview,talk,local cloud platform control,
    // long-distance cloud platform control、recording by hand、recording file backup、log management、
    // system parameter setting,upgrading system,close device,management of user account number
    unsigned int      m_right1;               // reserved
    unsigned int      m_netview;              // 0~31 channel of long-distance preview
    unsigned int      m_netview1;             // 32~63 channel of long-distance preview
    unsigned int      m_netplay;              // 0~31 channel of long-distance preview
    unsigned int      m_netplay1;             // 32~63 channel of local playback
    unsigned int      m_localplay;            // 0~31 channel of local playback
    unsigned int      m_localplay1;           // 32~63 channel of local playback
} VSNETDVRUSERRIGHT;

typedef struct
{
    VSNETDVRUSERRIGHT m_right;
    char              m_groupname[20];
} VSNETDVRUSERGROUP;

typedef struct
{
    char              m_username[20];
    char              m_password[20];
    int               m_groupnum;            // right group of user
    VSNETDVRUSERRIGHT m_right;
} VSNETDVRUSER;

typedef struct
{
    int               m_usernum;             // user number
    int               m_groupnum;            // number of valid groups
    VSNETDVRUSERGROUP m_group[8];            // 8 groups，initialize 4 groups ,reserve 4 groups
    VSNETDVRUSER      m_user[32];            // 32 users，initialize 4 users
} VSNETDVRSYSUSER;

// extent user info(add the stauts of user)
typedef struct
{
    char              m_status[32];          // the status of user(0:disbale, 1:enable)
    VSNETDVRSYSUSER   m_dvrsysuser;
} VSNETDVRSYSUSEREX;

typedef struct
{
    int               bShow;             // show(1),hide(0)
    char              lpString[32];      // characters to be showed
    unsigned short    x, y;              // coordinate
} TITALOSD_DVR;

typedef struct
{
    TIMEOSD           m_time;            // time
    TITALOSD_DVR      m_tital[4];        // title
    BITSINFOOSD       m_bits;            // bit rate
} CHANNOSD_DVR;

typedef struct
{
    int               m_doublebits;      // 1:double bit stream，0:single bit stream
} VSNETDVRDOUBLEBITS;

typedef struct
{
    char              m_name[9][32];     // name of switching button
} VSNETSWITCHSCREENNAME;

typedef struct
{
    char              m_servername[60];   // server name
    char              m_serverip[16];     // IP address
    char              m_servermask[16];   // network mask
    char              m_gatewayAddr[16];  // gateway
    unsigned short    m_serport;          // data port
    char              m_hostserverurl[40];// address of long-distance server
    unsigned short    m_hostserverport;   // port of long-distance server
    char              m_pppoename[64];    // PPPOE username
    char              m_pppoepswd[64];    // PPPOE password
} VSNETBASENETPARAM;

typedef struct
{
    int             m_ftp_timerec;     // regular FTP uploading capture
    TIMELIST        m_timeList;        // capture time
} VSNETFTPTIMEREC;

typedef struct
{
    int             m_xoffset;         // horizontal offset 0~32
    int             m_yoffset;         // vertical offset 0~32
} VSNETVIDEOOFFSETEX;

typedef struct
{
    int             m_state;             // 3G state
    char            m_ip[32];            // CenterIP
    char            m_subnetmask[32];    // subnet mask for WCDMA dialing
    char            m_gateway[32];       // gateway for WCDMA dialing
    char            m_wcdma_dns_pri[32]; // primary DNS for WCDMA dialing
    char            m_wcdma_dns_alt[32]; // Secondary DNS for WCDMA dialing
} VSNET3GSTATE;

typedef struct
{
    int             m_3gmode;            // connection parameter      -------->0-OFF 1-CDMA 2-evdo(3g cdma2000) 4-wcdma 8-tdcdma
    unsigned char   m_cdmaname[64];      // reserve cdma username(dv-do username)
    unsigned char   m_cdmapwd[64];       // reserve cdma password(dv-do password)
    char            m_cdmadial[16];      // reserve cdma dialing number(dv-do dialing number)
} VSNET3GPARAM;

typedef struct
{
    int              m_3gmode;           // connection parameter      -------->0-OFF 1-CDMA 2-evdo(3g cdma2000) 4-wcdma 8-tdcdma
    unsigned char    m_cdmaname[64];     // reserve cdma username(dv-do username)
    unsigned char    m_cdmapwd[64];      // reserve cdma password(dv-do password)
    char             m_cdmadial[16];     // reserve cdma dialing number(dv-do dialing number)
    unsigned char    m_apnname[64];      // point name
    int              m_keepalive;        // keep connection alive
    int              m_lcpechointerval;
    int              m_lcpechofailure;
    int              m_maxreceiveunit;
    int              m_maxtransferunit;
    int              m_networkconnectionmode;    // online,dial for need,dial by hand
    int              m_networkregistertype;      // AUTO,2G,3G
    int              m_radiobankset;             // band setting,represented by bit
    int              m_bandsaving;               // reserved band
    int              m_getdnsfromoperator;
    char             m_dns_pri[32];              // Primary DNS
    char             m_dns_alt[32];              // Secondary DNS
    int              m_authtype;
    unsigned char    m_expertoptions[128];       // extension parameter
} VSNET3GPARAMEX;

typedef struct
{
    int              m_pinprotection;            // pin protection
    unsigned char    m_pincode[64];              // pin code
} VSNETPININFO;

typedef struct
{
    int              m_simstatus;                // sim status
    unsigned char    m_simnumber[64];            // sim number
    char             m_operator[20];             // provider
    int              m_cur_cdma_network;         // current network
    int              m_sig_percent;              // signal strength
    char             m_imei[20];                 // IMEI
} VSNETSIMINFO;

typedef struct
{
    int              m_smsdays;                  // message days
    int              m_sms_sendip;               // message sends IP address or not
    unsigned char    m_smscellphone[64];         // number for receiving message
    unsigned char    m_smscenternumber[64];      // number of message center
    unsigned char    m_smscontent[128];          // content of message
} VSNETSMSINFO;

typedef struct
{
    int              m_logsize;                  // log size
    unsigned char *  m_logstring;                // log content
    unsigned char    m_logfilename[64];          // log name
} VSNETWCDMALOG;

typedef struct
{
    int              m_check3gstatus;            // check 3g status
    unsigned char    m_pingipaddr[64];           // ping IP Address
    int              m_pingipinterval;           // interval  of ping ip
    int              m_pingbytes;                // data size for ping
    int              m_pingfailcnt;              // redial number when ping failure
} VSNETCHECK3GSTATUS;

typedef struct
{
    int              m_nPhoneDisconnauto;         // 短信电话激活无网络连接时自动断线：1：勾选；无传值：未勾选
    int              m_nPhoneDisconntimer;        // 短信、电话激活上线无连接时等待时间 
    int              m_nChkPhone;                 // 仅接受来自以下号码的短信或来电：1：勾选；无传值：未勾选
    int              m_nManualDisconnauto;        // 手动控制无网络连接时自动断线：1：勾选；无传值：未勾选         
    int              m_nManualDisconntimer;       // 手动控制无连接等待时间 
    int              m_nCuroption;                // 0：设置参数; 1：立即上线；2：立即断开
    char             m_strPhonenumber[10][20];    // 可接受电话号码 
    int              m_nAlarmDisconnenAble;       // 报警模式下设置一定时间断开连接使能
    int              m_nAlarmDisconnTmSet;        // 报警模式下设置断开连接时间
    TIMELIST         m_timeList;                  // 定时时间表
} VSNET_CHECK3GCONNPARAM;

typedef struct
{
    int                    m_nPhoneorSmsDisconnect; // 短信电话下线
    VSNET_CHECK3GCONNPARAM m_connParam;
} VSNET_CHECK3GCONNNET;

typedef struct
{
    int  m_nResult;          // 3G短信测试返回结果
    char m_szTestMsg[256];   // 3G短信测试返回结果字符串
} VSNET_3GSMSTESTRES;

typedef struct
{ 
    int             m_nLogSize;  // 拨号日志文件大小，以Byte为单位
} VSNET_3GDIALUPLOG;

typedef struct
{
    char             m_nSisNetState[120];  // 网络连接状态
    VSNETSIMINFO     m_sistate;
} VSNET_3GSIMINFONET;

typedef struct
{
    int     m_linkenable;       // link enable
    int     m_listenport;       // monitor port
} VSNETRTSPPARAM;

// RTSP扩展参数
typedef struct
{
    int     m_linkenable;       // RTSP使能，0-关闭，1-启动
    int     m_listenport;       // RTSP监听端口
    int     m_udpstartport;     // RTSP的UDP起始端口
} VSNETRTSPPARAMEX;

// VLC参数
typedef struct
{
    int     m_linkenable;       // VLC使能，0-关闭，1-启动
    char    m_dstaddr[16];      // VLC目标IP地址，只支持IP地址
    int     m_dstport;          // VLC目标端口
    int     m_streamselect;     // VLC流类型，0-PS流，1-TS流
} VSNETVLCPARAM;

// VLC扩展参数
typedef struct
{
    int     m_linkenable;       // VLC使能，0-关闭，1-启动
    char    m_dstaddr[64];      // VLC目标地址，支持IP地址和域名
    int     m_dstport;          // VLC目标端口
    int     m_streamselect;     // VLC流类型，0-PS流，1-TS流
} VSNETVLCPARAMEX;

// NTP参数
typedef struct
{
    int     m_linkenable;       // NTP使能，0-关闭，1-启动
    char    m_serveraddr[16];   // NTP服务器地址，只支持IP地址
    int     m_serverport;       // NTP服务端口
    int     m_timezone;         // 时区，取值范围-12 ~ 12
} VSNETNTPPARAM;

// NTP扩展参数
typedef struct
{
    int     m_linkenable;       // NTP使能，0-关闭，1-启动
    char    m_serveraddr[64];   // NTP服务器地址，支持IP地址和域名
    int     m_serverport;       // NTP服务端口
    int     m_timezone;         // 时区，取值范围-12 ~ 12
} VSNETNTPPARAMEX;

typedef struct
{
    VSNETRTSPPARAM m_rtsp;      // RTSP parameter
    VSNETVLCPARAM  m_vlc;       // VLC  parameter
    VSNETNTPPARAM  m_ntp;       // NTP  parameter
} VSNETPROTOCOLPARAM;

typedef struct
{
    VSNETRTSPPARAMEX m_rtsp;      // RTSP parameter
    VSNETVLCPARAMEX  m_vlc;       // VLC  parameter
    VSNETNTPPARAMEX  m_ntp;       // NTP  parameter
} VSNETPROTOCOLPARAMEX;

typedef struct
{
    int             m_encodetype;  // encoding type, 0:H.264, 1:MJPEG 2:MPEG4 3:H265
} VSNETENCODETYPE;

//编码级别 编码为h264下才有效 目前就56设备支持
typedef struct
{
    int             m_encodeprofile;  // encoding profile, 0:baseline, 1:MP, 2:HP
} VSNETENCODEPROFILE;

typedef struct
{
    int             m_remotestreamtype;  // 0 主码流、1 子码流、2 第三码流
} VSNETREMOTESTREAMTYPE;

typedef struct 
{
    unsigned int    m_encryption;        // 加密方式0:不加密1:SSL 2:STARTTLS
}VSNETENCRYPTIONTYPE;

typedef struct
{
    short       m_audiotag;     // audio tag
    short       m_auchs;        // audio channel number
    short       m_aurates;      // audio bit rate
    short       m_reserved;     // reserved
    int         m_ausample;     // audio sampling frequency
} VSNETTALKBOTHWAY;

typedef struct
{
    int         m_locktime;
} VSNETPTZCTRLTIME;

#define MAX_MEM_NUM 10
#define MAX_PRO_NUM 10
typedef struct
{
    int                      m_prono;            // preset point
    int                      m_time;             // time
    char                     m_proname[32];      // name of preset point
} APP_CRUISE_PRO;
typedef struct
{
    int                     m_enable;            // enable
    TIMECHECK               m_cruise_time;       // time
    char                    m_cruise_name[32];   // cruise name
    int                     m_line_enable;       // enable superposition of cruise route
    int                     m_dot_enable;        // enable superposition of cruise point
    int                     m_superpose_title;   // superposition to title, value as:0，1，2，3 represent superposition to 1,2,3,4 title
    APP_CRUISE_PRO          m_cruise_pro[MAX_PRO_NUM];
} APP_CRUISE_MEMBER;

typedef struct
{
    int                 m_enable;
    APP_CRUISE_MEMBER   m_cruise_member[MAX_MEM_NUM];
} VSNETPROLOOPPARAM;

typedef struct
{
    char  reccordName[60];     // record name
} VSNETSERVERRECPARAM;         // record command parameter of long-distance server

typedef struct
{
    int m_audio_bestir;
} NETFILE_REMOTEAUDIOBESTIR;

typedef struct
{
    int videoin;
} VSNETVIDEOENCMAPINFO;

typedef struct
{
    char    m_value[8];        // show evidence
} VSNETATTESTEXHIBIT;

typedef struct
{
    char m_actors[7];          // character array，from 0 to 5 represents 6  roles's channels，0 justice...，6 is end symbol
} VSNETACTORSINFO;

typedef struct
{
    int                 m_enable;               // enable
    unsigned int        m_brecord[2];           // relate to recording
    unsigned int        m_capjpeg[2];           // relate to jpeg capture
    unsigned int        m_ftp_alarmrec[2];      // uploading recording of alarm relating to FTP
    unsigned int        m_ftp_alarmcapjpeg[2];  // uploading alarm capture to FTP
    unsigned int        m_outputmap[4];         // relate to output
    TIMELIST            m_timelist;             // detection time table
} VSNETSMALARMLINK;                             // alarm relating of intellective analysis

typedef struct
{
    int                 m_enable;                         // 使能OSD边框功能
    int                 m_size;                           // 边框大小
    VSNET_RGB_COLOR     m_color;                          // 边框颜色
    int                 m_reserver;                       // 保留
} VSNET_CHANNOSD_BORDER;//OSD边框信息


typedef struct
{
    unsigned char                   m_video; //视频 QOS 优先级  取值范围[0, 63] , TOS使用的是高6位，底层使用时注意移位 
    unsigned char                   m_audio; //音频 QOS 优先级  取值范围[0, 63] , TOS使用的是高6位，底层使用时注意移位 
    unsigned char                   m_reserver[2];//保留位
} VSNET_QOS_TOS;//音视频 qos优先级设置 获取

typedef struct 
{
    int                             m_num;              //支持的通道数
    unsigned short                  m_encode[256];      //前面m_num个存入支持的分辨率
}VSNET_RESOLUTION_LIST;

typedef struct 
{
    int                             m_stream_num;   //设备支持的码流总数
    VSNET_RESOLUTION_LIST           m_encode[4];    //每种码流支持的分辨率
    int                             m_reserver[4];
}VSNET_DEV_RESOLUTION;

#define VSNET_NETCFG_IPV6LEN 48
typedef struct
{
    char   m_localip[VSNET_NETCFG_IPV6LEN];               //局部IP，不可修改 //使用时暂时只需该参数，其他的保留
    int  m_local_fplen;                              //局部IP格式前缀长度
    char   m_ipaddr1[VSNET_NETCFG_IPV6LEN];               //服务器地址，用于动态获取IP，如DHCP
    int  m_ip1_fplen;                                //IP格式前缀长度
    char   m_ipaddr2[VSNET_NETCFG_IPV6LEN];               //服务器地址，预留
    int  m_ip2_fplen;                                //IP格式前缀长度，预留
    char   m_gateway[VSNET_NETCFG_IPV6LEN];               //网关
    char   m_dns1[VSNET_NETCFG_IPV6LEN];                  //DNS1
    char   m_dns2[VSNET_NETCFG_IPV6LEN];                  //DNS2
    char   m_multiipaddr[VSNET_NETCFG_IPV6LEN];           //多播地址
}VSNET_NETCFG_IPV6;

#define VSNET_SNMP_USER_BUFFER_LEN 64 //用户名长度
#define VSNET_SNMP_USER_PASSWORD_LEN 64 //密码长度

typedef struct
{
    char  m_name[VSNET_SNMP_USER_BUFFER_LEN];//用户名
    char  m_hmac_type;//鉴权方式
    char  m_hmac_passwd[VSNET_SNMP_USER_PASSWORD_LEN];//加密密码
    char  m_code_type;//加密方式
    char  m_code_passwd[VSNET_SNMP_USER_PASSWORD_LEN];//加密密码
    char  m_security_level;//0:无认证无加密； 1:认证不加密 2:认证加密
    char  m_reserve;//保留对齐
}VSNET_SNMP_USER_V3_T;

typedef struct
{  
    char  m_read_community[VSNET_SNMP_USER_BUFFER_LEN];            /*读共同体*/  
    char  m_rw_community[VSNET_SNMP_USER_BUFFER_LEN];      /*写共同体*/
    
    /*下面只用于v3版本*/
    VSNET_SNMP_USER_V3_T m_read_user; //只读用户
    VSNET_SNMP_USER_V3_T m_rw_user;//读写用户
    
    int   m_reserve[16];//保留
    
}VSNET_SNMP_USER_T;

typedef struct
{  
    int                 m_selectVersion;     //选择使用snmp版本 按位标识
    VSNET_SNMP_USER_T   m_user;              //保存配置的用户信息
    char                m_trapaddr[16];      //陷阱地址
    unsigned short      m_pollPort;          //轮询端口
    unsigned short      m_TrapPort;          //陷阱端口

    char                m_reserve[64];
    
}VSNET_SNMP_CFG_T;

typedef struct
{  
    VSNET_SNMP_CFG_T    m_snmp;              //配置信息
    int                 m_default_flag;      //snmp恢复默认标志
    char                m_reserve[4];
}VSNET_SNMP_T;

// 智能分析扩展报警联动参数(最多支持16个视频通道)
typedef struct 
{
	int					m_enable;               // enable
	unsigned int		m_brecord[16];          // relate to recording
	unsigned int		m_capjpeg[16];          // relate to jpeg capture
	unsigned int		m_ftp_alarmrec[16];     // uploading recording of alarm relating to FTP  
    unsigned int		m_ftp_alarmcapjpeg[16]; // uploading alarm capture to FTP
	unsigned int		m_outputmap[16];        // relate to output
	TIMELIST			m_timelist;             // detection time table
} VSNETSMALARMLINK_EX;

// 智能分析OSD叠加参数
typedef struct
{
    int                 m_enable;               // enable
    unsigned short      m_x, m_y;               // coordinate
    char                m_text[32];             // content to be showed of OSD superposition
} VSNETSMOSD;

// 智能分析区域入侵\离开规则
typedef struct
{
    int                 m_enable;                   // enable rule
    int                 m_enableosd;                // OSD enable
    int                 m_enabledefregion;          // enable default region
    char                m_rulename[64];             // rule name
    unsigned int        m_packed_msk[352 * 288 / 8 / 4]; // region mask---stored with bit (0-->>0) (1-->>255)
    VSNETSMALARMLINK    m_alarmlink;                // alarm relating
    VSNETSMOSD          m_osd[2];                   // OSD superposition of intellective analysis alarm
} VSNETSMREGIONINOUT;

// 智能分析扩展区域入侵\离开规则(最多支持16个视频通道)
typedef struct
{
	int					m_enable;					// enable rule
	int					m_enableosd;				// OSD enable
	int					m_enabledefregion;			// enable default region
	char				m_rulename[64];				// rule name
	unsigned int        m_packed_msk[352 * 288 / 8 /4];	// region mask---stored with bit (0-->>0) (1-->>255)
	VSNETSMALARMLINK_EX	m_alarmlink;				// alarm relating
	VSNETSMOSD			m_osd[2];					// OSD superposition of intellective analysis alarm
} VSNETSMREGIONINOUT_EX;

// 智能分析徘徊规则
typedef struct
{
    int                 m_enable;                   // enable rule
    int                 m_enableosd;                // OSD enable
    int                 m_enabledefregion;          // enable default region
    int                 m_hovertime;                // standard time of hovering
    char                m_rulename[64];             // rule name
    unsigned int        m_packed_msk[352 * 288 / 8 / 4]; // region mask---stored with bit (0-->>0) (1-->>255)
    VSNETSMALARMLINK    m_alarmlink;                // alarm relating
    VSNETSMOSD          m_osd[2];                   // OSD superposition of intellective analysis alarm
} VSNETSMREGIONHOVER;

// 智能扩展分析徘徊规则(最多支持16个视频通道)
typedef struct
{
	int					m_enable;                   // enable rule 
	int					m_enableosd;                // OSD enable
	int					m_enabledefregion;          // enable default region
	int					m_hovertime;                // standard time of hovering
	char				m_rulename[64];             // rule name
	unsigned int        m_packed_msk[352 * 288 /8 / 4];	// region mask---stored with bit (0-->>0) (1-->>255)
	VSNETSMALARMLINK_EX	m_alarmlink;                //alarm relating
	VSNETSMOSD			m_osd[2];                   //OSD superposition of intellective analysis alarm
} VSNETSMREGIONHOVER_EX;

// 智能分析警戒线规则			
typedef struct
{
    int                 m_enable;            // rule enable
    int                 m_sgline_drc;        // single line direction    0:left 1:right 2:bidirectional
    int                 m_sgline_beg_x;      // coordinate of single line alarm,top left
    int                 m_sgline_beg_y;      // coordinate of single line alarm,top left
    int                 m_sgline_end_x;      // coordinate of single line alarm,down right
    int                 m_sgline_end_y;      // coordinate of single line alarm,down right
    char                m_rulename[64];      // rule name
    unsigned char       m_enableosd;         // OSD enable
    VSNETSMALARMLINK    m_alarmlink;         // alarm relating
    VSNETSMOSD          m_osd[2];            // OSD superposition of intellective analysis alarm
} VSNETSMALARMLINE;

// 智能分析扩展警戒线规则(最多支持16个视频通道)
typedef struct
{
	int					m_enable;            // rule enable
	int					m_sgline_drc;        // single line direction	0:left 1:right 2:bidirectional
	int					m_sgline_beg_x;      // coordinate of single line alarm,top left
	int					m_sgline_beg_y;      // coordinate of single line alarm,top left
	int					m_sgline_end_x;      // coordinate of single line alarm,down right
	int					m_sgline_end_y;      // coordinate of single line alarm,down right
	char				m_rulename[64];      // rule name
	int					m_enableosd;         // OSD enable
	VSNETSMALARMLINK_EX	m_alarmlink;         // alarm relating
	VSNETSMOSD		    m_osd[2];            // OSD superposition of intellective analysis alarm
} VSNETSMALARMLINE_EX;

#if defined(TARGET_FJTS64LINE)
#define SMART_MAXLINES 64   // max line count is 64
#else
#define SMART_MAXLINES 10   // max line count is 10
#endif

// 智能分析警戒线规则集
typedef struct
{
    int                 m_count;            // line count
    VSNETSMALARMLINE    m_lines[SMART_MAXLINES];        
} VSNETSMALARMLINES;

// 智能分析扩展警戒线规则集(最多支持16个视频通道)               
typedef struct
{
	int					m_count;			// line count
	VSNETSMALARMLINE_EX	m_lines[SMART_MAXLINES];
} VSNETSMALARMLINES_EX;



/**************************** 智能分析规则是否显示在客服端 *********************************************/
#define MAXSMPTNUM 64
typedef struct
{
#if defined(TARGET_FJTS64LINE)
    unsigned int m_nShowLineL;               //是否显示拌线规则 按位表示 目前最多64条线可以表示
    unsigned int m_nShowLineH;
#else
    int m_nShowLine;                //是否显示拌线规则 按位表示 目前最多10条线可以表示
#endif
    unsigned char m_bShowInRule;   //是否显示区域侵入规则
    unsigned char m_bShowOutRule;  //是否显示区域离开规则
    unsigned char m_bShowHoverRule;//是否显示区域侵入规则    
    unsigned char m_cReserved1;    //保留
    unsigned char m_cReserved2[4]; //保留
} VSNET_SMCLIENTSHOW;

typedef struct
{
    float m_nX;
    float m_nY;
} VSNET_POINT;

typedef struct
{    
    VSNET_POINT m_pt[MAXSMPTNUM];//区域规则点保存
    int m_nPtNum;             
} VSNET_SMRECTRULE;
/**************************  智能分析规则是否显示在客服端 ---      完 *************************************/

typedef struct
{
    unsigned int        m_alarmtime;        // alarm time
    int                 m_alarmtype;        // alarm type
    char                m_alarmdesc[56];    // alarm description
} VSNETALARMJPEGCAP;

typedef struct
{
    char m_num[8];              // pit number
    int m_bmotionjpg;           // uploading moving capture to FTP
    int m_waittime;             // wait time(second) for protecting from building bridge
    int m_front_sd;             // front value
} VSNETJNKYPARAM;

typedef struct
{
    char            m_postaddr[32]; // post address
    unsigned short  m_postport;     // post port
    unsigned short  m_reserved;     // reserved for alignment
} VSNETJNKYSERINFO;

typedef struct
{
    int                 m_cruise_day;               // cruise date
    TIMELIST            m_cruise_time;              // cruise time
    int                 m_line_enable;              // enable superposition of cruise route
    char                m_osdstring[32];            // display character of OSD superposition
    int                 m_superpose_title;          // superposition to title, value as:0，1，2，3 represent superposition to 1,2,3,4 title
    int                 m_staytime;                 // stay time of cruise point，3-255 seconds
    int                 m_cruise_pre[MAX_PRO_NUM];  // preset point number
} VSNETPROLOOPPARAMEX;                              // server cruise parameter,no relationship with previous version VSNETPROLOOPPARAM

#define   HNDX_STROSD_NUM   8
#define   HNDX_STROSD_LEN   40

typedef struct
{
    int      m_format;  // not show，2003-09-12 15:23:33，2003-09-12 FRI 15:23:33，09-12-2003 15:23:33，09-12-2003 FRI 15:23:33，12-09-2003 15:23:33
    int      m_x;       // x position，8-704 (multiple of 4)
    int      m_y;       // y position，10-576
} VSNETHNDXTIMEOSD;     // time OSD

typedef struct
{
    int      m_isshow;  // show bit rate or not
    int      m_x;       // x position，8-704 (multiple of 4)
    int      m_y;       // y position，10-576
} VSNETHNDXBITRATEOSD;  // bit rate OSD

typedef struct
{
    int      m_x;                       // x position，8-704 (multiple of 4)
    int      m_y;                       // y position，10-576
    int      m_color;                   // color 0:red 1:green 2:blue 3:white
    char     m_str[HNDX_STROSD_LEN];    // String
} VSNETHNDXOSDSTRING;                   // String OSD

// OSD parameter
typedef struct
{
    VSNETHNDXBITRATEOSD m_bitrateosd;
    VSNETHNDXTIMEOSD    m_timeosd;
    VSNETHNDXOSDSTRING  m_stringosd[HNDX_STROSD_NUM];
} VSNETHNDXOSDATTR;

// AAC parameter
typedef struct
{
    int       m_enableaac;   // AAC enable
    int       m_enSmpRate;   // AAC sampling frequency
    int       m_BitWidth;    // AAC bit width
    int       m_BandWidth;   // AAC band width
} VSNETAUDIOAAC;

typedef struct
{
    int       m_color_set;   // 0: automatic, 1: by hand
} VSNETHQCOLOR;              // set mode

typedef struct
{
    int     m_smart_sense;   // intellective analysis of sensitivity
} VSNETSMARTSENSE;

typedef struct
{
    int     m_smart_tracktype;    // intellective analysis of object type：0 all，1 human 2 vehicle
} VSNETSMARTTRACKTYPE;

typedef struct
{
    char    m_serurl[16];         // server IP address
    int     m_serport;            // server port
    char    m_stationID[10];      // station number
    char    m_reserve[2];         // reserved for alignment
    char    m_clienturl[16];      // additional client ip
    int     m_clientport;         // client port
    char    m_direction[4];       // station direction
} VSNETCDRHPARAM;

typedef struct
{
    int   m_enable;               // ON or OFF
    int   m_interval;             // check interval
    float m_flowlow;              // flow lower limit
    float m_flowhigh;             // flow upper limit
    float m_phlow;                // ph lower limit
    float m_phhigh;               // ph upper limit
    float m_Densitylow[12];       // lower limit of 12 kinds of pollution
    float m_Densityhigh[12];      // upper limit of 12 kinds of pollution
    char  m_Alarmflow[4];         // alarm ,flow relating to
    char  m_Alarmph[4];           // alarm ,PH relating to
    char  m_AlarmDensity[12][4];  // alarm ,pollution relating to
} VSNETYWCODPARAM;

typedef struct
{
    char   DeviceState[8];        // 8 devices
    float  m_flow;                // flow speed
    float  m_ph;                  // PH
    float  m_Density[12];         // lower limit of 12 kinds of pollution
} VSNETYWCODDATA;

typedef struct
{
    char m_cmd[52];               // command of sampling machine for water quality
} VSNETYWSZCYQCODE;

typedef struct
{
    char m_code[12];              // command of electromagnetism flowmeter
} VSNETYWFLOWMETERCODE;

typedef struct
{
    int     m_region_flg;         // region flag of analysis for black degree,judge region or not
    int     m_region_left;        // region coordinate of analysis for black degree,top left
    int     m_region_top;         // region coordinate of analysis for black degree,top left
    int     m_region_right;       // region coordinate of analysis for black degree,down right
    int     m_region_bottom;      // region coordinate of analysis for black degree,down right
} VSNET_BLACK_REGION;

typedef struct
{
    VSNET_BLACK_REGION  m_region[10];   // region of analysis for black degree
} VSNET_BLACK_REGIONTARGET;

typedef struct
{
    VSNET_BLACK_REGION  m_region;       // reference region for  analysis for black degree
} VSNET_BLACK_REGIONREFER;

typedef struct
{
    float m_min_val;                    // lowest value of black degree
    float m_max_val;                    // highest value of black degree
} VSNET_BLACK_ALARMRANGE;

typedef struct
{
    VSNET_BLACK_REGION  m_region;       // region of analysis for black degree
    float               m_value;        // value of black degree
} VSNET_BLACK_VALUE;

typedef struct
{
    VSNET_BLACK_VALUE   m_report[10];   // report value of analysis for black degree
} VSNET_BLACK_REPORT;

typedef struct
{
    int     m_state;         // state: open,close
    int     m_limittime;     // system limit times(hour)
    int     m_runedtime;     // device runned times(hour，only get valid)
} VSNETYWDEVRUNTIME;

typedef struct
{
    unsigned char   m_islock;          // is lock the disk
    unsigned char   m_reserved[3];     // reservation
} VSNETBUFFLOCK;

typedef struct
{
    unsigned short  m_serport;
    unsigned short  m_webport;
    unsigned short  m_rtspport;
    unsigned short  m_p2pport;
} VSNETCDHCPORT;

typedef struct
{
    unsigned int    m_sigpercent;       // signal power
    unsigned int    m_rx_byte;          // accepted flow
    unsigned int    m_tx_byte;          // sent flow
} VSNETSIGAND3GFLOW;

typedef struct
{
    float           m_gpsvx;
    float           m_gpsvy;
    int             m_gpsvsout;
    float           m_gpsvspeed;
    float           m_gpsvheight;
    char            m_gpsvtime[32];
} VSNETHZFLGPSINFO;

// Sensor坏点检测
typedef struct
{
	unsigned short  badpixelcount;      // 设备返回实际检测的坏点数，设置时不关心
	unsigned short  badpixelcountmin;   // 用户设置检测的最小坏点数
	unsigned short  badpixelcountmax;   // 用户设置检测的最大坏点数
    unsigned short  reserved;           // 保留
} VSNET_BADPIXEL_RET;

// GZJieWei Parameter = VSNETGZJWUIDHEADER + Data
typedef struct
{
    int   m_Mask1;       // MSGHEAD_MASK1: 0X280028
    int   m_Vision;      // message version: current = 1
    int   m_MgsType;     // message type: m_MgsType = 8079
    int   m_ErrorCode;   // message status code
    int   m_DataSize;    // message data size: max size = 32 bytes
    short m_Ex1;         // extension 1
    short m_Ex2;         // extension 2
    int   m_Mask2;       // MSGHEAD_MASK2: 0X280028
} VSNETGZJWUIDHEADER;

// GZJieWei Parameter
typedef struct
{
    VSNETGZJWUIDHEADER m_MsgHead;
    char               m_MsgData[32];
} VSNETGZJWUIDPARAM;

// beijing huatuo
typedef struct
{
    int     m_bEnable;  // enable watcher, 1 enable, 0 disable
    int     m_iTime;    // check time > 0
    int     m_iPreset;  // preset number
} VSNETBJHTPTZWATCHER;

#define VSNET_MAXRESOLUTIONNUM    100    // 支持的最大视频分辨率个数

// DVR的VO接口定义
typedef enum
{
    ENUM_VSNET_VO_VGA = 0,     // VO的VGA接口
    ENUM_VSNET_VO_HDMI = 1     // VO的HDMI接口
} ENUM_VSNET_DVRVO;

// DVR的单个VO设置参数
typedef struct
{
    unsigned char  m_bSupport;                                  // 是否支持该VO接口（只能获取），0-不支持，1-支持
    unsigned char  m_supportResolution[VSNET_MAXRESOLUTIONNUM]; // 支持的分辨率（只能获取）,按照上面ENUM_VSNET_VIDEO_RESOLUTION定义的顺序,一个字节代表一个分辨率是否支持，1-支持，0-不支持
    unsigned char  m_bEnable;                                   // 是否启用该接口，只有支持该接口时才允许设置，0-不支持，1-未启用，2-启用
    unsigned char  m_indentation;                               // VO的缩放系数，只有支持该接口时才允许设置范围0~255，(暂未使用)
    unsigned char  m_resolution;                                // 当前的分辨率，只有支持该接口时才允许设置，取值按照上面ENUM_VSNET_VIDEO_RESOLUTION定义
} VSNET_DVRVOSETTS;

// DVR的VO设置参数
typedef struct
{
    VSNET_DVRVOSETTS m_vointerface[VSNET_DVR_MAXVONUM];         // DVR的VO参数设置，目前最多支持VSNET_DVR_MAXVONUM个VO接口，接口按照上面ENUM_VSNETVO的定义，0-VGA，1-HDMI
} VSNET_DVRVOPARAM;

/***********************新存储结构体*********************************/
//硬盘属性
typedef enum {
    VS_DISK_TYPE_RW,            /**< 读写盘 */
    VS_DISK_TYPE_RO,            /**< 只读盘 */
    VS_DISK_TYPE_RD,            /**< 冗余盘 */
    VS_DISK_TYPE_ALL,           /**< 所有类型 */
    VS_DISK_TYPE_BUTT,          /**< 无效值 */
}VS_DISK_TYPE_E;

typedef struct
{
    int          m_diskno[16];      /**< 硬盘号对应分组 普通盘组取值 [1-HD_MAXDISKNUM],冗余盘组取值-1*/
    int          m_chno[64];          /**< 通道号对应分组 普通盘组取值 [1-HD_MAXDISKNUM],冗余盘组取值-1*/
}VS_GROUP_CFG_T;

typedef struct
{
    int             m_type;         /**< 硬盘类型；注:请使用VS_DISK_TYPE_E里面的值*/
    int             m_lock;         /**< 硬盘是否锁定  LC_TRUE锁定 LC_FALSE未锁定  */
}VS_DISK_ATTR_T;

//硬盘配置
typedef struct
{
    VS_DISK_ATTR_T      m_disk[16];
}VS_DISK_CFG_T;

//存储盘组配置信息
typedef struct
{
    VS_GROUP_CFG_T      m_groupcfg;        /**< 分组配置  */
    VS_DISK_CFG_T       m_dattrcfg;        /**< 硬盘属性  */
}VS_STORAGE_CFG_T;

#define VS_SMART_ATTRIBUTES   30    
#define VS_SMART_ATTRNAMELEN  32    
#define VS_SMART_ATTRRAWVAL   32    

typedef struct
{
    unsigned char       m_id;
    unsigned char       m_curr;
    unsigned short      m_flags;
    unsigned char       m_worst;
    unsigned char       m_thresh;
    char                m_reserv[2];
    unsigned char       m_name[VS_SMART_ATTRNAMELEN];
    unsigned char       m_rawval[VS_SMART_ATTRRAWVAL];
}VS_SMART_ELEM_T;

//硬盘SMART信息
typedef struct
{
    int                     m_enabled;                      /**< 0不支持SMART，1支持SMART */
    unsigned int            m_version;
    VS_SMART_ELEM_T         m_smart[VS_SMART_ATTRIBUTES];
}VS_SMART_INFO_T;


// for DVR(LC78XX) ---add by buwp,2010-6-11
/**********************************  DVR GUI ADD *****************************************/
typedef struct
{
    unsigned char  m_no;                     // the number of preseting position
    char           m_name[31];               // the name   of preseting position
} VSNET_PTZ_PRESET_NO_T;

typedef struct
{
    int                    m_num;            // Now, how many preseting position we have
    VSNET_PTZ_PRESET_NO_T  m_presetno[255];
} VSNET_PTZ_PRESET_T;                        // Save PTZ preseting position

typedef struct
{
    int                 m_usernum;     // how many user we have,now
    int                 m_groupnum;    // how many valid user group we have ,now
    VSNETDVRUSERGROUP   m_group[8];    // 8 groups, initialize 4 groups  4 are reserved
    VSNETDVRUSER        m_user[32];    // 32 users, initialize 4 users
} VSNET_SYSUSER_T;

typedef struct
{
    char m_status[32];                 // the status of user(0:disbale, 1:enable)
    VSNET_SYSUSER_T m_user;
} VSNETDVRSYSUSER_EX;                  // extent user info(add the stauts of user)

typedef struct
{
    int             m_hdisk_attrib;         // disk attribute 0:default(read/write); 1:redundance ; 2:readonly
    char            m_hdisk_serialno[32];   // disk serial id
    int             m_resev[40];            // reserved
} VSNETDISKPARAM;

typedef struct
{
    int             m_disk_count;           // disk count
    VSNETDISKPARAM  m_diskparam[16];        // disk param
    int             m_disk_reduflag[64];    // disk redundance single, by channels
} VSNETRECORDDISKPARAM;

typedef struct
{
    int     m_type;                         // contorl type
    int     m_value;                        // speed or address; CVT: H
    int     m_paramfirst;                   // 3D:speed for H; CVT: V
    int     m_paramsecond;                  // 3D:speed for V; CVT: speed for H
    int     m_paramthird;                   // 3D:zoom parameter; CVT: speed for V
} VSNETDVRPTZ;

typedef struct
{
    int     m_zoom;                         // amplification factor
    int     m_X;                            // centre coordinate X
    int     m_Y;                            // centre coordinate Y
} VSNET_PTZCTRL_ZOOM;

typedef struct
{
    int              m_audio_type;             // audio type
    int              m_audio_bitrate;          // bit rate: 16K,24K,32K,40K for G726
    int              m_audio_samplerate;       // sample rate
    int              m_audio_bitwidth;         // bitwidth
} VSNETAUDIO;

typedef struct
{
    unsigned char timer;       // 0、HIDE 1、MM:SS:mm(00:00:00)2、HH:MM:SS(00:00:00)
    unsigned int  positionx;   // XPOS
    unsigned int  positiony;   // YPOS
} CHANNELTIMEROSD;

// SHTY
typedef struct
{
    int             m_audio_timerec;   // enable flag
    int             m_packtime;        // package time
    TIMELIST        m_timeList;        // capture time
} VSNETVIDEOTIMEREC;

// SHTY
typedef struct
{
    unsigned int  m_recodch[8][16];
} VSNETSHTYALARMAUDIO;

// SHTY
typedef struct
{
    unsigned int  m_capTime[8];
} VSNETSHTYALARMCAPTIME;

typedef struct
{
    int m_denoise;         // tvp5158 denoise level
    int m_reseved;         // reserved
} VSNET_TVP5158_DENOISE;

/**********************************  DVR GUI END *****************************************/


/**********************************  NVR 通道设备管理参数 *****************************************/	

//NVR 支持的分辨率类型
typedef enum
{
	VSNET_NVR_FORMAT_16F,
	VSNET_NVR_FORMAT_8F,
	VSNET_NVR_FORMAT_8H,
} VSNET_NVR_FORMAT_ENUM;

typedef struct
{
	VSNET_NVR_FORMAT_ENUM nNvrType;      //NVR 支持的分辨率类型 
} VSNET_NVR_FORMAT_TYPE;

typedef struct
{
    char            m_szSerName[32];     //server name
    char            m_szSerIp[20];       //server ip address
    unsigned short  m_nSerport;          //server port
    unsigned short  m_nChannel;          //the channel of server to be connected
    unsigned short  m_nTransType;        //the media transport type tcp/udp/multi
    unsigned short  m_nChlinkState;      //channel link state
    unsigned short  m_nImgHeight;        //image height
    unsigned short  m_nImgWidth;         //image width
    char            m_szUserName[20];    //server user name
    char            m_szPasswd[20];      //server password
    int             m_reserved1;         //reserved1
    int             m_reserved2;         //reserved2
} VSNET_NVR_DEVINFO;

typedef struct
{
    char            m_szSerName[32];     //server name
    char            m_szSerIp[100];       //server ip address
    unsigned short  m_nSerport;          //server port
    unsigned short  m_nChannel;          //the channel of server to be connected
    unsigned short  m_nTransType;        //the media transport type tcp/udp/multi
    unsigned short  m_nChlinkState;      //channel link state
    unsigned short  m_nImgHeight;        //image height
    unsigned short  m_nImgWidth;         //image width
    char            m_szUserName[20];    //server user name
    char            m_szPasswd[20];      //server password
    int             m_reserved1;         //reserved1
    int             m_reserved2;         //reserved2
} VSNET_NVR_DEVINFO_EX;

typedef enum 
{
    NVR_FORMAT_NONE  = 0,
    NVR_FORMAT_D1    = 1,
	NVR_FORMAT_720P  = 3,
	NVR_FORMAT_1080P = 7,
	NVR_FORMAT_300W  = 8,
	NVR_FORMAT_500W  = 9,
} VSNET_NVR_FORMAT_VALUE;

//NVR 绑定设备的信息
typedef struct
{
    int                     m_bEnable;        //channel been used ?
    VSNET_NVR_FORMAT_VALUE  m_nMaxSize;       //max video format
    VSNET_NVR_DEVINFO       m_vsDevInfo;      //channel info
} VSNET_NVR_CHINFO;

//NVR 绑定设备的信息
typedef struct
{
    int                     m_bEnable;        //channel been used ?
    VSNET_NVR_FORMAT_VALUE  m_nMaxSize;       //max video format
    VSNET_NVR_DEVINFO_EX       m_vsDevInfo;      //channel info
} VSNET_NVR_CHINFO_EX;

typedef struct
{
    VSNET_NVR_CHINFO   		m_channel[VSNET_DVR_MAXCH];      //channel info,记住查看,当VSNET_DVR_MAXCH改变时记得修改
} VSNET_NVR_CHANINFO;

typedef struct
{
    VSNET_NVR_CHINFO_EX   		m_channel[VSNET_DVR_MAXCH];      //channel info,记住查看,当VSNET_DVR_MAXCH改变时记得修改
} VSNET_NVR_CHANINFO_EX;


typedef struct
{
    int                     m_maxrecv;      //最大接入带宽
    int                     m_maxsend;      //最大发送带宽
    int                     m_currecv;      //当前接入带宽
    int                     m_cursend;      //当前发送带宽
    int                     m_reserved1;
    int                     m_reserved2;
    int                     m_reserved3;
    int                     m_reserved4;
} VSNET_NVR_BANDWIDTH;

#define NVR_MAX_LOGICHS 64

//通道类型参数结构体
typedef struct 
{
    int m_modify[NVR_MAX_LOGICHS];	//配置通道, 1->允许, 0->禁止
    int m_chtype[NVR_MAX_LOGICHS];    //通道类型，模拟->1、数字->2、未使用->0
}VSNET_NVR_CHCTRL_CHTYPE_S;

#define NVR_MAX_SUPPORTRANGE 16

//通道支持分辨率结构体
typedef struct
{
	int m_support[NVR_MAX_SUPPORTRANGE];        //数组下标表示对应分辨率。数组中值表示分辨率是否支持(0:不支持；1:支持)
	//数组下标:0:D1  1:720P 2:1080P
}VSNET_NVR_CHANNELFORMAT;

/**********************************  NVR 通道设备管理参数 完***************************************/

/* 双网卡工作模式配置 */
typedef struct
{
    int m_workmode;     /* 工作模式选择，0->负载均衡, 1->网络容错, 2->独立配置 */
    int m_defaultgw;    /* 默认网关选择，0->LAN1, 1->LAN2 */
}VSNET_NETCARD_WORKMODE_S;

/********************************** 88258 STRUCT *****************************************/

#define MAX_CLIP_NUM 10
#define MAX_FAN_NUM  3                // fan number

// CARD TYPE
typedef enum
{
    CLIP_TYPE_MASTER    = 0,          // master card
    CLIP_TYPE_DEC       = 1,          // decoder card
    CLIP_TYPE_ENC_D1    = 2,          // D1
    CLIP_TYPE_ENC_720P  = 3,          // 720P
    CLIP_TYPE_ENC_1080P = 4,          // 1080
    CLIP_TYPE_ALARM     = 5,          // ALARM
    CLIP_TYPE_DEVICE    = 6,          // DEVICE
} APP_CLIP_TYPE;

typedef enum
{
    CLIP_SLOT_SUB0      = 0,          // CLIP1
    CLIP_SLOT_SUB1      = 1,          // CLIP2
    CLIP_SLOT_SUB2      = 2,          // CLIP3
    CLIP_SLOT_SUB3      = 3,          // CLIP4
    CLIP_SLOT_SUB4      = 4,          // MASTER
    CLIP_SLOT_SUB5      = 5,          // CLIP5
    CLIP_SLOT_SUB6      = 6,          // CLIP6
    CLIP_SLOT_SUB7      = 7,          // CLIP7
    CLIP_SLOT_MASTER    = 8,          // CLIP8
    CLIP_SLOT_MACHINE   = 9,          // ALARM
    CLIP_SLOT_ALARM     = 10,         // reserved
} APP_CLIP_NO;

typedef struct
{
    int        m_temperature;            // Temperature
    int        m_humidity;               // humidity
} VSNETHUMITUPARAM, *PVSNETHUMITUPARAM;  // Temperature and humidity


typedef struct
{
    unsigned int     m_speed;            // fan speed： r/s
    unsigned char     m_state;           // state
    unsigned char     m_reseved[3];      // reserved
} VSNETFANSTATE, *PVSNETFANSTATE;        // fan state


typedef struct
{
    unsigned char     m_isexist;         // Be Exist
    unsigned char     m_type;            // card type
    unsigned char     m_state;           // state
    unsigned char     m_reseved[5];      // reserved
} VSNETCLIPSTATE, *PVSNETCLIPSTATE;      // clip card state


typedef struct
{
    VSNETCLIPSTATE    m_stotstate;       // slot state:master、clip、slot、alarm
    VSNETHUMITUPARAM  m_humitu;          // Temperature and humidity of card
} VSNETBANCARDINFO, *PVSNETBANCARDINFO;


typedef struct
{
    unsigned char     m_powerstate;                 // power state
    unsigned char     m_reseved[7];                 // reserved
    VSNETFANSTATE     m_fanstate[MAX_FAN_NUM];      // fan state
    VSNETBANCARDINFO  m_bancardinfo[MAX_CLIP_NUM];  // card information
} VSNETDECVICEPARAM, *PVSNETDECVICEPARAM;
/************************************ 88258 END ******************************************/

typedef struct
{
    int    m_clipstate;      // clip card state
    int    m_clipnum;        // clip card num
} VSNETUPDATESLOT;

// NAS state Information
#define NAS_STATE_UNENABLE      1
#define NAS_STATE_UNCONNECT     2
#define NAS_STATE_CONNECT       4
#define NAS_STATE_INUSE         8

typedef enum
{
    MNT_CIFS,
    MNT_NFS,
} MNTFILETYPE;

typedef struct
{
    char m_NASenable;               // Enable NAS
    char m_reseved[3];              // reseved
    char m_NASip[32];               // NAS IP
    char m_NASpath[80];             // NAS path
    char m_NASuser[40];             // NAS username
    char m_NASpassword[40];         // NAS password
    MNTFILETYPE  mnt_type;
} VSNETNASINFO;

typedef struct
{
    int  m_state;                   // Disk State 1、not use 2、Unlink  4.linked 8.on using
    int  m_totalsize;               // Disk Size
    int  m_freesize;                // free size
} VSNETNASSTATE;

typedef struct
{
    VSNETNASINFO  m_NASinfo[8];
    VSNETNASSTATE m_NASstate[8];
} VSNETNASPARAM;

typedef struct
{
    char              m_url[32];    // IP address
    int               m_port;       // data port
} VSNETINFONET;

typedef struct
{
    VSNETINFONET      m_netinfo[4];    // net information
    char              m_sername[40];   // server name
    char              m_username[20];  // user name
    char              m_password[20];  // password
    int               m_cardnum;       // card number
    unsigned char     m_isexist;       // card be exist
    unsigned char     m_type;          // card type
    unsigned char     m_state;         // card state
    unsigned char     m_reseved;       // reseved
} VSNETCARDINFO;

typedef struct
{
    VSNETCARDINFO m_cardinfo[8];
} VSNETCARDPARAM;

// 探头当前状态
typedef struct
{
    int m_nStatus[16]; //0 开 1闭合 -1无效
} VSNET_ALARM_IN_STATUS;

// 报警输出状态
typedef struct
{
	BYTE m_nStatus[8]; //报警1 报警2
} VSNET_ALARM_OUT_STATUS;

// 报警设置状态
typedef struct
{
	BYTE m_nStatus[8]; //报警1 报警2
} VSNET_ALARM_IN_SET;  



/*******************************日记搜索定义******************************/
//集中编码器搜索日志的结构体中m_nMark的取值

/************************报********************警*****************/
/*主类型*/
#define LOG_ALARM_MAJOR 0x1
/*次类型*/
#define LOG_ALARM_MINOR_MOTIONDEC_START         0x101   /* 移动侦测开始*/
#define LOG_ALARM_MINOR_MOTIONDEC_STOP          0x111   /* 移动侦测结束*/
#define LOG_ALARM_MINOR_VIDEOLOST_START         0x102   /* 视频丢失开始*/
#define LOG_ALARM_MINOR_VIDEOLOST_STOP          0x112   /* 视频丢失结束*/
#define LOG_ALARM_MINOR_SENSOR_START            0x103   /* 探头报警开始*/
#define LOG_ALARM_MINOR_SENSOR_STOP             0x113   /* 探头报警结束*/
#define LOG_ALARM_MINOR_HIDEALARM_START         0x104   /* 遮挡报警开始*/
#define LOG_ALARM_MINOR_HIDEALARM_STOP          0x114   /* 遮挡报警结束*/
#define LOG_ALARM_MINOR_PUSENSOR_START          0x105   /* 前端探头报警开始*/
#define LOG_ALARM_MINOR_PUSENSOR_STOP           0x115   /* 前端探头报警结束*/

/************************异********************常*****************/
/*主类型*/
#define LOG_EXCEPTION_MAJOR 0x2
/*次类型*/
#define LOG_EXCEPTION_MINOR_ILLEGALACCESS               0x201   /* 非法访问*/
#define LOG_EXCEPTION_MINOR_HD_FULL                     0x202   /* 硬盘满*/
#define LOG_EXCEPTION_MINOR_HD_ERROR                    0x203   /* 硬盘错误*/
#define LOG_EXCEPTION_MINOR_NET_BROKEN                  0x204   /* 网线断*/
#define LOG_EXCEPTION_MINOR_NET_TIMEOUT                 0x205   /* 网络不通*/
#define LOG_EXCEPTION_MINOR_VIDEOMOODERROR              0x206   /* 视频制式错误*/
#define LOG_EXCEPTION_MINOR_IPADDRCONFLICT              0x207   /* IP地址冲突*/
#define LOG_EXCEPTION_MINOR_NODISK                      0x208   /* 无硬盘*/

#define LOG_EXCEPTION_MINOR_HD_TOOMANYBADSECTOR         0x209   /* 坏扇区太多 */
#define LOG_EXCEPTION_MINOR_HD_DISKUNHEALTH             0x210   /* 磁盘状态不健康 */
#define LOG_EXCEPTION_MINOR_HD_DISKREMOVE               0x211   /* 硬盘被不正常移去 */

#define LOG_EXCEPTION_MINOR_VIDEOEXCEPTION              0x212   /* 视频异常 */
#define LOG_EXCEPTION_MINOR_CPUEXCEPTION      	        0x213   /* CPU 异常 */
#define LOG_EXCEPTION_MINOR_NETEXCEPTION                0x214   /* 网络 异常 */
#define LOG_EXCEPTION_MINOR_NOUSEABLEDISK               0x215   /* 无可用硬盘*/

#define LOG_EXCEPTION_MINOR_MACHINE_FAN_STOP            0x216   /* 风扇停止转动*/
#define LOG_EXCEPTION_MINOR_MACHINE_FAN_SINGULARITY     0x217   /*风扇异常*/
#define LOG_EXCEPTION_MINOR_MACHINE_BANCARD_SINGULARITY 0x218  /*板卡异常*/

#define LOG_EXCEPTION_MINOR_GET_VIDEOLOST_FAILED        0x219   /*获取视频丢失状态失败*/

#define LOG_EXCEPTION_MINOR_REBOOT                      0x220   /* 设备异常重启 */
#define LOG_EXCEPTION_MINOR_DEVICE_RESOUT               0x221   /* 分辨率超出 */
#define LOG_EXCEPTION_MINOR_DEVICE_USERERROR            0x222   /* 用户名密码出错 */
#define LOG_EXCEPTION_MINOR_DEVICE_NORMAL               0x223   /* 网络连接成功 */
#define LOG_EXCEPTION_MINOR_DEVICE_USEROVER             0x224   /* 服务器通道满员 */
#define LOG_EXCEPTION_MINOR_DEVICE_SHUT                 0x225   /* 连接断开 */
/************************操********************作*****************/
/*主类型*/
#define LOG_OPERAT_MAJOR 0x3
/*次类型*/
#define LOG_OPERAT_MINOR_START_DVR                      0x301   /* 开机*/
#define LOG_OPERAT_MINOR_STOP_DVR                       0x302   /* 关机*/

#define LOG_OPERAT_MINOR_LOCAL_LOGIN                    0x303   /* 本地登陆*/
#define LOG_OPERAT_MINOR_LOCAL_CFG_PARM                 0x304   /* 本地配置参数*/
#define LOG_OPERAT_MINOR_REMOTE_GET_PARM                0x305   /* 远程获得参数*/
#define LOG_OPERAT_MINOR_LOCAL_START_REC                0x306   /* 本地开始录像*/
#define LOG_OPERAT_MINOR_LOCAL_STOP_REC                 0x307   /* 本地停止录像*/
#define LOG_OPERAT_MINOR_LOCAL_PLAYBYFILE               0x308   /* 本地按文件回放*/
#define LOG_OPERAT_MINOR_LOCAL_PLAYBYTIME               0x309   /* 本地按时间回放*/
#define LOG_OPERAT_MINOR_LOCAL_PTZCTRL                  0x30A   /* 本地云台控制*/
#define LOG_OPERAT_MINOR_LOCAL_PREVIEW                  0x30B   /* 本地预览*/
#define LOG_OPERAT_MINOR_LOCAL_UPGRADE                  0x30C   /* 本地升级*/
#define LOG_OPERAT_MINOR_LOCAL_COPYFILE                 0x30D   /* 本地备份文件*/
#define LOG_OPERAT_MINOR_REMOTE_ARM                     0x30E   /* 布防*/
#define LOG_OPERAT_MINOR_REMOTE_REBOOT                  0x30F   /* 远程重启*/
#define LOG_OPERAT_MINOR_START_VT                       0x310   /* 开始语音对讲*/
#define LOG_OPERAT_MINOR_STOP_VT                        0x311   /* 停止语音对讲*/

#define LOG_OPERAT_MINOR_MACHINE_BANCARD_ADD            0x312   /*子板卡插入*/
#define LOG_OPERAT_MINOR_MACHINE_BANCARD_DEL            0x313   /*子板卡拔出*/

#define LOG_OPERAT_MINOR_FORMATDISK				        0x314   /* 格式化硬盘*/
#define LOG_OPERAT_MINOR_FORMATDISK_FAILED              0x315   /* 格式化硬盘失败*/
#define LOG_OPERAT_MINOR_DISK_LOCK				        0x316   /* 锁定硬盘*/
#define LOG_OPERAT_MINOR_DISK_UNLOCK                    0x317   /* 解锁硬盘*/

#define LOG_OPERAT_MINOR_START_LOOP                     0x318   /* 开始轮巡*/
#define LOG_OPERAT_MINOR_STOP_LOOP                      0x319   /* 停止轮巡*/
#define LOG_OPERAT_MINOR_START_AUDIO                    0x320   /* 开始音频*/
#define LOG_OPERAT_MINOR_STOP_AUDIO                     0x321   /* 停止音频*/
#define LOG_OPERAT_MINOR_START_NETWORK_TALK             0x322   /* 网络对讲开启*/
#define LOG_OPERAT_MINOR_STOP_NETWORK_TALK              0x323   /* 网络对讲停止*/
#define LOG_OPERAT_MINOR_LOCAL_PLAY_STOP                0x324   /* 本地回放结束*/
#define LOG_OPERAT_MINOR_LOCAL_START_TIMEREC            0x325   /* 开始本地定时录像*/
#define LOG_OPERAT_MINOR_LOCAL_STOP_TIMEREC             0x326   /* 停止本地定时录像*/
#define LOG_OPERAT_MINOR_LOCAL_START_HANDREC            0x327   /* 开始本地手动录像*/
#define LOG_OPERAT_MINOR_LOCAL_STOP_HANDREC             0x328   /* 停止本地手动录像*/
#define LOG_OPERAT_MINOR_DEVICE_ADD                     0x32A   /* 添加设备*/
#define LOG_OPERAT_MINOR_DEVICE_DEL                     0x32B   /* 删除设备*/
#define LOG_OPERAT_MINOR_DEVICE_MODIFY                  0x32C   /* 更改设备*/
#define LOG_OPERAT_MINOR_LOG_CLS                        0x32D   /* 清除日志*/
#define LOG_OPERAT_MINOR_USER_ADD                       0x32E   /* 添加用户*/
#define LOG_OPERAT_MINOR_USER_DEL                       0x32F   /* 删除用户*/
#define LOG_OPERAT_MINOR_USER_MODIFY                    0x330   /* 更改用户*/
#define LOG_OPERAT_MINOR_TIME_MODIFY                    0x331   /* 修改系统时间*/
#define LOG_OPERAT_MINOR_ZONE_MODIFY                    0x332   /* 修改系统时区*/
#define LOG_OPERAT_MINOR_HARDDEFAULT                    0x335   /* 硬件恢复默认 */
#define LOG_OPERAT_MINOR_LOADDEFAULT                    0x336   /* 加载参数出错后恢复默认 */
#define LOG_OPERAT_MINOR_SAVEPARAM                      0x337   /* 保存参数 */
#define LOG_OPERAT_MINOR_DEFAULTPARAM                   0x338   /* 恢复默认参数 */

#define LOG_OPERAT_MINOR_REMOTE_LOGIN                   0x340   /* 远程登录 */

enum SEARCH_DIARY_MARK
{
    SEARCH_DIARY_MARK_TYPE     = 1 << 0, //日志主类型 有效
    SEARCH_DIARY_MARK_TYPE_SUB = 1 << 1, //日志次类型 有效
    SEARCH_DIARY_MARK_CHANNEL  = 1 << 2, //通道号有效
    SEARCH_DIARY_MARK_CARDNUM  = 1 << 3, //板卡号有效
    SEARCH_DIARY_MARK_TIME     = 1 << 4, //时间有效 
};

//集中编码器搜索日志的结构体
typedef struct
{
    int m_nMark;                      //规定那些值有效 见SEARCH_DIARY_MARK
    int m_nType;                      //日志主类型
    int m_nTypeSub;                   //日志次类型 
    int m_nChannel;                   //通道号 对于集中编码器0-255
    VSNETDIARY_NETTIME vsnStratTime;  //开始时间
    VSNETDIARY_NETTIME vsnStopTime;   //结束时间
    char m_szReseved[64];             //保留
} VSNET_SEARCH_DIARY;

//集中编码器搜索日志返回
#define MAXDIARYNUM 256
typedef struct
{
    int m_nMark;                         // 规定那些值有效 见SEARCH_DIARY_MARK
    int m_nChannel;                      // 通道号 对于集中编码器0-255 可算出板卡号
    int m_nType;                         // 日志主类型
    int m_nTypeSub;                      // 日志次类型     
    VSNETDIARY_NETTIME vsnTime;          // 发生时间
    char m_szReseved[12];                // 保留
} VSNET_DIARY_INFO_CONTENT;

typedef struct
{
    int m_nDiaryNum;                     //VSNET_DIARY_INFO_CONTENT有效个数
    VSNET_DIARY_INFO_CONTENT m_vdicInfo[MAXDIARYNUM];
} VSNET_DIARY_INFO;
/*******************************日记搜索定义 完**************************/


/************************************ 88258 END ******************************************/

/*
* 智能识别结构定义，用于智能DVS
* 修改时间：2011-03-23
* 修改人：zhangdw
*/

// 设备行为分析能力
typedef enum
{
    VCA_ABILITY_BKPLATEANALYSIS = (1 << 0),       // 车牌识别(识别做在管理软件上)
    VCA_ABILITY_PLATEANALYSIS = (1 << 1),         // 车牌识别(识别做在前端设备上)
	VCA_ABILITY_INTELLIGENTANALYSIS = (1 << 2),   // 允许智能行为分析(警戒线跨越、区域入侵、区域离开、徘徊)
} ENUM_VCA_ABILITYS;

typedef struct
{
    int ability_type;  // 行为分析能力类型
} VSNET_VCA_ABILITY;

/*
* 智能车牌识别结构定义，用于智能DVS
* 修改时间：2011-03-22
* 修改人：zhangdw
*/
/************************************ 智能车牌 开始 ***************************************/
#ifndef MAX_VCA_PLATERECT_NUM
#define MAX_VCA_PLATERECT_NUM  4     // 车牌分析最多车牌数
#endif

#ifndef MAX_VCA_PLATECAP_NUM
#define MAX_VCA_PLATECAP_NUM  3      // 车牌分析最多抓拍张数
#endif

#ifndef MAX_VCA_PLATERSTR_NUM
#define MAX_VCA_PLATERSTR_NUM 12     // 车牌分析车牌号码 字符长度 
#endif

#ifndef VCA_PLATE_JPGEND
#define VCA_PLATE_JPGEND 0xABABAAB
#endif

typedef struct
{
    short left;         // 车牌信息左上角横坐标
    short right;        // 车牌信息右下角横坐标
    short top;          // 车牌信息左上角纵坐标    
    short bottom;       // 车牌信息右下角纵坐标
} VSNET_VCA_PLATERECT;

typedef struct
{
    float left;         // 分析区域左上角横坐标
    float top;          // 分析区域左上角纵坐标
    float right;        // 分析区域右下角横坐标
    float bottom;       // 分析区域右下角纵坐标
} VSNET_VCA_PLATERECTF;

typedef struct
{
    unsigned int        version;                                // 车牌识别信息版本，0x01-V1.0
    unsigned int        time_stamp;                             // 分析时间戳，以毫秒为单位
    unsigned int        pos_num;                                // 当前帧定位到的车牌数目
    VSNET_VCA_PLATERECT pos_rect[MAX_VCA_PLATERECT_NUM];        // 当前帧定位到的车牌在原始图像中的位置
    unsigned char       recog_num;                              // 识别出的车牌号数目
    unsigned char       reserverd1[3];                          // 保留参数，置为0
    unsigned int        recog_gmttime[MAX_VCA_PLATERECT_NUM];   // 识别到的车牌最早出现的绝对时间，自1970年1月1日 00:00:00 开始的秒数,时区按GMT时区计算
    unsigned char		recog_number[MAX_VCA_PLATERECT_NUM][MAX_VCA_PLATERSTR_NUM];  // 识别出来的车牌字符
    unsigned char		recog_trust[MAX_VCA_PLATERECT_NUM];		// 车牌字符的置信度
    unsigned char       recog_brightness[MAX_VCA_PLATERECT_NUM];// 车牌亮度值1 ~ 255
    unsigned char		recog_color[MAX_VCA_PLATERECT_NUM];		// 车牌颜色 0:蓝底1:黄底2:白底－军牌3:白底－警牌4:黑牌5:未知
    unsigned char       recog_direction[MAX_VCA_PLATERECT_NUM];	// 车牌运动方向 0:未知方向 1:车牌从上到下运动 2:表示车牌从下到上运动
    unsigned char       recog_type[MAX_VCA_PLATERECT_NUM];		// 车牌类型 1:大型汽车号牌 2:小型汽车号牌 16:教练汽车号牌 23:警用汽车号牌 99:未知
    unsigned int        recog_speeds[MAX_VCA_PLATERECT_NUM];	// 车牌运动速度
	unsigned char       recog_carcolor[MAX_VCA_PLATERECT_NUM];	// 车身颜色 0:白色 1:银灰 2:黄色 3:粉色 4:红色 5:紫色 6:绿色 7:蓝色 8:棕色 9:黑色 99:其他 255: 未开启识别
} VSNET_VCA_PLATEINFO;

typedef struct
{
    unsigned int    version;                                // 车牌识别抓拍信息版本，0x01-V1.0
    unsigned char   recog_num;                              // 识别出的车牌号数目
    unsigned char   cap_num;                                // 识别抓拍的张数
    unsigned char   reserverd1[2];                          // 保留参数，置为0
    unsigned int    recog_gmttime[MAX_VCA_PLATERECT_NUM];   // 识别到的车牌最早出现的绝对时间，自1970年1月1日 00:00:00 开始的秒数,时区按GMT时区计算
    unsigned char   recog_number[MAX_VCA_PLATERECT_NUM][MAX_VCA_PLATERSTR_NUM];  // 识别出来的车牌字符
    unsigned char   recog_trust[MAX_VCA_PLATERECT_NUM];		// 车牌字符的置信度
    unsigned char   recog_brightness[MAX_VCA_PLATERECT_NUM];// 车牌亮度值1 ~ 255
    unsigned char   recog_color[MAX_VCA_PLATERECT_NUM];		// 车牌颜色 0:蓝底1:黄底2:白底－军牌3:白底－警牌4:黑牌5:未知
    unsigned char   recog_direction[MAX_VCA_PLATERECT_NUM];	// 车牌运动方向 0:未知方向 1:车牌从上到下运动 2:表示车牌从下到上运动
    unsigned char   recog_type[MAX_VCA_PLATERECT_NUM];		// 车牌类型 1:大型汽车号牌 2:小型汽车号牌 16:教练汽车号牌 23:警用汽车号牌 99:未知
    unsigned int    recog_speeds[MAX_VCA_PLATERECT_NUM];	// 车牌运动速度
	unsigned char   recog_carcolor[MAX_VCA_PLATERECT_NUM];	// 车身颜色  0:白色 1:银灰 2:黄色 3:粉色 4:红色 5:紫色 6:绿色 7:蓝色 8:棕色 9:黑色 99:其他 255: 未开启识别
} VSNET_VCA_PLATECAP;

typedef struct
{
    unsigned int        cap_gmttime;                        // 抓拍绝对时间，自1970年1月1日 00:00:00 开始的秒数,时区按GMT时区计算
    VSNET_VCA_PLATERECT cap_pos[MAX_VCA_PLATERECT_NUM];     // 识别到的车牌在抓拍图片中的位置
    unsigned int        cap_size;                           // 抓拍的数据大小，以字节为单位，不包含车牌定位信息大小
} VSNET_VCA_PLATEDATA;

// 车牌识别-车牌大小
typedef struct
{
    int plate_w_min;     // 车牌最小宽度，以像素为单位
    int plate_w_max;     // 车牌最大宽度，以像素为单位
} VSNET_VCA_PLATEWIDTH;

// 车牌识别默认省份
typedef struct
{
	int trust_thresh;    //信度的阈值低于该值 用默认省份代替

    // 默认省份:
    // 云36，京37，冀38，吉39，宁40，川41，新42，晋43，桂44，沪45，津46，浙47，
    // 渝48，湘49，琼50，甘51，皖52，粤53，苏54，蒙55，藏56，豫57，贵58，赣59，
    // 辽60，鄂61，闽62，陕63，青64，鲁65，黑66
    char plate_chn_default[MAX_VCA_PLATERSTR_NUM];//默认省份字符	
} VSNET_VCA_PLATECHNDEFAULT;

// 车牌识别汉字掩码
typedef struct
{
    unsigned char plate_chn_mask[64];
    // 按位表示中文汉字识别的掩码（提高字符识别的精度），
    // 1-屏蔽该汉字识别，0-开始该汉字识别，
    // 汉字对应掩码顺序如下（从高到底）：
    // 云 京 冀 吉 宁 川 新 晋 桂 沪 津 浙 渝 湘 琼 甘 皖 粤 苏 蒙 藏 豫 贵 赣 辽 鄂 闽 陕 青 鲁 黑
    // （目前只有31个省份汉字，其余位保留以后扩展更多汉字）
} VSNET_VCA_PLATECHNMASK;

// 车牌识别叠加模式
typedef enum
{
    VCA_PLATEDRAW_RECT = 0x01,         // 编码叠加车牌识别目标区域
    VCA_PLATEDRAW_TARGET = 0x02,       // 编码叠加车牌定位框
    VCA_PLATEDRAW_CAPRECT = 0x04,      // 抓拍叠加车牌识别目标区域
    VCA_PLATEDRAW_CAPTARGET = 0x08     // 抓拍叠加车牌定位框
} ENUM_VCA_PLATEDRAW;

// 车牌识别抓拍参数
typedef enum
{
    VCA_PLATECAPMODE_QUALITY = 0,     // 抓拍方式，最清晰的一张
    VCA_PLATECAPMODE_LAST = 1         // 抓拍方式，最后的一张
} ENUM_VCA_PLATECAPMODE;

// 车牌图片质量设置
typedef struct
{
    unsigned short cap_quality;       // 抓拍图像压缩率，取值1~100，数值越高表示质量越好
    unsigned short cap_num;           // 抓拍的图像张数，取值范围1~3
    unsigned short cap_mode;          // 抓拍方式，0-最清晰的一张，1-最后的一张
    unsigned short cap_store;         // 抓拍图片前端存储选项，0-不存储，1-存储
} VSNET_VCA_PLATECAPPARAM;

// 车牌图片车牌字符叠加设置 画框请在车牌识别叠加模式中设置
typedef struct
{
    unsigned char bEnable;            // 是否启用jpg图片车牌号码叠加
    unsigned char reserverd[3];       // 保留
    float         jpgosd_scale;       // 字符显示比例0.5-2.0
    float         jpgosd_x;           // 叠加车牌的x坐标
    float         jpgosd_y;           // 叠加车牌的y坐标
} VSNET_VCA_PLATEJPGOSD;

// 车牌模式
typedef struct
{
	int plate_draw;                   // 识别叠加框 详细见ENUM_VCA_PLATEDRAW
    int deskew_flag;                  // 车牌识别是否对车牌做倾斜校正
} VSNET_VCA_PLATEMODE;

// 车牌版本
typedef struct
{
    char   m_szDspVersion[16];          //DSP版本
    char   m_szDspDate[16];             //DSP日期
    char   m_szPlateVersion[16];        //算法版本
    char   m_szPlateDate[16];           //算法日期
} VSNET_VCA_PLATEVERSION;

/************************************ 智能车牌 结束 ***************************************/

/************************************ SXSD START ******************************************/
#define SXSD_PARAM_MEB_NUM           11
#define SXSD_PARAM_DATA_NUM          7

typedef enum
{
    SXSD_PARAM_METHANE_L = 0,        // 低浓度甲烷     0-4%         x.xx
    SXSD_PARAM_OXYGEN,               // 氧气           0-25%        xx.x0
    SXSD_PARAM_CARBONM,              // 一氧化碳       0-1000ppm    xxxx
    SXSD_PARAM_CARBOND,              // 二氧化碳       0-5%         x.xx
    SXSD_PARAM_TEMPERAT,             // 温度（单）     -10℃-+70℃  xx.x0
    SXSD_PARAM_WATERPRESS,           // 水压           0-9999Pa     xxxx(0.1-999.9KPa  xxx.x0  0.01-99.99MPa  xx.xx)
    SXSD_PARAM_WINDSPEED,            // 风速           0.4—15m/s   xx.x0
    SXSD_PARAM_HYDROGEN,             // 硫化氢         0-100ppm     xxxx
    SXSD_PARAM_WATERLINE,            // 水位           暂时不用
    SXSD_PARAM_METHANE_H,            // 高浓度甲烷     0%-100%      xxx.x0
    SXSD_PARAM_HUMIDITY              // 湿度           0-100%       xxx
} ENUM_SXSD_PARAM;

typedef struct
{
    unsigned short   m_nDataState;   // 数据状态(用于实时数据传输)(0.无数据 1.正常 2.报警 3.异常)
    unsigned short   m_nReserverd;   // 对于SXSD_PARAM_WATERLIN 用来表示(0、普通 1、KP 2、MP)；其他占时保留
    int              m_nEvrmtValue;  // 环境数据值 (带小数位 真值数据x100 注:只有一位小数用0补齐，显示时保留真值格式)
    int              m_nAlarmData;   // 报警浓度 下标由ENUM_SXSD_PARAM指定
	int              m_nTypeEvrmt;   // 环境数据值标示value(0 - 6) 共7个数据（现在每数据有7种类型）
} SXSD_DATA_PARAM;

// 用于SXSD实时传输数据
typedef struct
{
    char             m_cAddressDis[20];                       // 采集器地点(包含仓内、仓外)
	int              m_nValueType[SXSD_PARAM_MEB_NUM];        // 对应m_pEvrmtValue的类型(值由 ENUM_SXSD_PARAM指定)
    SXSD_DATA_PARAM  m_pEvrmtValue[SXSD_PARAM_MEB_NUM][SXSD_PARAM_DATA_NUM];  // 数据值 （共11组）
} SXSD_REAL_DATA_TEAP;

typedef struct
{
    SXSD_REAL_DATA_TEAP m_pRealData[2];                       //分别表示两组数据（仓内、仓外）
} VSNET_SXSD_REAL_DATA;

// 用于SXSD的报警阀值设置
typedef struct
{
    char             m_cAddressDis[20];                       // 采集器地点(包含仓内、仓外)
    unsigned         m_nXcoordinate;                          // OSD叠加垂直坐标值
    unsigned         m_nYcoordinate;                          // OSD叠加水平坐标值
	int              m_nValueType[SXSD_PARAM_MEB_NUM];        // OSD叠加类型(0-6) 
	                                                          // (如：m_nOsdOrder[1]=SXSD_PARAM_OXYGEN,m_nValueType[1]=1,
	                                                          // 就说明OSD位置2的模拟量为 氧气2)
    int              m_nOsdOrder[SXSD_PARAM_MEB_NUM];         // OSD叠加顺序 值为ENUM_SXSD_PARAM指定 数组中无记录为不显示
    int              m_nAlarmValue[SXSD_PARAM_MEB_NUM];       // 报警范围值  下标由ENUM_SXSD_PARAM指定
	int              m_nAlarmEnable[SXSD_PARAM_MEB_NUM];      // 报警有效标记 下标由ENUM_SXSD_PARAM指定（-1未收到数据，0传感器未链接，1传感器正常）
} SXSD_TEMP_EVRMTPARAM;

// 用于SXSD的参数设置
typedef struct
{
    SXSD_TEMP_EVRMTPARAM m_pEventParam[2];                    // 分别表示两组数据（仓内、仓外）
} VSNET_SXSD_EVRMTPARAM;
/************************************* SXSD ENDS ******************************************/

/************************************* HL-SAMMY STARTS ************************************/
// HL-SAMMY
typedef struct
{
    int m_nVideoMode;    // video mode 0,single 1,mul
    int m_nChannel;      // channels
} VSNET_ROUNDVIDEO_OUT;
/************************************* HL-SAMMY ENDS **************************************/

// 人车流量统计
typedef struct
{
    int m_nVehicle;      // 车计数
    int m_nPedestrian;   // 人计数
} VSNET_SMART_TARGETCOUNT;

// 电流环信息
typedef struct
{    
    char  m_flag[8];         // 是否超出阀值
    char  m_dlh_name[8][56]; // 电流环名字
    char  m_dlh_unit[8][16]; // 电流环单位
    float m_dlh_value[8];    // 电流环数值 
    int  m_dlh_precision[8]; // 精度
} VSNET_CURRENTLOOP;        

// 报警输入信息
typedef struct
{
    int  m_channel;
    int m_alarmin_states;    // 报警输入状态
    char m_alarmin_name[32]; // 探头名称
} VSNET_ALARMIN;

// WHYB_D球机参数
typedef struct
{
	int m_ptz_horizontal_angle;	// 水平角度的100倍
	int m_ptz_vertical_angle;	// 垂直角度的100倍
	int m_ptz_multiple;			// 变倍倍数
	int m_reverse;				// 保留
} VSNETPTZ_WHYB;

//SXKD 回传JPG 
typedef struct
{
	int           m_busnum;            //车辆编号 0~255
	int           m_chno;              //摄像机通道号
	int           m_jpegsize;          //jpeg长度
	int           m_year;
	int           m_mon;
	int           m_day;
	int           m_hour;
	int           m_min;
	int           m_sec;
	unsigned char m_jpgbuff[1024*200]; //JPG数据
}VSNET_SXKD_JPEG;
				
/************************************* NVR begin ******************************************/
#define                 MAX_DEV_SEARCH_NUM          100

typedef struct
{
    char            sername[24];
    unsigned char   mac[8];
    char            ip[20];         // ip
    char            mask[16];       // submask
    char            gw[16];         // gateway
    char            dns[16];        // DNS
    char            multiip[16];
    unsigned short  wPortWeb, wPortSer, wPortMulti;
    unsigned short  channel;
    unsigned short  devtype;
    unsigned short  reserve;
} VSNETDEVINFO;

// the device list of NVR dev search
typedef struct
{
    int             m_total;                      // the number of device
    VSNETDEVINFO    m_puinfo[MAX_DEV_SEARCH_NUM]; // info of each device
} VSNETNVRDEVSEARCHINFO;

typedef struct
{
    char            m_sername[32];      // server name
    char            m_serip[20];        // server ip address
    unsigned short  m_serport;          // server port
    unsigned short  m_channel;          // the channel of server to be connected
    unsigned short  m_transtype;        // the media transport type tcp/udp/multi
    unsigned short  m_chlinkstate;      // channel link state
    unsigned short  m_imgheight;        // image height
    unsigned short  m_imgwidth;         // image width
    char            m_username[20];     // server user name
    char            m_passwd[20];       // server password
    int             m_reserved1;        //reserved1
    int             m_reserved2;        //reserved2
} VSNETNVRDECCHINFO;

typedef struct
{
    int                 m_enable;       // channel been used ?
    int                 m_maxsize;      // max video format
    VSNETNVRDECCHINFO   m_chinfo;       // channel info
} VSNETNVRDECCHSTATE;

typedef struct
{
	VSNETNVRDECCHSTATE 	m_channel[VSNET_DVR_MAXCH];   	//channel info array
}VSNETNVRDECCHANSTATE;

typedef struct
{
    int                 m_num;                          // number in data
    char                m_chname[VSNET_DVR_MAXCH][20];  // name fo each channel
    int                 m_chimgsize[VSNET_DVR_MAXCH];   // replay channel image size 0:NO 1:D1 3:720P 7:1080P
} VSNETNVRGUINOTIFYNODECABILITY;

typedef struct
{
    int                 m_enable;       // pu time synchronous enable? 0 disable, 1 everyday 00:00
} VSNETNVRPUTIMESYN;

/* usb连接状态 */
typedef struct
{
    int m_ustate;            // u盘连接状态，  	1:已连接，0:未连接
    int m_mstate;            // 鼠标连接状态， 	1:已连接，0:未连接
    int m_estate;            // esata连接状态，	1:已连接，0:未连接
	int m_reserve[2];		 // 保留位
}VSNET_NVR_USBSTATE_S;

/************************************* NVR end ********************************************/

/************************************* SCDW begin ******************************************/
typedef struct
{
	char m_code[32];		// 编码长度32位			
}VSNETINVITECHANAL_INFO;

typedef struct
{
    int    				     m_enable[32];        // 通道使能,32个通道
    VSNETINVITECHANAL_INFO   m_ch_info[32];	 	  // 32个通道编码
}VSNETINVITECHANAL;
/************************************* SCDW end ********************************************/

/************************************* ITS begin ******************************************/
//最大车道号
#define MAX_LANE_NUM            10

//最大车道线数量
#define MAX_LANE_LINE_NUM       (MAX_LANE_NUM + 1)

//最大触发类型数量 线圈*2  进入/离开2种状态
#define MAX_LANE_COIL_NUM       3
//#define LANE_COIL_TRIGG_NUM     (MAX_LANE_COIL_NUM*2)

//一个车道中，相邻两个线圈间的间隔数
#define MAX_DISTANCE_NUM        (MAX_LANE_COIL_NUM-1)

//每个车道的最大虚拟线圈个数
#define MAX_VCOILS_NUM_IN_LANE  1

//卡口编号长度
#define MAX_BAYONETID_SIZE      12

//最大IO输入个数
#define MAX_IOIN_NUM            4

//最大IO输出个数
#define MAX_IOOUT_NUM           4

//最大红绿灯组数
#define MAX_TRFL_NUM            MAX_LANE_NUM

// 每个线圈最多拥有的状态 进入/离开
#define MAX_COIL_STATE          2

// 图片对应的类型
#define CAP_TYPE_MANUAL            (1<<0)       /* 手动抓拍 */
#define CAP_TYPE_OVERSPEED         (1<<1)       /* 超速抓拍 */
#define CAP_TYPE_TRAFFICLIGHT      (1<<2)       /* 闯红灯抓拍 */
#define CAP_TYPE_BAYONET           (1<<3)       /* 卡口抓拍 */
#define CAP_TYPE_CAPTEST           (1<<4)       /* 抓拍测试 */
#define CAP_TYPE_TRAFFICLIGHT_L    (1<<5)       /*左转闯红灯*/
#define CAP_TYPE_TRAFFICLIGHT_R    (1<<6)       /*右转闯红灯*/
#define CAP_TYPE_CHANGE_LANE       (1<<7)       /*变道*/
#define CAP_TYPE_VIOLATION_LINE    (1<<8)       /*压线*/
#define CAP_TYPE_RETROGRADE        (1<<9)       /*逆行*/
#define CAP_TYPE_WRONG_LANE        (1<<10)      /*不按规定车道行驶*/
#define CAP_TYPE_LLLEGAL_TURN      (1<<11)      /*掉头违章*/
#define CAP_TYPE_YELLOWLIGHT_L     (1<<12)      /*左转闯黄灯*/
#define CAP_TYPE_YELLOWLIGHT       (1<<13)      /*直行闯黄灯*/
#define CAP_TYPE_YELLOWLIGHT_R     (1<<14)      /*右转闯黄灯*/


//不同业务模式下，不同线圈数的抓拍策略
typedef enum
{
    VS_SCHEME_BAYONET_MANUAL        = 100,  //卡口用户自定义
    VS_SCHEME_BAYONET_1C_1I         = 111,  //卡口单线圈入1抓
    VS_SCHEME_BAYONET_2C_2I         = 121,  //卡口双线圈入2抓
    VS_SCHEME_BAYONET_3C_3I         = 131,  //卡口三线圈入3抓
    VS_BAYONET_RADAR_ARRIVE_IN      = 141,  //卡口雷达触发，来车进入雷达区域抓拍
    VS_BAYONET_RADAR_ARRIVE_OUT     = 142,  //卡口雷达触发，来车离开雷达区域抓拍
    VS_BAYONET_RADAR_LEAVE_IN       = 143,  //卡口雷达触发，去车进入雷达区域抓拍
    VS_BAYONET_RADAR_LEAVE_OUT      = 144,  //卡口雷达触发，去车离开雷达区域抓拍

    VS_SCHEME_EP_MANUAL            = 200,  //电警用户自定义
    VS_SCHEME_EP_2C_1I2I2O         = 221,  //电警双线圈入1入2出2抓

    VS_SCHEME_BAYEP_MANUAL          = 300,  //卡口电警用户自定义
    VS_SCHEME_BAYEP_2C_1I2I2O       = 321,  //卡口电警双线圈入1入2出2抓
} VS_CAP_SCHEME;

typedef enum
{
    VS_CAP_BUSINESS_BAYONET=1,     //卡口模式
    VS_CAP_BUSINESS_EPOLICE,       //电警模式
    VS_CAP_BUSINESS_BAYONETEP      //卡口式电警模式
} VS_CAP_BUSINESS_E;

typedef enum
{
    VS_CAP_TRIG_TYPE_VD=1,         //车检器触发
    VS_CAP_TRIG_TYPE_VC,           //虚拟线圈触发
    VS_CAP_TRIG_TYPE_SIO,          //单IO触发
    VS_CAP_TRIG_TYPE_RADAR,        //雷达触发
    VS_CAP_TRIG_TYPE_MANUAL,       //手动触发
    VS_CAP_TRIG_TYPE_MIX,          //混合触发
} VS_CAP_TRIG_TYPE_E;

typedef enum
{
    VS_VDETECTOR_JIMU1,             //极目1车检器 每车道1线圈
    VS_VDETECTOR_JIMU2,             //极目2车检器 单车道2线圈
    VS_VDETECTOR_JIMU3,             //极目3车检器 单车道3线圈
    VS_VDETECTOR_JIMU2A,            //极目2a车检器，三车道，一线圈
    VS_VDETECTOR_JIMU3A,            //极目3a车检器，三车道，两线圈
    VS_VDETECTOR_MAXNUM            //支持车检器数量
} VS_VDETECTOR_TYPE_E;


typedef enum
{
    VS_RADAR_APACHE2,              // Apache II型雷达
	VS_RADAR_CSRIN,                // CSR-I N型雷达
    VS_RADAR_MAXNUM,
}VS_RADAR_TYPE_E;

#ifndef MAX_RADAR_STATE
#define MAX_RADAR_STATE 4
#endif
typedef enum
{
    VS_TRADAR_ARRIVE_IN,   //来车进入雷达区域
    VS_TRADAR_ARRIVE_OUT,  //来车离开雷达区域
    VS_TRADAR_LEAVE_IN,    //去车进入雷达区域
    VS_TRADAR_LEAVE_OUT,   //去车离开雷达区域
}VS_TRADAR_STATE_E;

typedef enum
{
//    TCOIL_NONE,         //无效
    VS_TCOIL_IN,           //进线圈
    VS_TCOIL_OUT           //出线圈
} VS_TCOIL_STAT_E;

typedef enum
{
    //TLIGHT_NONE,        //无效
    VS_TLIGHT_GREEN,        //绿灯
    VS_TLIGHT_RED           //红灯
} VS_TLIGHT_STATE_E;

// IO输入所接类型，需先配置相应的参数，然后再设置IO输入类型
typedef enum
{
    VS_IO_TYPE_NONE,              // 无效
    VS_IO_TYPE_COIL,              // 线圈
    VS_IO_TYPE_TRAFFICNIGHT,      // 红绿灯
    VS_IO_TYPE_SYNSIG             // 交流同步信号
} VS_CAP_IOIN_TYPE_E;

//电压类型 
typedef enum
{
    VS_VOLTAGE_LOW,        //低电平
    VS_VOLTAGE_HIGH,       //高电平
    VS_VOLTAGE_PULSE,      //脉冲
} VS_VOLTAGE_E;

/**
 * @brief IO输入触发方式
 */
typedef enum
{
    VS_IO_EDGE_NONE       = 0,    /* 不触发 */
    VS_IO_EDGE_RISING     = 1,    /* 上升沿 */
    VS_IO_EDGE_DOWN       = 2,    /* 下降沿 */
    VS_IO_EDGE_RIDO       = 3,    /* 上升沿及下降沿 */
} VS_IO_EDGE_E;

typedef enum
{
    VS_AC_SYNC_NONE,           // 不同步
    VS_AC_SYNC_POWER,          // 电源同步
    VS_AC_SYNC_IO              // IO输入信号同步
} VS_AC_SYNC_TYPE_E;

typedef enum
{
    VS_FILL_LIGHT_STROBE=1,    /* 频闪灯 */
    VS_FILL_LIGHT_BURST,       /* 爆闪灯 */
} VS_FILL_LIGHT_E;

#define VS_MAX_COIL_STATE          2
//抓拍机OSD叠加大小
#define VS_OSD_NUM         14

typedef struct
{
    int             strobeMode;         //频闪灯工作模式 : 0:关闭 1:常开 2:定时 3:自动
    int             brightThreshold;    //频闪灯闪烁亮度阈值 : 范围 1~30
    int             StartHour;          //频闪灯闪烁定时参数-开始时间(时)
    int             StartMinute;        //频闪灯闪烁定时参数-开始时间(分)    
    int             EndHour;            //频闪灯闪烁定时参数-开始时间(时)
    int             EndMinute;          //频闪灯闪烁定时参数-开始时间(分)
}VSNETSTROBEPARAM;                      //单个频闪灯参数

typedef struct
{
    VSNETSTROBEPARAM m_strobe[MAX_IOOUT_NUM];   //设备频闪灯参数
} VSNETSTROBELIGHTCFG;                          //频闪灯工作模式

typedef struct
{
    int     flashtlightype;     //闪光灯类型 : 1-频闪灯;2-爆闪灯
    int     flashrate;          //闪光频率 : N次/秒(仅在爆闪灯模式可设)
    int     flashmode;          //闪烁模式 : 默认闪烁，不可设置
    int     defaultlevel;       //IO默认电平 : 0-低电平/1-高电平
    int     effectlevel;        //IO起效电平 : 0-低电平/1-高电平/2-脉冲
    int     multiplier;         //倍频 : 1~15
    int     dutyratio;          //占空比 : 0~40
    int     effectdelay;        //IO起效延迟时间 : 0~40000μS
    int     effectkeep;         //IO起效持续时间 : 
} VSNETFLPARAM;                 //闪光灯参数

typedef struct
{
    VSNETFLPARAM  m_ioouts[MAX_IOOUT_NUM];  //io输出(闪光灯)    
} VSNETFLASHLIGHTCFG;                       //闪光灯配置参数

typedef struct
{
    int      syntype;       //是否电源同步 : 0-不同步;1-电源同步;2-IO同步
    int      ioins;         //可选IO输入号(按位、只读):0x01-IO1;0x02-IO2;0x04-IO3;0X08-IO4
    int      signalin;      //信号输入口号 : 1~4（仅在选中IO同步时可以设置）
    int      phase;         //同步信号相位差 : 0~360
} VSNETSIGNALSYNCFG;        //信号灯同步配置参数

typedef struct
{
	unsigned char  m_enable;          //是否开启相应类型的使能状态
    unsigned char  m_type;            //叠加类型
    unsigned char  m_res[2];          //保留
    unsigned int   m_posx;            //起始坐标X
    unsigned int   m_posy;            //起始坐标Y
} VSNETOSDSTYLE;              //叠加字符的样式

typedef struct
{
	unsigned char  m_osdEnable;       //osd使能标志
    unsigned char  m_osdMode;         //叠加方式 0:连续叠加 1:分行叠加 2:高级叠加
    unsigned char  m_osdColorR;       //颜色R
    unsigned char  m_osdColorG;       //颜色G
    unsigned char  m_osdColorB;       //颜色B
	unsigned char  m_backColorR;      //颜色R
    unsigned char  m_backColorG;      //颜色G
    unsigned char  m_backColorB;      //颜色B
    unsigned char  m_osdSize;         //OSD大小 2、4、6
    unsigned char  m_res[3];
    
    unsigned int   m_timeFormat;                              //时间格式
    unsigned char  m_locaStr[VSNET_CAPTURE_OSDSTR_LENTH];     //地点
    unsigned char  m_directStr[VSNET_CAPTURE_OSDSTR_LENTH];   //方向
    unsigned char  m_usrStr1[VSNET_CAPTURE_OSDSTR_LENTH];     //用户自定义1
    unsigned char  m_usrStr2[VSNET_CAPTURE_OSDSTR_LENTH];     //用户自定义1
    VSNETOSDSTYLE m_osdinfo[VS_OSD_NUM];
} VSNETCAPJPEGOSD, VSNETH264OSD;        //字符叠加参数

typedef struct
{
    char    capnum;         //抓拍张数1~5，默认1
    char    capinterval;    //抓拍帧间隔: 0~15，默认0(自适应)
    char    reserved[2];    //保留
} VSNETMANUALCAPJPEGCFG;    //手动抓拍JPEG配置参数

typedef struct
{
    int                     enftpjpeg;      //使能上传抓拍图片到FTP
    int                     quality;        //抓拍质量
	char                    tollgateid[32]; //卡口编号(12个字符)
    char                    deviceid[32];    //设备编号(3个字符)
    VSNETMANUALCAPJPEGCFG   manualcap;
} VSNETCAPBASICPARAM;                       //抓拍基本参数

typedef struct
{
    int    m_capmode;       //业务模式: 1-卡口模式;2-电警模式;3-卡口电警模式
    int    m_triggermode;   //触发模式: 1-车检器(电警/卡口电警业务模式仅支持车检器触发);2-视频;3-单IO;4-雷达触发
    int    m_device_type;  //型号，车检器型号VDETECTOR_TYPE_E,雷达型号RADAR_TYPE_E
} VSNETCAPMODECFG;          //抓拍模式配置参数

typedef struct
{
    short   m_x;        //x坐标
    short   m_y;        //y坐标
    short   m_width;    //虚拟线圈宽
    short   m_height;   //虚拟线圈高
} VSNETVCOILRECT;       //虚拟线圈参数

typedef struct
{
    int     m_enable;       //进入/离开线圈是否抓拍
    int     m_capnum;       //抓拍张数
    int     m_interval;     //多张抓拍时的抓拍帧间隔
} VSNETCOILTRIGGER;         //线圈触发参数

typedef struct
{
    int                 m_ioinid;               //触发输入IO编号 [1-4]
    VSNETCOILTRIGGER    m_ct[MAX_COIL_STATE];   //线圈触发参数:m_ct[0]-进入;m_ct[1]-离开
} VSNETSIOCOIL;                                 //单IO触发线圈参数

typedef struct
{    
    int             m_assfl;    //关联闪光灯编号: 0-不关联; 闪关灯1/2/3/4
    VSNETSIOCOIL    m_siocoil;  //单IO触发线圈参数
} VSNETSIOLANE;                 //单IO触发车道参数

typedef struct
{
    int             m_iois;                     //可选的触发IO(按位、只读):0x01-IO1;0x02-IO2;0x04-IO3;0X08-IO4
    VSNETSIOLANE    m_siolane[MAX_LANE_NUM];    //车道参数
} VSNETIOMODECFG;                               //单IO模式配置参数

typedef struct {
    
    unsigned short  m_vcoil_enable;         // 0-不使能；1-使能
	unsigned short	m_speed_enable;         // 测速使能
    unsigned short  m_direction;            // 运动方向[0,359], 暂时不使用该参数
    VSNETVCOILRECT  m_rect;                 // 虚拟线圈坐标

    //白天模式参数
	unsigned short   m_day_sensitivity;	    // 范围[1,100]，默认70，阴影面积占总面积的最小阈值
    unsigned short   m_day_R;			    // 范围[1,255]，默认20，两像素相似的度量阈值，单位灰度级
	unsigned short   m_day_phi;			    // 范围[1,20]，默认5，背景更新速度，每隔phi帧更新一次    
	unsigned short  m_day_time_delay;	    // 大于等于1[1,400]，默认5，事件输出后的延迟，单位帧
} VSNETCOILREGIONPRM;


typedef struct
{
    int                 m_offset;           //夜间提前触发偏移
    VSNETCOILREGIONPRM  m_region_param;	    //检测区域高级参数
    VSNETCOILTRIGGER    m_ct;               //虚拟线圈没有进入/离开之分
} VSNETVCOIL;                               //虚拟线圈参数

typedef struct
{
    int              m_viewable;   //是否显示虚拟线圈: 0-否;1-是
    int              m_assfl;      //关联闪光灯编号 
    int              m_vccount;    //当前车道拥有的虚拟线圈个数(只读): 目前固定为1
    VSNETVCOIL       m_vcs[MAX_VCOILS_NUM_IN_LANE];      //虚拟线圈参数
} VSNETVCOILLANE;                   //视频触发模式车道参数

typedef struct
{
	double m_x;             //x坐标
	double m_y;             //y坐标
}VSNET_TRIGGERPOINT;

typedef struct 
{
	VSNET_TRIGGERPOINT      m_region[4];       //车道平面上的标定矩形的四个顶点在图像中的像素位置
    int                     m_reg_width;        //车道平面上的标定矩形的实际宽度，单位为米(m)，范围[1,100]，默认
    int                     m_reg_height;       //车道平面上的标定矩形的实际高度，单位为米(m)，范围[1,100]，默认10
} VSNET_TRIGGERALG;

typedef struct
{     
    short            m_dawn_start;		                // 黎明开始时间
	short            m_dawn_end;	                    // 黎明结束时间
	short            m_dusk_start;                      // 黄昏开始时间
	short            m_dusk_end;                        // 黄昏结束时间
	short            m_regions_max;	                    // 可设置的最大线圈数
	short            m_regions_num;	                    // 当前使用的线圈数
    VSNETVCOILLANE   m_vclane[MAX_LANE_NUM];            // 虚拟线圈车道参数
    VSNET_TRIGGERALG m_vcalg;                           // 测速区域参数
} VSNETVIDEOMODECFG;                                    // 视频触发模式配置参数

typedef struct
{
    int                 m_coil_width;           //线圈宽度
    VSNETCOILTRIGGER    m_ct[MAX_COIL_STATE];   //线圈触发参数
} VSNETVDETECTORCOILS;                          //车检器触发线圈参数

typedef struct
{
    int                     m_assfl;                        //关联闪光灯 [1-4]
    int                     m_asstraffic;                   //关联红绿灯 [1-4]
    int                     m_bcaptlight;                   //是否开启红绿灯抓拍
    int                     m_bcap_ospeed;                  //是否开启超速抓拍
    VS_CAP_SCHEME           m_cap_scheme;                   //抓拍方案
    int                     m_vehicle_mins;                 //最低限速
    int                     m_vehicle_maxs;                 //最高限速
    int                     m_coil_num;                     //车道线圈数量
    int                     m_dsize[MAX_DISTANCE_NUM];      //相邻线圈距离(cm)，0表示1,2距离，1表示2,3距离
    VSNETVDETECTORCOILS     m_lane_coils[MAX_LANE_COIL_NUM];//线圈触发参数
} VSNETCAPLANE;                                             //车检器触发抓拍车道参数

typedef struct
{      
    int             m_cap_num;                  //抓拍张数
    int             m_cap_interval;             //抓拍帧间隔
    VSNETCAPLANE    m_vdlane[MAX_LANE_NUM];     //车检器车道参数
} VSNETVEDETECTMODECFG;                         //车检器触发模式配置参数

typedef struct
{    
    int     m_ioid; //红绿灯IO输入号: 1~4
} VSNETTRFLPARAM;   //红绿灯参数

typedef struct
{
    int             m_ioins;                //红绿灯可选的IO输入(按位、只读):0x01-IO1;0x02-IO2;0x04-IO3;0X08-IO4
    VSNETTRFLPARAM  m_trfls[MAX_TRFL_NUM];  //红绿灯组     
} VSNETTRAFFICLIGHTCFG;                     //红绿灯配置参数

typedef struct
{
    int iotype;     //IO输入类型: 0-无效;1-线圈;2-红绿灯;3:交流同步信号
    int state;      //触发方式(根据输入类型不同而不同)
} VSNETIOINPARAM;   //单个IO输入参数

typedef struct
{
    VSNETIOINPARAM m_ioins[MAX_IOIN_NUM];   //IO输入
} VSNETIOCFG;                               //IO输入配置

typedef struct
{
    int m_count;   //IO输入总数
} VSNET_IOINPUTCOUNT;

typedef struct
{
    int    type;                //0-不使能,1-黑名单,2-白名单
    char   blacklist[10][16];   //黑名单IP地址列表，最多为10个，点分十进制形式字符串
    char   whitelist[10][16];   //白名单IP地址列表，最多为10个，点分十进制形式字符串
} VSNETIPFILTERCFG;             //IP地址过滤参数

typedef struct{
    int                     m_timezone;         //timezone
    int                     m_year;             //year
    char                    m_month;            //month
    char                    m_day;              //day
    char                    m_hour;             //hour
    char                    m_minute;           //minute
    char                    m_second;           //second
    char                    m_received[3];		//reserved
}VSNETLOG_NETTIME;          //日志时间信息

typedef struct
{
    int                 m_nlogtype;                  //检索的日志类型:0-所有;1-报警日志;2-异常日志;3-操作日志
    int                 m_nsearchtype;               //过滤类型：0-不过滤;1-按时间;2-按关键字
    char                m_szkeyword[20];             //检索关键字
    VSNETLOG_NETTIME    m_vsnStratTime;              //开始时间: 如果不考虑时间，就清零
    VSNETLOG_NETTIME    m_vsnStopTime;               //结束时间
    char                m_bdownload;                 //区分是下载还是搜索
    char                m_szReseved[63];             //保留
} VSNETLOGSEARCH;                                    //日志检索条件信息

typedef struct
{
    int                 m_log_num;          //日志序号
    int                 m_log_type;         //日志类型:1-报警日志;2-异常日志;3-操作日志
    VSNETLOG_NETTIME    m_log_time;         //日志时间
    char    	        m_log_event[200];   //转化后的事件
} VSNETLOGINFO;                             //检索日志结果

typedef struct
{
    char                pStrFPGAVer[50];       // FPGA Version
    char                pStrFPGABuildTime[50]; // FPGA Compile Time
}  VSNETFPGAVERSION;                           // FPGA版本信息

typedef struct
{
    char                pStrDSPVer[50];       // DSP Version
    char                pStrDSPBuildTime[50]; // DSP Compile Time
}  VSNETDSPVERSION;                           // DSP版本信息

typedef struct
{
    int                 m_enable_ftp;      // label of FTP upload(reserved)
    char                m_remote_IP[32];   // IP address
    unsigned short      m_remote_port;     // port
    char                m_linkstatus;      // FTP link state
    char                m_reserved;        //reserved for alignment
    char                m_ftp_user[40];    // Ftp username
    char                m_ftp_pwd[40];     // Ftp password
    char                m_ftp_path[40];    // Ftp path
} VSNETITSFTPINFO;                         // 抓拍机FTP参数

typedef struct
{
    int filesystem[8];  //磁盘文件系统类型
    int reserved[8];    //保留
} VSNETITSFILESYSTEM;   //抓拍机文件系统参数

/*************************Capture parameter ********************************/
typedef struct
{
    int              m_capDayshtspd;        // shutter speed 0~255
    int              m_capNightshtspd;      // shutter speed 0~255    
    int              m_capAwb;              // balance mode 0:auto 1:sunny day 2:cloudy day 3:sodium lamp
    int              m_capWbr;              // balance by hand R 0~255
	int              m_capWbg;              // balance by hand G 0~255
    int              m_capWbb;              // balance by hand B 0~255
    int              m_capAgcOfDay;         // automatic gain of day 0~255
    int              m_capAgcOfNight;       // automatic gain of night 0~255
    int              m_capShpmode;          // shapness mode 0:auto 1:manual
    int              m_capShpdata;          // shapness data 0~255
    int              m_capBri;              // brightness 0~255
    int              m_capCon;              // contrast 0~255
    int              m_capSat;              // saturation 0~255
    int              m_capNoisemode;        // noise mode  0:auto; 1:manual
    int              m_capNoiselevel;       // noise level 0~255
    int              m_capAgcOffset;        // gain deviation value -512~512
    int              m_capReserve[4];       // reserver
} VSNETCAPSENSORPARAM;

/************************* Traffic lights parameter ********************************/
#define MAX_TRFL_AREA   6       //最大红绿灯区域数
typedef struct
{
    int              m_lightx;              // Traffic lights X coordinate
    int              m_lighty;              // Traffic lights Y coordinate   
    int              m_lightw;              // Traffic lights area weight
    int              m_lighth;              // Traffic lights area height
    int              m_redLightr;           // red light R 0~255
    int              m_redLightg;           // red light G 0~255
    int              m_redLightb;           // red light B 0~255
    int              m_yellowLightr;        // yellow light R 0~255
    int              m_yellowLightg;        // yellow light G 0~255
    int              m_yellowLightb;        // yellow light B 0~255
    int              m_greenLightr;         // green light R 0~255 
    int              m_greenLightg;         // green light G 0~255 
    int              m_greenLightb;         // green light B 0~255 
} VSNETCAPTRFLPARAM;

typedef struct
{
    VSNETCAPTRFLPARAM  m_capTrflparam[MAX_TRFL_AREA];//红绿灯区域
} VSNETCAPTRFLPARAMS;

typedef struct
{
    unsigned int m_paramtype;  //恢复默认的参数类型:0x01-视频SENSOR参数;0x02-视频白平衡参数;
                               //0x04-抓拍SENSOR参数;0x08-抓拍白平衡参数0x10-红绿灯校正参数
} VSNETITSDEFAULT;              //恢复默认参数的类型

#define  VER_STR_LEN        32
typedef struct
{
    int     m_directionFilter;      //方向过滤 分三种 1 输出来向 2 输出去向 3 双向输出
    int     m_sensitive;            //灵敏度 [1-16]
    int     m_speed_min;            //速度下限 [0 ~ 255],用于雷达检测
    int     m_angleCorrectArrival;  //来车角度修正 [0 ~ 70]
    int     m_angleCorrectAway;     //去车角度修正 [0 ~ 70]
    char    m_ver[VER_STR_LEN];     //版本号，用于获取
}VSNET_RADARPARAM;

typedef struct
{
    int                 m_conncettype[MAX_LANE_NUM];    //连接类型 0-485，1-232
    VSNET_RADARPARAM m_radar[MAX_LANE_NUM];
}VSNET_CAPRADARCFG;

typedef struct
{
    int m_enable;       //进入/离开/来车线圈是否抓拍
    int m_capnum;       //抓拍张数
    int m_interval;     //多张抓拍时的抓拍帧间隔
}VSNET_RADARTRIGGER;

typedef struct
{
    int                     m_associate_fl;             //关联闪光灯 [1-4] 0不关联 
    int                     m_associate_traffic;        //关联红绿灯组 [1-2] 0不关联 保留
    int                     m_bcap_tlight;              //是否开启红绿灯抓拍 1 开启，0关闭 保留
    int                     m_bcap_ospeed;              //是否开启超速抓拍 1 开启，0关闭 保留
    int                     m_vehicle_mins;             //最低限速 km/h 保留
    int                     m_vehicle_maxs;             //最高限速 km/h 保留
    VS_CAP_SCHEME           m_cap_scheme;               //抓拍方案
    int                     m_radarid;                  //车道对应的触发雷达编号，[1-MAX_LANE_NUM]， 0不关联
    VSNET_RADARTRIGGER      m_rt[MAX_RADAR_STATE];      //radar triger  保留
} VSNET_VRADARLANE;

/**
 * @brief 雷达触发配置参数
 */
typedef struct
{
    VSNET_VRADARLANE     m_rdlane[MAX_LANE_NUM]; //雷达车道参数
} VSNET_CAPVRADAR;

/* 车牌识别算法配置参数结构体 */
typedef struct
{
    char            m_version[16];                // 算法版本号
    char            m_date[16];                   // 算法日期
    int             m_type;                       // 算法类型: 0: 缺省 1: 单帧车牌识别算法 2: 多帧视频方式车牌识别算法 3: 电警违章算法
    int             m_lane_num;                   // 车道数，最多不超过4根
    int             m_lane_flag;                  // 车道号排列方式: 0: 从左向右排列 1: 从右向左排列
    VSNETVCOILRECT  m_plate_detect_area;          // 车牌分析区域矩形框
    int             m_plate_w_min;                // 车牌最小宽度
    int             m_plate_w_max;                // 车牌最大宽度
	unsigned char   m_default_prov[3];            // 默认省份汉字的字符(2个字节)，第三个字节为'\0'
    char            m_id_lane;                    //车道号
    unsigned char   m_chinese_trust_thresh;       // 车牌识别置信度的阈值
    unsigned char   m_chinese_mask[31];           // 汉字识别的掩膜(提高字符识别的精度) 1: 屏蔽该汉字识别 0: 开启该汉字识别
    //  云 京 冀 吉 宁 川 新 晋 桂 沪 津 浙 渝 湘 琼 甘 皖 粤 苏 蒙 藏 豫 贵 赣 辽 鄂 闽 陕 青 鲁 黑
    //  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} VSNET_PLATEREGIONPARAM;

typedef struct
{
	short m_x0;	// 左
	short m_x1;	// 右
	short m_y0;	// 上
	short m_y1;	// 下
}VSNET_RECTS;

typedef struct
{
    int         m_sign;           // 红绿灯方向属性: 0：表示未启用，1：表示左转，2：表示直行，3：表示右转
	int         m_num;            // 矩形框个数，最大不超过5
    VSNET_RECTS m_lightrect[5];   // 红绿灯矩形区域 (最大不超过5)
}VSNET_LIGHTLAYERS;

typedef struct
{
    int   m_pax;   //第一个点x坐标
	int   m_pay;   //第一个点y坐标
	int   m_pbx;   //第二个点x坐标
	int   m_pby;   //第二个点y坐标
}VSNET_DOUBLEPOINT;

/* 电警违章算法配置参数结构体 */
typedef struct VSNET_POLICEPARAM
{
	int               m_lanenum;        // 车道总数
    int               m_lanetype[8];    // 车道方向类型: 0: 缺省 1: 左转     2: 直行     3: 右转 
                                        //               4: 左转直行 5: 直行右转 6: 左转右转 
                                        //               7: 左转直行右转 
	int               m_blanepacc;      //修改违章类型的使能 0: 无效   1: 有效
	int               m_lanepeccancy[8];// 每根车道有效的违章类型
	                                    // 1-10位的2进制位分别表示10种违章类型的有效性, 0: 无效   1: 有效
    VSNET_DOUBLEPOINT m_laneline[9];    // 车道线(方向从左到右)，已CIF为基准算点的坐标                                  
    int               m_detectline[4];  // 检测线位置 0:车辆直行停止线 1:越线前检测线(用于与车牌相交来判断是否到达直行停止线)
	                                    //            2:越线后检测线   3:预留
    VSNET_DOUBLEPOINT m_leftturnline;   // 左转停止线位置(用2个点确定左转线)，已CIF为基准算点的坐标        
    VSNET_DOUBLEPOINT m_rightturnline;  // 右转停止线位置，已CIF为基准算点的坐标                            
    VSNET_LIGHTLAYERS m_lightlayers[3]; // 红绿灯参数结构体  0:左转信号灯属性 1:直行信号灯属性 2:右转信号灯属性
	VSNET_DOUBLEPOINT m_turnroundline;	// 掉头检测线
	short             m_received[8];   // 保留位
} VSNET_POLICEPARAM;


typedef struct
{
    int    m_exflag;         // 外部传入红绿灯标志 0: 内部分析  1: 外部传入
    int    m_traflight[3];   // 外部传入红绿灯信号, m_traflight[0]: 左转 m_traflight[1]: 直行 m_traflight[2]: 右转
                           	 // 0: 绿灯 1: 黄灯 2: 红灯
}VSNET_VPOLICETRAFFICLIGHT;

typedef struct
{
	int         m_laneNum;      //抓拍机当前车道数
}VSNET_ITSLANE;

typedef struct
{
    int         m_lane;         //待统计车道
    int         m_time;         //统计时间
    int         m_ratio_min;    //切换百分比下限
    int         m_ratio_max;    //切换百分比下限
}VSNET_ITSMIXTRIGPARAM;         //卡口混合抓拍触发配置参数

typedef struct
{
    int         m_lane_id[MAX_LANE_NUM];   //用于用户设置实际车道
    int         m_reserved[MAX_LANE_NUM];   //保留位
}VSNET_ITSLINEIDCFG;

typedef struct
{    
	int               m_lanenum;        // 车道总数
    VSNET_DOUBLEPOINT m_laneline[MAX_LANE_LINE_NUM];    // 车道线(方向从左到右)，以CIF为基准算点的坐标   
    int               m_type_enable[MAX_LANE_NUM];                //违章类型使能标志
    char              m_reserved[32];
}VSNET_ITSBAYONETPOLICE;

typedef struct
{
    char    m_enplat;       //特写车牌使能
    char    m_enimagesynth; //违章图片合成
    char    m_enbayonetimg; //输出卡口图片使能
    char    reserved;       //保留
}VSNET_ITSPROPERTYENABLE; 

typedef struct
{
	short		m_x;			  //x坐标
    short		m_y;              //y坐标
    short		m_width;          //区域宽度
    short		m_height;         //区域高度
	char		reserved[4];      //保留
}VSNET_ITSWBCORRECTPARAM;         //白平衡区域校正

typedef struct
{
	int m_debugInfoShowEnable;       //调试信息使能开关
}VSNET_ITSDEBUGINFOSHOW;

/************************************* ITS end ..******************************************/



/************************************* CrossMenager START ..******************************************/
typedef struct
{
    char                m_benbale;          // Regular Restart Enable
    char                m_invalidtime;      // interval time(HOUR AS UNIT，10h-240h:10 hours to 10 days)
    char                m_rsthour;          // Restart Hour
    char                m_rstminute;        // Restart Minute
    char                m_rsfrdevice;       // Restart front device
    int                 m_reserved;         // Reserved
} VSTIMERRESETEX;


typedef struct
{
    char                m_hostserverurl[40]; // IP of Recording Server
    char                m_alarservermurl[40];// IP of Alarm Server
    unsigned short      m_hostserverport;    // Port of Recording Server
    unsigned short      m_alarserverport;    // Port of Alarm Server
    char                m_centerservermurl[40];// IP of Center Server
    char                m_hostprocotocl;     // procotocl of Recording Server
    char                m_reserved[3];       // Reserved
} VSREMOTEHOSTEX;



typedef struct
{
    VSNETDVRALARMPARAM  m_diskfull;         // disk full
    VSNETDVRALARMPARAM  m_diskerror;        // disk error
    VSNETDVRALARMPARAM  m_nodisk;           // no disk
    VSNETDVRALARMPARAM  m_cpuexception;     // cpu exception
    VSNETDVRALARMPARAM  m_netexception;     // network exception
    VSNETDVRALARMPARAM  m_reseved;          // reserved
} VSNETOTHERALARMEX;      // other parameter

typedef struct
{
    VSNETDVRALARMPARAM  m_frontnetoff;      // front network off
} VSNETDVRFRNETOFFALARM;



//车辆布控信息
#define  MAX_PLATE_LEN		            (12)
#define  MAX_PLATE_NUN		            (10)
#define  MAX_PLATE_TYPE		            (5)

typedef struct
{
    int                 m_startyear;        // Start Year
    char                m_startmonth;       // Start Month
    char                m_startday;         // Start Day
    char                m_starthour;        // Start Hour
    char                m_startmin;         // Start Minute
    int                 m_stopyear;         // Stop Year
    char                m_stopmonth;        // Stop Month
    char                m_stopday;          // Stop Day
    char                m_stophour;         // Stop Hour
    char                m_stopmin;          // Stop Minute
    int                 m_reserved;         // Reserved
} VSNETPLATETIME;

typedef struct {
    char	            m_platestr[MAX_PLATE_LEN];
    VSNETPLATETIME      m_timelist;             //plate check time list
} VSNETPLATE;

typedef struct {
    VSNETPLATE	        m_plate[MAX_PLATE_NUN];
} VSNETPLATELIST;

typedef struct
{  
    char                m_enable[NVR_MAX_LOGICHS];//enable
    char                m_plate_type;          //plate type
    char                m_trans_enable;        //transmission enable
    short               m_reserved;             // Reserved
    VSNETPLATELIST      m_plate_list[MAX_PLATE_TYPE]; //plate number list
} VSNETPLATECHECK;

typedef struct {
    int                 m_type;      //查询的车辆类型 
    int                 m_start;     //查询的开始时间
    int                 m_stop;      //查询的结束时间 
    char                m_platenum[MAX_PLATE_LEN];   //查询的车牌号码
} VSNETPLATELOGQUERY;

typedef struct {
	char                m_sername[64];                  //服务器名称
	char                m_serIP[20];                    //服务器IP
    short               m_ch;                           //通道号
    short               m_plate_type;                   //车辆类型
    char                m_platestr[MAX_PLATE_LEN];      //车牌号码
    int                 m_captime;                      //抓拍时间
    VSNETPLATETIME      m_timelist;                     ///布控时间
} VSNETPLATELOGINFO;

typedef struct {
    short               m_page;     //从第几页开始的结果    
    short                m_num;      //每一页显示的条数    
    int               m_total;    //查询到的总报警信息条数
    int                 m_size;     //m_context的存储空间 
    VSNETPLATELOGINFO * m_context;  //查询的报警信息内容保存位置 
    int                 m_result_nr;//保存到m_context中的报警信息条数 
} VSNETPLATELOGRESULT;

typedef struct 
{
    VSNETPLATELOGQUERY  m_search;   //搜索条件  
    VSNETPLATELOGRESULT m_result;   //搜索结果
} VSNETPLATELOGSEARCH;



//定时上传信息
typedef struct
{  
    char                m_enable;     //transmission enable
    char                m_protocol;   //transmission protocol
    short               m_reserved;   //reserved
    unsigned short      m_companytype;//transmission company type
	unsigned short      m_customtype; //transmission custom  type
    TIMECHECK           m_timelist;   //transmission time list
}VSNETTIMETRANS;

//违章类型参数
#define MAX_ILLEGAL_TYPE_NUM           (16) 
#define MAX_TYPE_NAME_LEN              (32) 
#define MAX_TYPE_CODE_NUM              (12) 

typedef struct
{
	int             m_codeNum;                      //illegal code number
    char            m_typename[MAX_TYPE_NAME_LEN];  //illegal type name
    unsigned short  m_typecode[MAX_TYPE_CODE_NUM];  //illegal type code
}VSNETTYPEINFO;

typedef struct
{  
    short           m_companynum;    //illegal type number
    short           m_customtnum;    //illegal type number
    VSNETTYPEINFO   m_companytype[MAX_ILLEGAL_TYPE_NUM];  // device illegal type
    VSNETTYPEINFO   m_customtype[MAX_ILLEGAL_TYPE_NUM];   //user defined illegal type
}VSNETILLEGALTYPE;


//获取设备温度
typedef struct
{  
    short   m_temperature;       //device temperature
    short   m_reserved[3];       //reserved
}VSNETGETTEMPERATURE;


#define MAX_DISK_GROUP_NUM         (4) 
#define MAX_PIC_TYPE_NUM           (4) 

//图片优先级信息
typedef struct
{  
    char                m_priority[MAX_PIC_TYPE_NUM]; //covering priority 0:illegal 1:cross 2: reserved 3: reserved
    short               m_keepday;                    //keep days for low priority
    short               m_reserved;                   //reserved
}VSNETPRIORITY;

//图片分组信息
typedef struct
{  
    int                 m_totalsize;  //total size, unit:Mb
    int                 m_usesize;    //size has been used, unit:Mb 
    int                 m_savesize;   //allocation size, unit:Gb
    int                 m_reserved;   //reserved
}VSNETJPGGROUP;

//图片存储信息
typedef struct
{  
    VSNETPRIORITY       m_jpgprio;   //priority info
    int                 m_groupnum;  //group number
    VSNETJPGGROUP       m_group[MAX_DISK_GROUP_NUM];   //group 1 - 4    
    int                 m_reserved;   //reserved
}VSNETJPGSAVEINFO;


//定时录像参数
typedef struct
{
    char                m_benrecord; // Regular Recording Enable
    char                m_reserved[3];  //reserved 
    TIMELIST            m_record;    // Regular Recording Time Table
}VSNETTIMEREC;

//交通触发录像参数
typedef struct
{
    char                m_enable;     //enable
    char                m_pretime;    //pre-recording time, traffic trigger: 0-30s
    char                m_delaytime;  //delay recording time,traffic trigger: 0-30s
    char                m_reserved;   //reserved 
}VSNETTRAFFICREC;

//报警录像参数
typedef struct
{
    short               m_contime;    //continuous recording time,alarm:30-1800s
    short               m_reserved;   //reserved 
}VSNETALARMREC;

//录像类型优先级
typedef struct
{
    char                m_priority[4]; //covering priority 0:time 1:trffic 2:alarm 3:reserved
    int                 m_keepday;     //keep days for low priority
    int                 m_reserved;    //reserved 
}VSNETRECPRIORITY;

//录像计划
typedef struct
{  
    VSNETTIMEREC        m_time;      //video type, timer
    VSNETTRAFFICREC     m_trigger;   //video type, traffic trigger
    VSNETALARMREC       m_alarm;     //video type, alarm
    VSNETRECPRIORITY    m_priority;  //priority info
    int                 m_reserved;  //reserved  
}VSNETRECSAVEINFO;


//更新道口主机下通道IP
typedef struct
{
	char  m_devname[64];      //server name
	char  m_channelIp[20];    //channel IP address
	int   m_channel;          //channel number
	int   m_devtype;          //device type 0: main device 1: channal device
	char  m_resev[20];        //reserve
}VSNETCHANNELINFOUPDATA;  

//道口主机日志信息
#define MAX_LOG_INFO_LEN           (120) 

typedef struct 
{
    int                 m_logType;            //日志类型
	int                 m_chBlend;            //1<<0: 通道1, 1<<1: 通道2, 1<<2: 通道3等
    int                 m_startTime;          //开始时间
    int                 m_stopTime;           //结束时间
    char                m_reserve[12];        //保留位
} VSNETLOGQUERY;

typedef struct 
{
    int                 m_time;         //日志时间
    int                 m_chn;          //通道号
    int                 m_minor_type;   //日志类型
    char                m_text[MAX_LOG_INFO_LEN];    //日志内容
} VSNETONELOGINFO;

typedef struct 
{
    short               m_originPos;//起始位置   
    short               m_num;      //每一页显示的条数    
    int                 m_total;    //查询到的总日志信息条数
    int                 m_size;     //m_context的存储空间 
    VSNETONELOGINFO *   m_context;  //查询的日志信息内容保存位置 
    int                 m_result_nr;//保存到m_context中的日志信息条数 
} VSNETLOGRESULT;

typedef struct 
{
    VSNETLOGQUERY       m_search;   //搜索条件  
    VSNETLOGRESULT      m_result;   //搜索结果
} VSNETLOGINFOSEARCH; 

typedef struct  
{
	int                 m_formatState;  //格式化状态（1：正在格式化中 0：未格式化 2：格式化结束）
	int                 m_formatErrID;  //格式化错误值(0:格式化成功。其它错误)
	char                m_reserve[12];  //保留位
}VSNETFORMATDISKSTATE;
              
/************************************* CrossMenager END   ..******************************************/


/************************************** DXHJ Custom Begin *********************************/
// DXHJ7304 server record case info
typedef struct
{
    char            m_szCaseName[28];    // case name
    char            m_szCaseID[28];      // case id
    char            m_szCaseExecor[28];  // case execor
    char            m_reverse1[28];      // court name
    char            m_reverse2[28];
    char            m_reverse3[28];
} VSNETDXJBCASEINFO;

//DXHJ_D 片头叠加信息
typedef struct
{
    char            m_szCaseName[40];      // 案件名称
    char            m_szCaseID[40];        // 案件编号
    char            m_szCaseExecor[40];    // 办案人员
	char            m_szCaseMcdw[40];      // 主管单位
    char            m_szCaseMsdw[40];      // 主审单位
    char            m_szCaseLocation[40];  // 办案地点
	char            m_szCaseReccor[40];    // 记录人员
    char            m_szCaseFilename[40];  // 录像文件名
    char            m_reverse1[28];        // court name
    char            m_reverse2[28];
    char            m_reverse3[28];
} VSNETDXJBCASEINFOEX;

// DXHJ7304 current max window chnannel no
typedef struct
{
    int             m_iVGANO;
    char            m_reverse[16];
} VSNETDXJBVGA;

// DXHJ_D 服务器状态
typedef struct
{
    int     m_nCPUUsage;    // CPU使用率 0~100
    int     m_nMemUsage;    // 内存占用率 0~100
    int     m_bSerRec;      // 服务器录像状态
    char    m_reverse[60];  // 保留
} VSNETDXHJWORKSTATUS;

// DXHJ_D DVD控制
typedef struct
{
    char    m_value[8];
} VSNETDVDCTRL;

// DXHJ_D 摄像机控制
typedef struct
{
    char    m_value[8];
} VSNETCAMCTRL;

// DXHJ_D 视频切换方式
typedef struct
{
	int  m_enable;          // 控制视频切换方式:0:手动,1:自动
	char m_reverse[64];     // 保留
} VSNETAUTOORHANDCTRL; 

// ZGHY_D 服务器远程录像控制和返回参数
typedef struct
{
    VSNETDXJBCASEINFO   m_caseinfo;             // 设置: 案件信息
    int                 m_zgch[8];              // 设置: ZGHY通道录像参数, 1 开始, 0 不开始
    char                m_reccordName_get[64];  // 获取: 返回录像名
    char                m_diskserialnum[32];    // 获取: 磁盘序列号
    int                 m_slot;                 // 获取: 卡槽位
    char                m_sharename[32];        // 获取: 磁盘共享名
} VSNETSERVERRECPARAM_ZGHY;

// ZGHY_D OSD参数
typedef struct
{
    char m_osd[400];        // OSD叠加内容
    int  m_speed;           // 滚动速度
    int  m_width;           // 给定OSD显示宽度
    char m_reverse[64];     // 保留
} VSNETZGOSD;

// ZGHY_D OSD参数2标题
typedef struct
{
    int               bShow;           // show(1),hide(0)
    char              lpString[64];    // characters to be showed
    unsigned short    x, y;            // coordinate
} TITALOSD_ZGHY;

// ZGHY_D OSD参数2
typedef struct
{
    TIMEOSD           m_time;          // time
    TITALOSD_ZGHY     m_tital[4];      // title
    BITSINFOOSD       m_bits;          // bit rate
} CHANNOSD_ZGHY;

// ZGHY_D RTMP信息
typedef struct
{
    char m_hostname[48];    // RTMP主机地址 (IP或者域名) 默认 "0.0.0.0"
    int  m_rtmpport;        // RTMP端口 默认 1935
    char m_appname[40];     // 应用实例名称 默认 live
    char m_streamname[48];  // RTMP流名称 默认 livestream
} VSNETRTMPINFO;

// ZGHY_D 磁盘切换阀值参数
typedef struct
{
    int  m_diskchangelimen; // 磁盘切换阀值（单位：MB）
    char m_reverse[64];     // 保留
} VSNETDISKCHANGELIMEN;

// ZGHY_D 录像打包时间参数
typedef struct
{
    int  m_recpacktime;     // 录像打包时间（单位：分钟）
    char m_reverse[64];     // 保留
} VSNETRECPACKTIME;

// DXHJ 光盘信息
typedef struct
{
    int m_state;                // 当前状态
    unsigned int m_totalsize;   // 光盘总大小
    unsigned int m_freesize;    // 光盘剩余空间
    unsigned int m_usedsize;    // 已用空间
} VSNETCDROMINFO;

// DXHJ 光驱&光盘信息
typedef struct
{
	int          m_cdcount;       // 光驱总数
	int          m_state[8];      // 光驱当前状态
	unsigned int m_totalsize[8];  // 光盘总大小
	unsigned int m_freesize[8];   // 光盘剩余空间
	unsigned int m_usedsize[8];   // 已用空间
} VSNETCDROMINFOEX;

// DXHJ 画中画小画面位置信息
typedef struct
{
	unsigned int m_index;            // 小画面索引号
	double       m_fRatioLeft;       /* 相对主画面的水平起始位置比例 */
	double       m_fRatioTop;        /* 相对主画面的垂直起始位置比例 */
	double       m_fRatioWidth;      /* 相对主画面的宽度缩放比例 */
	double       m_fRatioHeight;     /* 相对主画面的高度缩放比例 */
} VSNETVMIXCHANRECT;

// DXHJ 画中画画面顺序信息
typedef struct
{
	int   m_cncount;       // 画面总个数
	short m_order[8];      /* 画面顺序 */
} VSNETVMIXORDER;

// DXHJ MAC地址
typedef struct
{
    char m_pcmac[20];
} VSNETPCMACADDR;

// DXHJ 聊天对象
typedef struct
{
    char m_chator[20];  //消息目标对象用户名
    char m_chaturl[16]; //消息目标对象IP地址
} VSNETCHATTO;

// DXHJ 聊天消息
typedef struct
{
    VSNETCHATTO m_chatto;
    char m_chatmsg[256];//消息内容
} VSNETCHATMSG;

// DXHJ 录像状态通知
typedef struct
{
    int m_nState;        // 录像状态，0为出错，1为录像时间即将到
    int m_nError;        // 录像错误代码
    int m_nDeviceType;   // 录像错误存储设备类型
    int m_nDeviceIndex;  // 录像错误存储设备编号
    int m_nTimeRemind;   // 录像剩余时间
} VSNET_DX_SERRECSTATE;

// DXHJ 最后一次录像信息
typedef struct
{
	int  m_nflag;         //录像状态 0:录像完成 1:录像未完成
	char m_filepath[256]; //录像文件路径
}VSNET_DX_RECORDFILEPATH;

// DXHJ 上传审讯记录文档
typedef struct
{
	int  m_loadSign;        //2：代表本机上传文档   1：代表远程上传文档   0：代表远程上传模板
	char m_uPfilepath[256]; //审讯记录文档路径
}VSNET_DX_UPLOADFILE;
/************************************** DXHJ Custom End ***********************************/

/************************************** SZWJ       Start***********************************/
//SZWJ RTMP控制参数
#define RTMP_CMD_STOP           0   //停止RTMP
#define RTMP_CMD_START          1   //启动RTMP 
#define RTMP_CMD_RESET          2   //重启RTMP
#define RTMP_CMD_SETPARAM       3   //设置RTMP参数
#define APP_RTMPHOST_NUM        48 

typedef struct
{
    char                m_hostip[APP_RTMPHOST_NUM];          //主机ip
    int                 m_hostport;                          //主机端口
    char                m_appname[APP_RTMPHOST_NUM];         //应用程序名称不能大于23个字符
    char                m_streamname[APP_RTMPHOST_NUM];      //流名称不能大于47个字符 
}VSNETSZWJRTMPPARAM;

typedef struct
{
    int                m_rtmpcmd;                            //rtmp命令号
    VSNETSZWJRTMPPARAM m_rtmpparam;                          //RTMP_CMD_SETPARAM命令的参数
}VSNETSZWJRTMP;
/************************************** SZWJ Custom End ***********************************/

/************************************** CDTY       Start***********************************/
// CDTY_D WIFI和网络参数
typedef struct
{
	int  m_wifistate;   // wifi状态：0:未连接, 1:已连接
	int  m_wifisignal;  // wifi信号强度
    int  m_nettype;     // 网络类型：0-正常模式，1-NAT,2-UPNP
} VSNET_CDTY_PARAM;
/************************************** CDTY         End***********************************/

/************************************** HBR       Start***********************************/
// HBR 云台控制类型
typedef struct
{
	int  m_serialport; //云台控制串口类型 0:485 1:232
}VSNET_SERIALPORT;

typedef struct
{
    char       m_sharpness;      //锐度 -2：错误 -1：不启用 0 - 9 锐度值
    char       re[3];            //保留
}VSNETHBEPARAM;
/************************************** HBR         End***********************************/


/************************************** FJTS       Start***********************************/
//FJTS_D 获取硬件序列号
typedef struct
{
	char  m_romno[80];   // 硬件序列号
} VSNET_FJTS_ROMNO;
/************************************** FJTS         End***********************************/

/************************************** SHRZ      Start ***********************************/
#define VSNET_SHRZ_ALARMTYPENUM 4

//SD卡状态
typedef struct
{
    int m_loadstate; //SD卡挂载状态:-1-无卡 0-挂载失败 1-挂载成功
    VSDISKSTATE m_sdstate;//SD卡详细信息
} VSNET_SHRZ_SDSTATE;

//3G信号强度
typedef struct
{
    int m_signal;
} VSNET_SHRZ_3GSIGNAL;

//报警状态
typedef struct
{
    int m_type;//报警类型
    int m_state;//状态:0-未报警，1-报警
} VSNET_SHRZ_ALARM;

typedef struct
{
    VSNET_SHRZ_ALARM m_alarm[VSNET_SHRZ_ALARMTYPENUM];
} VSNET_SHRZ_ALARMSTATE;
/************************************** SHRZ        End ***********************************/

/************************************** XASY        Start ***********************************/
//电流环配置
typedef struct
{   
    int    m_enable;       //使能开关 1 - 开; 0 - 关
    float  m_maxquantum;   //电流环量程值上限
    float  m_minquantum;   //电流环量程值下限
    float  m_dlhvalvemax;  //电流环报警阀值上限
    float  m_dlhvalvemin;  //电流环报警阀值下限
    int    m_dlhprecision; //精度
    float  m_dlhadjust;    //偏差基准调整
    char   m_dlhunit[16];  //电流环单位
    char   m_dlhname[56];  //电流环名字
    char   m_dlhmout[4];   //电流环超出报警阀值联动报警输出 1 - 开; 0 - 关
} VSNET_XASY_DLH_QUANTUM_T;

#define APP_DLH_NUM 1                      //电流环上板个数,目前为1
#define APP_DLH_CH_NUM      8*APP_DLH_NUM  //电流环最大路数
typedef struct
{
    float  m_currentValue[APP_DLH_CH_NUM]; //电流值
}VSNET_XASY_CURRENT_LOOPVALUE;
/************************************** XASY        End ***********************************/

/************************************** SZYW        Start ***********************************/
//控制音频监听
typedef struct
{
    int    m_state;          //音频开启状态 1 - 开; 0 - 关
} VSNET_SZYW_AUDIO_LISTENING;
/************************************** SZYW        End ***********************************/

/************************************** XT        Start ***********************************/
//3D变倍功能参数
typedef struct
{
    int    m_zoom;         // 放大倍数MAX(h/H, w/W)*255 当为0时表示不放大，只移动
    int    m_x;            // 中心坐标(x/W)*255
    int    m_y;            // 中心坐标(y/H)*255
	int    m_type;         // 控制类型(保留，暂不使用)
} VSNET_XT_PELCO_3D;       // 说明 h:矩形高 w:矩形宽 H:窗口高 W:窗口宽 矩形中心坐标:(x,y)

typedef struct
{
    int     m_startx;
    int     m_starty;
    int     m_endx;
    int     m_endy;
}VSNET_XT_3D_POSXY;      // 三维定焦


//球机物理位置参数
typedef struct
{
	int    m_x;            // x轴坐标
	int    m_y;            // y轴坐标
	int    m_z;            // z轴坐标
	int    m_reverse[2];   // 保留位
}VSNET_XT_LOCATION;
/************************************** XT        End ***********************************/



/************************************** SXZT        Start ***********************************/
//车牌和危险品信息上报结构体
typedef struct 
{
    unsigned long dwLowDateTime;
    unsigned long dwHighDateTime;
} VSNET_FILETIME;

typedef struct
{
    char    m_szSerId[52];                  //转发服务器编号
    char    m_szSerName[40];                //当时的设备名称
    int     m_nChno;                        //当时的摄像机通道号	

    //危险品相关
    int         m_bDanger;                  //是否存在危险品信息
    char    m_szDangerFileName[260];        //危险品图片在转发服务器上的绝对路径
    VSNET_VCA_PLATERECT m_dgRect;           //当前帧定位到的危险品在原始图像中的位置
    VSNET_FILETIME  m_dgTime;               //危险品抓拍时间 

    //车牌相关
    int         m_bPlate;                   //是否存在车牌信息
    char    m_szPtPlateFileName[260];       //车牌图片在转发服务器上的绝对路径 
    char    m_szPtNumber[12];               //车牌号码
    int     m_nPtColor;                     //车牌颜色(0:蓝底 1:黄底 2:白底－军牌 3:白底－警牌 4:黑牌 5:红牌 6:绿牌 99:未知)
    int     m_nPtTrust;                     //置信度(0-100)
    VSNET_FILETIME  m_ptTime;               //车牌抓拍时间 
    int     m_nPtType;                      //车牌类型(1:大型汽车号牌 2:小型汽车号牌 16:教练汽车号牌 23:警用汽车号牌 99:未知)
    int     m_nPtCarColor;                  //车身颜色(0:白色 1:银灰 2:黄色 3:粉色 4:红色 5:紫色 6:绿色 7:蓝色 8:棕色 9:黑色 99:其他 255: 未开启识别)
    int     m_nPtSpeed;                     //车辆速度
    int     m_nPtbrightness;                //车牌亮度
    int     m_nPtDirection;                 //运动方向(0:未知方向 1:车牌从上到下运动 2:表示车牌从下到上运动)
    int     m_nPtWidth;                     //车牌宽度    
    VSNET_VCA_PLATERECT m_ptRect;           //当前帧定位到的车牌在原始图像中的位置
} VSNET_SXZT_DANGER_PLATE;
/************************************** SXZT        End ***********************************/

/************************************** HT          Start *********************************/
typedef struct
{
    int         m_carinfo;                  //巡检车信息显示状态  (0:不显示 1:显示)
    int         m_sensorinfo;               //传感器信息显示状态  (0:不显示 1:显示)
    int         m_streaminfo;               //码流信息显示状态    (0:不显示 1:显示)
    int         m_ptzinfo;                  //云台信息显示状态    (0:不显示 1:显示)
    char        m_carname[20];              //巡检车名字
}VSNET_HTOSDCTL;

//传感器报警阈值
/*typedef struct 
{
    float           m_O2_max; //氧气
    float           m_O2_min; 
    float           m_H2S_max; //H2S
    float           m_H2S_min; 
    float           m_CO_max; //CO
    float           m_CO_min; 
    float           m_burn_max; //可燃气体
    float           m_burn_min; 
    float           m_temperature_max; //温度
    float           m_temperature_min; 
    float           m_humidity_max; //湿度
    float           m_humidity_min; 
    float           m_in_tem_max; //机内温度
    float           m_in_tem_min; 
    float           m_smog_max; //烟雾传感器
    float           m_smog_min; 
    float           m_bright_max; //光照传感器
    float           m_bright_min; 
    float           m_capacity_max; //电量
    float           m_capacity_min; 
    float           m_current_max; //电流
    float           m_current_min; 
    float           m_voltage_max; //电压
    float           m_voltage_min; 
    unsigned int    m_reserve[2];//保留
}VSNET_HTSENSOR_THRESHOLD;*/

//机器人ip信息
typedef struct
{
    char m_robot_ip_addr[16];       //ip地址
	int  m_robot_port;              //端口号
}VSNST_HT_ROBOT_ADDR;
/************************************** HT          End **********************************/

/************************************** SZYV        Start*********************************/
typedef struct 
{
    int 		 	bEnable;  	// 1使能 0清除
    unsigned short 	Days;   	// 只有在bEnable为1的时候才用到该值,超时天数
	unsigned short  reserve;	// 保留
}VSNET_SZYW_OVERTIME;
/************************************** SZYV          End **********************************/



/************************************** PowerVersion_ISM      Start*********************************/

//通知设备持续录像
typedef struct  
{
	int	 m_nType;// 0 手动录像， 1 移动侦测联动触发，2 视频丢失联动触发，3 视频遮挡联动触发 4未知其它报警联动
	int  m_nDurableTime; //持续时间（秒）,持续时间到后，结束录像。
} VSNET_RECORD_LINKAGE; 

//预置点轮训设置
typedef struct
{
	int  m_nPresetNo;   //预置点号  从0 到 255.         
	int	 m_nDurableTime; //单位：秒。当前预置点停留时间：5秒-1800秒
} VSNET_PTZ_LOOP_ITEM;

#define VSNET_MAX_LOOP_NUM 20

//预置点轮训设置
typedef struct
{
	int                    m_nIndex;		  //轮巡参数组号[0,19]
	int                    m_nNum;            // VSNET_PTZ_LOOP_ITEM 的个数
	VSNET_PTZ_LOOP_ITEM    m_loopInfo[VSNET_MAX_LOOP_NUM];   // 每个预置点信息 最多支持设置20个
} VSNET_PTZ_LOOP;  

//设备状态
typedef struct
{
	float m_fCpuUse;        // cpu使用率
	float m_fMemUse;        // 内存使用率
	float m_fDiskUse;       // 硬盘使用率
	float m_fNetworkUse;    // 网络使用率	
} VSNET_SER_SYSTEM_STATUS;

//设定一段时间的osd叠加
typedef struct  
{
	int	m_nTitle;        //叠加位置： 0 ：覆盖标题一，1：覆盖标题二，2覆盖标题三，3覆盖标题四。
	int	m_nDurableTime;  //单位：秒。叠加OSD时间：5秒-1800秒。超过该时间后还原为原来的叠加字符。
	char m_szString[32]; //叠加字符
} VSNET_OSD_LINKAGE;

// 设置守望功能
typedef struct  
{
	int	m_bEnalbe;      // 守望功能使能
	int m_nPresetNo;    // 守望功能调用的预置点
	int	m_nReturnTime;  // 单位：秒，间隔时间5-1800秒。当摄像机不在守望功能设置的预置点后，在m_nReturnTime时间后自动调用m_nPresetNo设置的预置点。
	// 云台预置点轮训，和联动预置点调用优先。报警预置点调用延迟时间结束后，再m_nReturnTime时间后，调用守望预置点。
} VSNET_PTZ_KEEP;

// 联动调用预置点
typedef struct  
{
	int m_nPresetNo;    // 联动调用预置点，点号
	int	m_nDurableTime;  // 停留时间。单位：秒，间隔时间5-1800秒。（在该时间内，守望功能无效）
} VSNET_PTZ_LINKAGE;

// NVR通道布防
typedef struct  
{
	int m_bEnable;    // 通道使能
} VSNET_CHANNEL_ALARM;

/************************************** PowerVersion_ISM       End **********************************/



/************************************** ELF        Start*********************************/

typedef struct
{
    unsigned int m_elf9500_num;   //转辙机编号
    unsigned int m_elf9500_client_port;//UDP通信上位机端口号
    unsigned int m_elf9500_local_port; //转辙机udp端口号
    char         m_elf9500_client_ip[16];//上位机ip

}VSNET_ELF_PARAM;  //转辙机参数

typedef struct
{
    int     m_elf_video_time;   //录像最长时间
    int     m_elf_passcar_cap_time;//过车间隔抓拍和采集的时间
    int     m_elf_heat_beat_time; //与数据采集板的心跳间隔时间
    int     m_elf_get_data_time;//数据请求间隔时间
}VSNET_ELF_OVER_TIME;//转辙机超时时间

typedef struct
{
    char    m_elf_type;          //转辙机类型，1:单通道，2:有两个通道
    char    m_elf_ch;           //摄像机通道选择
    char    m_rev[6];           //预留6个字节
}VSNET_ELF_CCH_REV;//转辙机摄像头通道和预留字节

typedef struct
{
    char    m_elf_elect;          //电流参数
    char    m_elf_flap_start;     //振动启动参数
    char    m_elf_flap_way;       //振动方向
    char    m_rev[5];             //铁大需要要预留2个字节，这里为了字节对齐预留5个字节，使用时使用前2个即可
}VSNET_ELF_HEAT_PARAM;//转辙机心跳包中的参数数据

/************************************** ELF        end*********************************/

/************************************** VINET        Start 

***********************************/
typedef struct
{
    int m_Action;       //状态  0为恢复，1为开始放大 2为缩小
    int m_AreaX;        //
    int m_AreaY;
    int m_AreaWidth;
    int m_AreaHeight;
}VSNET_VINET_3DZOOM;//VINET 3D放大
/************************************** VINET        End ***********************************/

/************************************** JXYY_TITLE       Start ***********************************/
typedef enum
{
		OSD_SIZE_16_16 = 0,
		OSD_SIZE_32_16,
		OSD_SIZE_24_24,
		OSD_SIZE_32_32,
		OSD_SIZE_48_48,
		OSD_SIZE_64_64,
        OSD_SIZE_128_128,
        OSD_SIZE_128_256,
		OSD_SIZE_END
}VSNET_OSD_SIZE_E;//汉字字符显示大小

typedef struct
{
    int x;
    int y;
    int osd_size;//osd大小类型
    char lpstr[48];
}VSNET_JXYY_TITLE;

typedef struct
{
    int x;
    int y;
    int osd_size;//osd大小类型 VSNET_OSD_SIZE_E
}VSNET_JXYY_TIME;

typedef struct
{
    VSNET_JXYY_TIME  m_time[4];
    VSNET_JXYY_TIME  m_bit[4];
    VSNET_JXYY_TITLE m_title[4][8];//4个码流每个码流8个标题
}VSNET_JXYY_OSD;


/************************************** JXYY_TITLE End ***********************************/

/************************* HMDL Start *************************/
#define HM_ALARMHOST_CH_COUNT     12    // 报警主机通道数

typedef struct
{
	int  m_enable;		  // 使能
	char m_hostname[64];  // 报警主机名字
	char m_ip[32];		  // 报警主机IP
	char m_netmask[32];	  // 报警主机子网掩码
	char m_gateway[32];   // 报警主机网关
	int  m_DTP_port;      // 报警主机端口(Datastream Target port)
	int  m_P2P_port;	  // 报警主机端口(P2P/GCL Target/local Port)
}VSNET_HM_ALARMHOST_BASEINFO; // 报警主机基本参数

typedef struct
{
	int	 m_enable;	     // 使能
	int	 m_flag;		 // 0\1 标记触发标记(0 - 常开，1 - 常闭)
	char m_chname[64];	 // 报警主机通道名称
}VSNET_HM_ALARMHOST_CHANNELINFO_ITM;

typedef struct
{
    VSNET_HM_ALARMHOST_CHANNELINFO_ITM m_alarmhost_chinfo[HM_ALARMHOST_CH_COUNT];
}VSNET_HM_ALARMHOST_CHANNELINFO; // 报警主机通道参数

typedef struct
{
	int m_alarm_type;		// 报警类型，红外对射 - 0 防拆 - 1
	int m_record_enable;	// 录像使能
	int m_nvr_ch;			// NVR 录像、抓拍通道
	int m_ptz_enable;		// 预置位使能
	int m_ptz_preset;		// 预置点号
	int m_capture_enable;	// 抓拍使能
}VSNET_HM_ALARMHOST_LINKAGE_ITM;

typedef struct
{
	VSNET_HM_ALARMHOST_LINKAGE_ITM m_linkage[HM_ALARMHOST_CH_COUNT];
}VSNET_HM_ALARMHOST_LINKAGE; // 报警主机通道报警联动参数
/************************** HMDL End **************************/

typedef struct
{
    short m_x;
	short m_y;
	short m_wide;
	short m_high;
}VSNET_BLACKCLIPPING_INFO; // 黑边裁剪信息

//慧拓热成像osd叠加温度信息 
typedef struct
{
    unsigned short m_tmp_x;      //x坐标
    unsigned short m_tmp_y;      //y坐标
    float m_tmp_value;          //温度值
} VSNET_HT_TMP_VALUE;

typedef struct
{
    VSNET_HT_TMP_VALUE m_tmp_max;   //最大温度
    VSNET_HT_TMP_VALUE m_tmp_min;   //最低温度
    float m_tmp_avg;                //平均温度
    unsigned short m_lenth;         //原始图像的长度
    unsigned short m_width;         //原始图像的宽度
} VSNET_HT_TMP_OSD;

typedef struct
{
    char m_osdstr_l[20][50];           //左OSD叠加内容
    char m_osdstr_r[20][50];           //右OSD叠加内容
} VSNET_ROBOT_OSD;


/************************** GW CENSOR BEGIN **************************/

typedef struct
{
	int	m_ch; 		  // 0 - 15
	int	b_enable; 	  // 1: 布防 0: 撤防		    
}VSNET_GW_SENSOR_DEFENCE_INFO; // 探头布放/撤防信息

/************************** GW CENSOR ENd ****************************/

typedef struct
{
    int m_msxenable;      //msx使能[关:0,开:1]
    int m_reserved[2];    //预留
}VSNET_MSXENABLE;

typedef struct
{
    int m_msxstrength;    //msx融合强度(高/中/低) 0:低 1:中 2:高
    int m_reserved[2];    //预留
}VSNET_MSXSTRENGTH;

typedef struct
{
    int m_msxdistance;    //msx融合距离[-200, 200]
    int m_reserved[2];    //预留
}VSNET_MSXDISTANCE;

typedef struct
{
	int m_s32x;     //x坐标值
	int m_s32y;     //y坐标值
}VSNET_PIXELCOORD;

typedef struct
{
    int m_filetype;     //0-Radiometric jpeg， 1-TIFF , 2-8-bit jpeg
    int m_period;       //抓拍间隔，范围0~60s,0-指单张抓拍
    int m_reserved[4];  //预留  m_reserved[0]:0-可见光，1-红外，2-可见光+红外
}VSNET_IRSTILLCAPCONFIG;

typedef struct
{
	int                     m_bstart;           //0-停止抓拍，1-启动抓拍
	int                     m_isadvanced;       //高级配置标志，=1支持高级配置，后续高级配置参数有效
	VSNET_IRSTILLCAPCONFIG  m_advanced;         //高级配置
}VSNET_IRSTILLCAPTURE;                        //红外设备抓拍

typedef struct
{
    int m_tempunit;         //温度单位 0-℃，1-℉
    int m_emissivity;       //发射率 x 100,范围0~50
    int m_skycond;          //天空条件
    int m_humidity;         //湿度 
    int m_airtemp;          //大气温度，单位℃
    int m_bkgtemp;          //背景温度，单位℃
    int m_airtrans;         //大气传输率 x 1000
    int m_targetdistance;   //目标距离
    int m_reserved[8];      //预留
}VSNET_IRRADCONFIG;

typedef struct
{
	int                     m_osdenable;        //0-禁用，1-开启  
	int                     m_isadvanced;       //高级配置标志，=1支持高级配置，后续高级配置参数有效
	VSNET_IRRADCONFIG       m_advanced;         //高级配置
}VSNET_IRRADCONFIGURE;                        //红外辐射配置

typedef struct
{
    char m_bri;             // 亮度，[-128,128]
    char m_con;             // 对比度，[16,48]
    char m_res[2];          // 保留
} VSNET_IR_VIPARAM;       // 红外亮度、对比度参数配置

typedef struct
{
    char m_en;              // DDE开关，1 使能，0 禁用
    char m_level;           // DDE级别，0 低，1 中，2 高
    char m_res[2];          // 保留
} VSNET_IR_DDEPARAM;      // 红外DDE参数配置

typedef struct
{
    int m_mode;             // 自动拉伸策略，0 平均温-最高温，1 最低温-最高温
} VSNET_IR_STRETCHMODE;     // 红外拉伸策略配置

typedef struct
{
    int m_devtype;          // 
    int m_resolution;       // 640:640x512, 320:320x256, 336:336x256
    int m_lens_hfov;        // in deg
    int m_frame_rate;       // 6:60Hz, 9:9Hz
} VSNET_IRINFO_S;           // 红外摄像头信息

//
typedef struct
{
	int m_BBCount;          //待校准的黑体总数 ，默认为5
} VSNET_IR_BBCALICOUNT;     //黑体校准总数信息

typedef struct
{
	int m_BBNo;             //黑体编号，从0开始编号
	int m_BBtemp;           //黑体温度，单位C   
} VSNET_IR_BBCALIINFO;      //黑体校准信息

typedef struct
{
	unsigned int offset;     //数据块起始地址偏移量
	unsigned int datasize;   //数据块大小
} VSNET_FLASH_DATA;

typedef struct
{
	int    m_VisEn;          //可见光标记使能
	int    m_IREn;           //红外标记使能
	int    m_reserve[3];     //保留
} VSNET_IR_MARKPARAM;        //PCB预览显示标记参数

typedef struct
{
	int    datavalid;       //数据块有效 12表示有效
	double adH[9];          //单应矩阵
	int    offsetx;         //水平偏移
	int    offsety;         //垂直偏移
} SDK_PTE_IMG_REGSTN;       //图像校准参数 flash 偏移0（PC端私有数据存储在设备FLASH中，DEVICE端不关心）


typedef struct
{	
	int             m_hour;      //时	
    int             m_minute;    //分
    int             m_second;    //秒
    int             m_msec;      //毫秒
    int             m_state;     //定位状态，A = 数据可用，V = 数据不可用。
    double          m_lat;       //纬度
    int             m_lat_zone;  //纬度区分，北半球（N）或南半球(S)
    double          m_lon;       //经度
    int             m_lon_zone;  //经度区分，东（E）半球或西（W）半球
    float           m_height_msl;		 //海平面高度
    float           m_speed;     //相对位移速度，0.0 至 1851.8 knots 
    float           m_heading;   //相对位移方向，000.0 至 359.9度
    int             m_year;      //年
    int             m_month;     //月
    int             m_day;       //日
    int             checksum1;   //校验值1
    int             m_moon_line; //天空中收到讯号的卫星总数
    int             m_moon_fixed;//定位的卫星总数
    int             m_moon_num;  //天空中的卫星总数，00 至 12
    int             m_number;    //卫星编号
    int             m_noise;     //讯号噪声比（C/No）， 00 至 99 dB；无表未接收到讯号
    int             checksum2;   //校验值2
    char            reserve[20];
}VSNET_GPSINFO;

typedef struct 
{
    
    int x;//图像区左上角显示横坐标 
    int y;//图像区左上角显示纵坐标 
    int w;//图像区宽度 x+w ∈[0,10000]
    int h;//图像区高度 y+h ∈[0,10000]
}_tagCALTEMPINAREA;

typedef struct  
{
    _tagCALTEMPINAREA area[TEMP_AREA_NUM];
}VSNET_CALTEMPINAREA;//画框测温


/*********************串口配置 beg*************************/
typedef enum {
    PROTOCOL_PWM = 0,
    PROTOCOL_MAVLINK,
    PROTOCOL_CVBS,
    PROTOCOL_END,
}SERIAL_PROTOCOL_TYPE;

typedef enum
{
    EN_CFL_DISABLED = 0,    /////禁用
    EN_CFL_IR_COLOR_LUT,                /////调色板
    EN_CFL_IR_SCENE,                    /////场景
    EN_CFL_RECORD_MODE,                 /////录制模式
    EN_CFL_RECORD_STATUS,               /////录制控制状态
    EN_CFL_IR_ZOOM,                     /////红外变倍
    EN_CFL_VIS_ZOOM,                    /////可见光变倍
    EN_CFL_IR_DO_FFC,                   /////FFC
    EN_CFL_IR_ROI,                      /////感兴趣区域
    EN_CFL_IR_SCENE_LOCK,               /////场景锁定
    EN_CFL_SYNC_SIGNAL,                 /////同步信号,仅对PWM1
    EN_CFL_DISPLAY_VIDEO_MODE,          /////视频显示模式
    EN_CFL_RECORD_SNAPHOT,              /////录像过程中手动抓拍
    EN_CFL_END,                         /////

}PWM_FUNC_LIST;

typedef enum {
    IR_COLOR_WHITEHOT = 0,
    IR_COLOR_BLACKHOT,
    IR_COLOR_FUSION,
    IR_COLOR_RAINBOW,
    IR_COLOR_GLOWBOW,
    IR_COLOR_IRONBOW = 5,
    IR_COLOR_GREYRED,
    IR_COLOR_SPEIA,
    IR_COLOR_LAVA,
    IR_COLOR_COLOR,
    IR_COLOR_INSTALERT,
    IR_COLOR_RAIN,
    IR_COLOR_REDHOT,
    IR_COLOR_GREENHOT,
    IR_COLOR_ARCTIC,

    IR_COLOR_HOTMETAL = 100,

    IR_COLOR_WHITEHOT_ISO = 200,
    IR_COLOR_BLACKHOT_ISO,
    IR_COLOR_FUSION_ISO,
    IR_COLOR_RAINBOW_ISO,
    IR_COLOR_GLOWBOW_ISO,
    IR_COLOR_IRONBOW_WHITEHOT_ISO,
    IR_COLOR_IRONBOW_BLACKHOT_ISO,
    IR_COLOR_SPEIA_ISO,
    IR_COLOR_MIDRANGE_WHITEHOT_ISO,
    IR_COLOR_MIDRANGE_BLACKHOT_ISO,
    IR_COLOR_ICEFIRE_ISO,
    IR_COLOR_RAINBOWHC_ISO,
    IR_COLOR_REDHOT_ISO,
    IR_COLOR_GREENHOT_ISO2RANGE,
    IR_COLOR_ARCTIC_BLACKHOT_ISO,

    IR_COLOR_END,
}IR_COLOR_LUT_TYPE;


typedef enum
{
    IR_SCENE_DEFAULT = 0,
    IR_SCENE_LINEAR,
    IR_SCENE_SEAORSKY,
    IR_SCENE_OUTDOOR,
    IR_SCENE_INDOOR,
    IR_SCENE_MANUAL,
    IR_SCENE_CUSTOM1,
    IR_SCENE_CUSTOM2,

    IR_SCENE_MARITIME,
    IR_SCENE_SAR,
    IR_SCENE_FIRE,
    IR_SCENE_AGRICULTURE,
    IR_SCENE_INSPECTION,
    IR_SCENE_WDR,
    IR_SCENE_CONTRAST,

    IR_SCENE_END,
}IR_SCENE_TYPE;

typedef enum {
    RECORD_MODE_VIDEO = 0,
    RECORD_MODE_STILL_CAPTURE,
}RECORD_MODE_TYPE;

typedef enum
{
    RECORD_STOP = 0,
    RECORD_START,
    RECORD_STATUS_END,
}RECORD_STATUS_TYPE;


typedef enum
{
    IR_ZOOM_X100 = 0,
    IR_ZOOM_X200,
    IR_ZOOM_X400,
    IR_ZOOM_END,
}IR_ZOOM_TYPE;

typedef enum
{
    VISIBLE_ZOOM_X100 = 0,
    VISIBLE_ZOOM_X200,
    VISIBLE_ZOOM_X400,
    VISIBLE_ZOOM_END,
}VISIBLE_ZOOM_TYPE;

//typedef enum
//{
//    IR_DO_FFC_0 = 0,
//    IR_DO_FFC_1,
//    IR_DO_FFC_END,
//}IR_DO_FFC_TYPE;

typedef enum
{
    IR_ROI_0 = 0,
    IR_ROI_10,
    IR_ROI_25,
    IR_ROI_33,
    IR_ROI_50,
    IR_ROI_66,
    IR_ROI_75,
    IR_ROI_100,
    IR_ROI_END,
}IR_ROI_TYPE;

//typedef enum
//{
//    IR_SCENE_LOCK_DISABLE = 0,
//    IR_SCENE_LOCK_ENABLE,
//    IR_SCENE_LOCK_END,
//}IR_SCENE_LOCK_TYPE;

//typedef enum {
//    SYNC_SIGNAL_VAL = 1,
//    SYNC_SIGNAL_END,
//}SYNC_SIGNAL_TYPE;


typedef enum {
    DISPLAY_VIDEO_MODE_IR = 0,
    DISPLAY_VIDEO_MODE_VISIBLE,
    DISPLAY_VIDEO_MODE_PIP,
    DISPLAY_VIDEO_MODE_END,
}DISPLAY_VIDEO_MODE_TYPE;


typedef enum {
    PWM_STATE_LOW = 0,
    PWM_STATE_HIGH,
    PWM_STATE_MED,
    PWM_STATE_END,
}PWM_STATE;

typedef enum _MAVLINK_SERIAL_BAUD{
    MAVLINK_SERIAL_BAUD_57600   = 57600,
    MAVLINK_SERIAL_BAUD_115200  = 115200,
    MAVLINK_SERIAL_BAUD_230400  = 230400,
}MAVLINK_SERIAL_BAUD;


typedef struct
{
    int func;                           //通道功能，定义为PWM_FUNC_LIST
    int statenum;                       //通道档位  2-高低档 3-高中低3档 其他无效
    int state[PWM_STATE_END];           //状态值
}VSNET_PWM_INFO;//通道档位信息

typedef struct
{
    int	baudrate;                       //波特率
    int reserve[3];                     //保留
}VSNET_MAVLINK_INFO;//通道档位信息

typedef struct
{
    int reserve[4];                     //保留
}VSNET_CVBS_INFO;//通道档位信息

#ifndef PWM_NUM_MAX
#define PWM_NUM_MAX 4
#endif

typedef struct
{
    int                 protype;            //配置类型标记,定义为SERIAL_PROTOCOL_TYPE
    VSNET_PWM_INFO      pwm[PWM_NUM_MAX];   //PWM模式时使用
    VSNET_MAVLINK_INFO	mavlink;            //MAVLINK模式时使用
    VSNET_CVBS_INFO     cvbs;               //CVBS模式时使用
}VSNET_SERIAL_PROTOCOL;
/***********************串口配置 end***************************/

typedef enum {
    ALARM_LINK_NONE = 0,
    ALARM_LINK_NOTIFY = (1 << 0), //联动通知
    ALARM_LINK_SNAPSHOT = (1 << 1), //联动抓拍
    ALARM_LINK_RECORD = (1 << 2), //联动录像
    ALARM_LINK_END,
}TEMP_ALARM_LINK_TYPE;

typedef struct
{
    int             enH;                //高温报警使能
    int             tempH;              //高温 (℃)
    int             enL;                //低温报警使能
    int             tempL;              //低温 (℃)
    int             linkaction;        //联动动作, 见TEMP_ALARM_LINK_TYPE定义

    int             snapshots;          //报警联动抓拍连续抓拍次数(最多连拍3张)
    //int             recordduration;     //报警联动录像时长
    //int             indicator;          //指示
    int             reserve[4];         //保留
}VSNET_TEMP_ALARM_PARAM;

typedef struct {
    int     TempUnit;               //温度单位，0 - C, 1 - F
    int     OSDTempMeter;           //点测温 0 - 不使能, 1 - 中心点测温，2-场景测温
    int     Emissivity;             //辐射率，范围50 ~ 100(uranus:0~100)
    int     AirTemp;                //大气温度，范围-50 ~ 127℃(uranus:-50~327)
    int     SkyCond;                //天空条件，范围0 ~ 100(uranus:0 25 75)
    int     Humidity;               //湿度，范围0 ~ 100(uranus:30 45 60)
    int     SubjectDistance;        //目标距离，范围0 ~ 2000 米(uranus:500)
    int     reserve[4];             //保留
}VSNET_RADIOMETRY_PARAM;

// 0:FFF, 1:TIFF, 2:RAW, 3:JPG, 4:LCR
typedef enum 
{
    VSNET_CAPTURE_TYPE_FFF = 0,                   
    VSNET_CAPTURE_TYPE_TIFF = 1,                   
    VSNET_CAPTURE_TYPE_RAW = 2,
    VSNET_CAPTURE_TYPE_JPG = 3,
    VSNET_CAPTURE_TYPE_LCR = 4,
    VSNET_CAPTURE_TYPE_END                                
} VSNETCAPTURETYPE;

#if defined(GE01_FACTORY)
/*digital output******************/
typedef enum 
{
    VSNET_DIGITAL_OUTPUT_CMOS          = 0x00,                    
    VSNET_DIGITAL_OUTPUT_14BIT_RAW     = 0x01,                                 
    VSNET_DIGITAL_OUTPUT_LVDS          = 0x02,                   
    VSNET_DIGITAL_OUTPUT_TYPE_END                               
} VSNETIRDIGITALOUTPUTTYPE;

typedef enum 
{
    VSNET_DIGITAL_OUTPUT_CMOS_DISABLE      = 0x00,
    VSNET_DIGITAL_OUTPUT_BT656             = 0x01,                            
    VSNET_DIGITAL_OUTPUT_CMOS_8BIT_YUV     = 0x02,
    VSNET_DIGITAL_OUTPUT_CMOS_14BIT_RAW    = 0x03,
    VSNET_DIGITAL_OUTPUT_CMOS_MODE_END                               
} VSNETIRDIGITALOUTPUTCMOSMODE;
typedef struct
{
    unsigned char m_type;//参见 VSNETIRDIGITALOUTPUTTYPE
    unsigned char m_mode;
}VSNETIRDIGITALOUTPUT;  //红外机芯数字视频输出模式

/*sensor temp******************/
typedef enum 
{
    VSNET_FPA_TEMP_X100                    = 0x00,
    VSNET_HOUSEING_TEMP_X100               = 0x01,                            
    VSNET_SHUTTER_TEMP_X100                = 0x02,
    VSNET_SENSOR_TEMP_END                  = 0x08                               
} VSNETIRSENSORTYPE;

typedef struct
{
    unsigned int    m_typemask;                     
    unsigned short  m_tempC[VSNET_SENSOR_TEMP_END];//单位C，参见 VSNETIRSENSORTYPE
}VSNETIRSENSORTEMP;  //红外机芯传感器温度
/*FFC PARAMS******************/
typedef enum 
{
    VSNET_FFC_MANUAL           = 0x00,//手动                     
    VSNET_FFC_AUTO             = 0x01,//自动                                
    VSNET_FFC_EXTERNAL         = 0x02,//外部                 
    VSNET_FFC_MODE_END                                
} VSNETIRFFCMODE;

typedef struct
{
    unsigned char   m_mode;         //参见 VSNETIRFFCMODE
    unsigned char   m_reserve[3];   //保留
    unsigned int    m_periods;      //自动快门，时间周期，单位帧数
    unsigned int    m_tempdelta;    //自动快门，温度差，单位0.1C
}VSNETIRFFCPARAMS;  //红外快门参数
/*GSK & GFID 电压******************/
typedef struct
{
    unsigned char   m_type;         //0-GSK,1-GFID
    unsigned char   m_reserve;      //保留
    unsigned short  m_voltage;      //电压，单位0.1V; GSK-(1.7~3.6)V, GFID-(1~2.9)V
}VSNETIRREGISTERVOLTAGE;  //红外探测器寄存器电压参数
/*降噪/时域滤波******************/
typedef enum
{
    VSNET_DENOISE_TIME_DOMAIN_FLITERING = 0x00,///<  Time domain filtering   
    VSNET_DENOISE_OTHER = 0x01,
    VSNET_DENOISE_TYPE_END,
} VSNETIRDENOISETYPE;
/*降噪/时域滤波******************/
typedef struct
{
    unsigned char   m_enable;       //0-不使能，1-使能
    unsigned char   m_type;         //降噪算法,VSNETIRDENOISETYPE
    unsigned char   m_value;        //滤波系数，范围0~100
    unsigned char   m_reserve;   //保留
}VSNETIRDENOISEPARAMS;  //红外降噪参数，又称时域滤波
/*测温区域选择******************/
typedef struct
{
    unsigned char   m_index;        //区域索引，最大可支持6个区域，从0开始，范围0 ~5
    unsigned char   m_reserve[3];   //保留
}VSNETIRTEMPREGIONS;//红外测温区域选择

/*写FLASH******************/
typedef enum 
{
    VSNET_FLASH_TYPE_K                     = 0x00,                   
    VSNET_FLASH_TYPE_B                     = 0x01,                   
    VSNET_FLASH_TYPE_BLIND                 = 0x02,
    VSNET_FLASH_TYPE_SENSOR                = 0x03,
    VSNET_FLASH_TYPE_FPGA_FW               = 0x04,
    VSNET_FLASH_TYPE_END                                
} VSNETFLASHTYPE;

typedef struct
{
    unsigned char   m_type;         //参见 VSNETFLASHTYPE
    unsigned char   m_index;        //索引
    unsigned char   m_reserve[2];   //保留
}VSNETIRWRITEFLASH;//红外写FLASH

typedef struct
{
    unsigned char   m_HighToLowTempThreshold;//[50, 160], 单位C
    unsigned char   m_HighToLowPopulationThreshold;//[0, 100]
    unsigned char   m_HLowToHighTempThreshold;// [50, 160], 单位C
    unsigned char   m_LowToHighPopulationThreshold;// [0, 100]
}VSNETIRGAINSWITCHPARAMS;//红外自动增益切换

typedef struct
{
    unsigned short   m_CINT;///< 积分电容，单位 0.1PF
    unsigned short   m_TINT;///< 积分时间,，单位PSYNC周期
}VSNETIRGAININTERGRATIONPARAMS;//红外增益积分参数

typedef struct{
	char m_privatestr[128];//私有信息预留128bytes 
	//信息格式:ID_年_月_日_时_分_秒_经度_纬度_高度_海拔_GPS移动速度_GPS移动方向_保留1_保留2_保留3
}VSNETCDUSR_INFO;//M10创动客户定制

typedef struct
{
    unsigned int        m_sd1_space;        //unit: Mb 剩余容量
    unsigned int        m_sd1_total_space;  //unit: Mb 总容量
} VSNETCDUSR_MSDSTATUS;//M10创动客户定制
#endif

/* 温度对比报警参数 */
typedef struct
{
    int                	m_enable;           // function enable
	short				m_rgn[2];	        // 对比的区域
    int                 m_source;           // 报警来源，0:max, 1:min, 2:avg
    int                 m_typethreshold;    // 0: >m_tempthreshold, 1: <m_tempthreshold
    float               m_tempthreshold;    // TempAlarm Threshold
    int                 m_singlehost;       // label of center for uploading alarm signal
    unsigned char       m_record[16];       // relate to recording
    unsigned char       m_out[8];           // relate to output	1:ON, 0：OFF
    unsigned char       m_enpreno[16];      // relate to preset point
    unsigned char       m_preno[16];        // number of preset point to be called
    unsigned char       m_capjpeg[16];      // relate to capturing
    TIMELIST            m_timelist;         // detection time table define ETI_TIME_DAYTYPE
} VSNETTEMPDIFFALARMPARAM;

//测温类型
typedef enum
{
    VSNET_TEMPTYPE_REGION = 0,
    VSNET_TEMPTYPE_POINT,
    VSNET_TEMPTYPE_LINE,
    VSNET_TEMPTYPE_END
}VS_TEMPTYPE;

/* 测温区域参数 */
typedef struct
{
    int m_temptype[REGIONTEMPNUM];                  //VS_TEMPTYPE
    VSNETREGIONTEMPAREA m_region[REGIONTEMPNUM];    //区域测温参数
}VSNETREGIONTEMPPARAM_EX;

//昼夜切换模式
typedef enum
{
    VSNET_DAYNIGHTMODE_AUTO = 0,            //自动
    VSNET_DAYNIGHTMODE_TIME,                //按时间
    VSNET_DAYNIGHTMODE_MANUAL,              //手动
    VSNET_DAYNIGHTMODE_END
}VSNET_DAYNIGHTMODE;

//自动触发方式
typedef enum
{
    VSNET_DAYNIGHTTRIG_LEVEL_LOWDAY = 0,    //电平
    VSNET_DAYNIGHTTRIG_VALUE_HIGHDAY,       //阈值
    VSNET_DAYNIGHTTRIG_END
}VSNET_DAYNIGHTTRIG;

// 昼夜切换参数
typedef struct
{
    int                 m_mode;             // VSNET_DAYNIGHTMODE
    int                 m_trig;             // VSNET_DAYNIGHTTRIG，自动切换时有效
    int                 m_day;              // 白天阈值，取值范围0~255，自动切换阈值触发时有效
    int                 m_night;            // 夜晚阈值，取值范围0~255，自动切换阈值触发时有效
    VSNET_DAYNIGHTTIME  m_daynighttime[2];  // 按时间切换时有效
    int                 m_ircut;            // 0:白天，1:黑夜
    int                 m_color2black;      // 0:彩色，1:黑白
    int                 m_lamp;             // 补光灯，1:打开，0:关闭
}VSNET_DAYNIGHTPARAM;

typedef struct
{
    char                m_osdstr[32];
}VSNET_REGIONOSD;

// 区域测温osd参数
typedef struct
{
    VSNET_REGIONOSD     m_rgnosd[REGIONTEMPNUM];
}VSNET_REGIONOSDPARAM;

// 调色板参数
typedef enum
{
    VSNET_COLOUR_HOTMETAL                = 0,//热金属
    VSNET_COLOUR_RAINBOW                 = 1,//彩虹
    VSNET_COLOUR_WHITEHOT                = 2,//黑白(白热)
    VSNET_COLOUR_BLACKHOT                = 3,//黑热
    VSNET_COLOUR_GLOBOW                  = 4,
    VSNET_COLOUR_IRONBOW1                = 5,
    VSNET_COLOUR_IRONBOW2                = 6,
    VSNET_COLOUR_SEPIA                   = 7,
    VSNET_COLOUR_COLOUR1                 = 8,
    VSNET_COLOUR_COLOUR2                 = 9,
    VSNET_COLOUR_ICEFIRE                 = 10,
    VSNET_COLOUR_RAIN                    = 11,
    VSNET_COLOUR_REDHOT                  = 12,
    VSNET_COLOUR_GREENHOT                = 13,
    VSNET_COLOUR_GREYRED                 = 14,
    VSNET_COLOUR_LAVA                    = 15,
    VSNET_COLOUR_INSTALERT               = 16,
    VSNET_COLOUR_ARCTIC                  = 17,
   
    VSNET_COLOUR_END
}VSNET_COLORMAP;

typedef struct
{
    int                 m_osd_enable;        //全局IROSD叠加使能开关 0:关闭 1:开启
    int                 m_ir_temp_enable;    //红外全局测温叠加使能 0:关闭 1:开启
    int                 m_ir_param_enable;   //红外全局测温参数叠加使能 0:关闭 1:开启，无效
    int                 m_ir_strip_enable;   //红外伪彩色条叠加使能 0:关闭 1:开启，无效
    int                 m_ir_cursor_enable;  //红外高低温光标叠加使能 0:关闭 1:开启
}VSNETIROSD2VISPARAM;//注: 区域测温叠加及光标叠加由m_osd_enable控制!

/****************智能分析相关参数 start******************/
#define VSNET_MAX_POINT_NUM          15   
#define VSNET_MAX_DEFENSE_NUM        4   

typedef struct
{
    int     m_x;
    int     m_y;
}VSNET_SMART_ANALYSIS_POINT;

//屏蔽区域、智能分析检测区域
typedef struct
{
    int                         m_point_num;  //多边形，最多15边形15个点
    VSNET_SMART_ANALYSIS_POINT  m_reg[VSNET_MAX_POINT_NUM];
}VSNET_SMART_ANALYSIS_CHECKREGPARAM;

//屏蔽区域
typedef struct
{
    VSNET_SMART_ANALYSIS_CHECKREGPARAM  m_shield_reg[VSNET_MAX_DEFENSE_NUM];
}VSNET_SMART_ANALYSIS_SHIELDREGPARAM;


//过滤目标
typedef struct
{
    int     m_maxsize_w;     //目标过滤最大尺寸宽
    int     m_maxsize_h;     //目标过滤最大尺寸高     
    int     m_minsize_w;     //目标过滤最小尺寸宽
    int     m_minsize_h;     //目标过滤最小尺寸高
}VSNET_SMART_ANALYSIS_TARGETFILTERPARAM;

//高级参数
typedef struct
{
    int     m_stable_enable;             //扰动使能(稳像)
    int     m_sensitive;                 //灵敏度(0 - 100)，数值越大，灵敏度越高
    int     m_bkgd_flush_speed;          //每隔多少帧更新1次背景
    int     m_target_rectangle_enable;   //目标矩形框使能
    int     m_reserve[4];                //保留
}VSNET_SMART_ANALYSIS_ADVANCEPARAM;

//警戒线
typedef struct
{
    int                         m_enable;       //警戒线使能
    VSNET_SMART_ANALYSIS_POINT  m_start_point;
    VSNET_SMART_ANALYSIS_POINT  m_end_point;
    int                         m_direction;    //  0: 向左(B->A) 1: 向右(A->B) 2: 双向(A<->B)
}VSNET_SMART_ANALYSIS_LINEPARAM;

typedef struct
{
    VSNET_SMART_ANALYSIS_LINEPARAM  m_line[VSNET_MAX_DEFENSE_NUM];  
}VSNET_SMART_ANALYSIS_CORDONPARAM;

//智能分析检测相关参数(进入区域、离开区域、物品遗留、物品搬移)
typedef struct
{
    int                                 m_enable;    //使能
    VSNET_SMART_ANALYSIS_CHECKREGPARAM  m_region[VSNET_MAX_DEFENSE_NUM];
}VSNET_SMART_ANALYSIS_INFOPARAM;

typedef enum
{
    EN_SM_ANAL_CORDON = 0,
    EN_SM_ANAL_REGIONENTRY,
    EN_SM_ANAL_REGIONLEAVE,
    EN_SM_ANAL_GOODSLEFT,
    EN_SM_ANAL_GOODSMOVE,
    EN_SM_ANAL_MAX,
};

/*智能分析结构*/
typedef union
{
	VSNET_SMART_ANALYSIS_CORDONPARAM    m_cordon;
    VSNET_SMART_ANALYSIS_INFOPARAM      m_smart_analysis_info;
}VSNET_SMART_ANALYSIS;

typedef struct
{
	int                     m_analysistype;//类型 
	VSNET_SMART_ANALYSIS    m_analysis;
}VSNET_SMART_ANALYSIS_CONFIGPARAM;
/****************智能分析相关参数 end******************/

typedef struct
{
    float               m_wintemp_offset;       ///<窗口温度补偿
}VSNETWINCALIBPARAM;/*窗口补偿参数，用于温度校准*/

//sensor版本号
typedef struct
{
	unsigned char m_sensor_version[8];//版本号  十进制  从低到高显示  显示需要自行添加'.' 如 1.2.3.4.5.6.7.8
}VSNETSENSORVERSION;

#endif// __VSNET_STRUCTDEF_H__

