#ifndef __LAUCAMSEARCH_H__
#define __LAUCAMSEARCH_H__

#define CAMSEAR_APIIMPORT  extern  "C" __declspec(dllexport)

//初始化,开始使用时调用
CAMSEAR_APIIMPORT BOOL __stdcall CAMSEAR_Startup();
//停止使用，结束使用时调用
CAMSEAR_APIIMPORT BOOL __stdcall CAMSEAR_Cleanup();
/*开始搜索
参数:
m_wait:等待时间(毫秒)
notify：通知回调函数；
参数如下：
devtype:设备类型，1：视频服务器，2：解码器；
m_sername:服务器名称;
m_url:IP地址；
m_webport：WEB服务器端口；
m_localport：本地端口
*/
CAMSEAR_APIIMPORT BOOL __stdcall CAMSEAR_Searchcam(int m_wait,
					void(WINAPI *notify)(int devtype,char *m_sername,char *m_url,BYTE m_mac[6],WORD m_webport,WORD m_localport,
					char *m_submask,char *m_getway,char *m_multiip,char *m_dns,WORD m_multiport,int channel),char *localurl = NULL);

//兼容老版本的函数
CAMSEAR_APIIMPORT BOOL __stdcall CAMSEAR_Searchcam_old(int m_wait,
					void(WINAPI *notify)(int devtype,char *m_sername,char *m_url,BYTE m_mac[6],WORD m_webport,WORD m_localport,
					char *m_submask,char *m_getway,char *m_multiip,char *m_dns,WORD m_multiport,int channel),char *localurl = NULL);

/*
设置服务器地址:
m_mac: MAC地址，只是作为服务器标识用
m_sername:服务器名称
m_url:服务器地址
m_submask:子网掩码
m_getway:网关
m_multiip：多播地址
m_webport:WEB服务器端口
m_localport:本地服务端口
m_multiport:多播端口
*/
CAMSEAR_APIIMPORT BOOL __stdcall CAMSEAR_SearchSeturl(BYTE m_mac[6],char *m_sername,
													  char *m_url,char *m_submask,char *m_getway,char *m_multiip,char *m_dns,
													  WORD m_webport,WORD m_localport,WORD m_multiport,char *localurl = NULL);

/*
重启服务器，更改服务器地址后，需要重启才能生效
*/
CAMSEAR_APIIMPORT BOOL __stdcall CAMSEAR_SearchReset(BYTE m_mac[6],char *localurl = NULL);
CAMSEAR_APIIMPORT int  __stdcall GetEthernetInfo(void(WINAPI *notify)(char *localip));
CAMSEAR_APIIMPORT BOOL __stdcall CAMSEAR_SearchRestore(BYTE m_mac[6],char *localurl = NULL);

CAMSEAR_APIIMPORT int   __stdcall CAMSEAR_BadPixel(char *url, unsigned short *badpixelcount, unsigned short *badpixelcountmin,
                                                   unsigned short *badpixelcountmax);
#endif//__LAUCAMSEARCH_H__
