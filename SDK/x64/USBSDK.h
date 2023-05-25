#pragma once
#include "USBSDK_def.h"
#include "InfEntity.h"

#ifdef MY_WIN32
#include "CaptureVideo.h"
#elif defined MY_LINUX
#include "linux/v4l2core.h"
#include "linux/serialport.h"
#endif // MY_WIN32

#include<list>
#include <vector>
using namespace std;

typedef void(*VideoCallBack)(unsigned char *pBuffer, int iWidth, int iHeight, void *pContext);
typedef void(*TempCallBack)(unsigned char *pBuffer, int iWidth, int iHeight, void *pContext);


USBSDK_API IRNETHANDLE sdk_create();

//parameter:
//p sdk_create return value
//hWnd: Window handle
//return value:
//true: Success     false:  fail
USBSDK_API int sdk_loginDevice(IRNETHANDLE hHandle, HWND hWnd);

//Release
//parameter:
//p sdk_create return value
USBSDK_API void ReleaseSDK(IRNETHANDLE p);

//Search device
//parameter:
//devList device info struct
USBSDK_API int SearchDevice(IRNETHANDLE p, DeviceLst &devList);

//Open device
//parameter:
//p sdk_create return value
//iGetCurSel: deviceID        portIndx: Serial number
//return value:
//true: Success     false:  fail
USBSDK_API bool OpenDevice(IRNETHANDLE p, int iGetCurSel, int portIndx);

//Close device
//parameter:
//p sdk_create return value
USBSDK_API void CloseDevice(IRNETHANDLE p);

#ifdef MY_WIN32
//Read USB interface board version
USBSDK_API int ReadUSBVersion(IRNETHANDLE p/*, char* version*/);
//Determine the type of communication(Serial port or get/set zoom)
//parameter:
//p sdk_create return value
//return value:
//true: Serial communication     false:  get/set zoom
USBSDK_API bool CommunicationType(IRNETHANDLE p);
#endif // MY_WIN32

//Determine the type of core
//parameter:
//p sdk_create return value
//return value:
//0: Read failed    1: LT Temperature measurement type     2£ºMicroIII Temperature measurement type    3£ºMicroIII Imaging     4:AT200F    5:AT21F    6:other
USBSDK_API int CoreType(IRNETHANDLE p);

//Determine the type of temperature measurement
//return value:
//0: Read failed   1: Human body temperature measurement   2: Industrial temperature measurement
USBSDK_API int TempMeasureType(IRNETHANDLE p);

//Communication read command interface(Serial port or get zoom)
//parameter:
//p sdk_create return value
//buf: command   pLen: command length
//return value:
//0:  success   other:  fail
USBSDK_API int ReadHandle(IRNETHANDLE p, char* buf, int* pLen);

//Communication write command interface(Serial port or set zoom)
//parameter:
//p sdk_create return value
//buf: return command   pLen: command length
//return value:
//0:  success   other:  fail
USBSDK_API int WriteHandle(IRNETHANDLE p, char* buf, int len);

//Register image callback
USBSDK_API void  __stdcall SetVideoCallBack(IRNETHANDLE p, VideoCallBack pVideoCallBack, void *pContext);

//Register temperature callback
USBSDK_API void  __stdcall SetTempCallBack(IRNETHANDLE p, TempCallBack pTempCallBack, void *pContext);

//calibration
//parameter:
//p sdk_create return value
//iCoreType: core type  1:LT  2 OR 3: MicroIII  4: AT200F
//type: type
//return value:
//0:  success   -1:  fail
USBSDK_API int sdk_shutter_correction(IRNETHANDLE p, int iCoreType, int type);

/**
* @brief Pseudo color switch
*@param[in] iType core type  1:LT   2 OR 3: MicroIII  4: AT200F
* @param[in] color_plate Pseudo color type
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_set_color_plate(IRNETHANDLE p, int iType, int color_plate);

/**
* @brief Read Pseudo color
* @param[in] p sdk_create return value
*@param[in] iType core type  1:LT  other: MicroIII
* @param[out] color_plate Pseudo color type
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_get_color_plate(IRNETHANDLE p, int iType, int* color_plate);

/**
* @brief read sn & pn
* @param[in] p sdk_create return value
* @param[out] strSN SN
* @param[out] iLenSN SN length
* @param[out] strPN PN
* @param[out] iLenPN PN length
* @return 0:success, -1:fail  1:not support
*/
USBSDK_API int sdk_get_SN_PN(IRNETHANDLE p, char *strSN, int *iLenSN, char* strPN, int *iLenPN);

/**
* @brief read FPA temp
* @param[in] p sdk_create return value
* @param[out] fTemp FPA temp
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_get_FPA_temp(IRNETHANDLE p, float *fTemp);

/**
* @brief read camera temp
* @param[in] p sdk_create return value
* @param[out] fTemp camera temp
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_get_camera_temp(IRNETHANDLE p, float *fTemp);

/**
* @brief  read Area array width
* @param[in] p sdk_create return value
* @param[out] iValue Area array width
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_get_width(IRNETHANDLE p, int *iValue);

/**
* @brief read Area array height
* @param[in] p sdk_create return value
* @param[out] iValue Area array height
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_get_height(IRNETHANDLE p, int *iValue);

/**
* @brief  read wtr status
* @param[in] p sdk_create return value
* @param[out] iStatus wtr status 0:off  1:on
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_get_wtr_status(IRNETHANDLE p, int* iStatus);

/**
* @brief  set wtr status
* @param[in] p sdk_create return value
* @param[in] iStatus wtr status 0:off  1:on
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_set_wtr_status(IRNETHANDLE p, int iStatus);

/**
* @brief  set wtr low Threshold
* @param[in] p sdk_create return value
* @param[in] iThreshold wtr low Threshold * 10000
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_set_wtr_low_threshold(IRNETHANDLE p, int iThreshold);

/**
* @brief  Get wtr low Threshold
* @param[in] p sdk_create return value
* @param[out] iThreshold wtr low Threshold * 10000
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_get_wtr_low_threshold(IRNETHANDLE p, int* iThreshold);

/**
* @brief  set wtr high Threshold
* @param[in] p sdk_create return value
* @param[in] iThreshold wtr high Threshold * 10000
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_set_wtr_high_threshold(IRNETHANDLE p, int iThreshold);

/**
* @brief  Get wtr high Threshold
* @param[in] p sdk_create return value
* @param[out] iThreshold wtr high Threshold * 10000
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_get_wtr_high_threshold(IRNETHANDLE p, int* iThreshold);

/**
* @brief Environment variable settings
* @param[in] p sdk_create return value
* @param[in] envir_data Environment variable struct
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_set_envir_param(IRNETHANDLE p, envir_param envir_data);

USBSDK_API int SetReflect(IRNETHANDLE p, signed int i32value);
USBSDK_API int SetAirTemp(IRNETHANDLE p, signed int i32value);
USBSDK_API int SetHumidity(IRNETHANDLE p, signed int i32value);
USBSDK_API int SetEmiss(IRNETHANDLE p, signed int i32value);
USBSDK_API int SetDistance(IRNETHANDLE p, signed int i32value);

/**
* @brief read Environment variable
* @param[in] p sdk_create return value
* @param[in] envir_data Environment variable struct
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_get_envir_param(IRNETHANDLE p, envir_param* envir_data);

USBSDK_API int GetReflect(IRNETHANDLE p, signed int* p32value);
USBSDK_API int GetAirTemp(IRNETHANDLE p, signed int* p32value);
USBSDK_API int GetHumidity(IRNETHANDLE p, signed int* p32value);
USBSDK_API int GetEmiss(IRNETHANDLE p, signed int* p32value);
USBSDK_API int GetDistance(IRNETHANDLE p, signed int* p32value);

/**
* @brief Environment variables take effect
* @param[in] p sdk_create return value
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_envir_effect(IRNETHANDLE p);

/**
* @brief read temp unit
* @param[in] p sdk_create return value
* @param[out] ucUnit temp unit
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_read_temp_unit(IRNETHANDLE p, unsigned char* ucUnit);

/**
* @brief set temp unit
* @param[in] p sdk_create return value
* @param[in] ucUnit temp unit
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_set_temp_unit(IRNETHANDLE p, unsigned char ucUnit);

/**
* @brief Read the coefficients of the temperature analytical formula
* @param[in] p sdk_create return value
* @param[in] gain gain status  0:high gain   1:low  gain
* @param[out] param1 param1
* @param[out] param2 param2
* @return 0:success, -1:fail   2:Temperature measurement movement, but does not support change instructions  	3:Imaging	  4:Without this gain
*/
USBSDK_API int sdk_get_temp_coefficient(IRNETHANDLE p, int gain, short* param1, short* param2);

/**
* @brief Compute edge detection images
* @param[in] p sdk_create return value
* @param[in] imageSrc   original iamge data
* @param[out] imageDst 
* @param[in] width
* @param[in] height
* @param[in] level  the edge image intensity, the setting range is 0~100, the larger the value, the sparser the edge detection information
* @return 0:success, -1:fail 
*/
USBSDK_API int sdk_edge_detect(IRNETHANDLE p, unsigned char* imageSrc, unsigned char* imageDst, int width, int height, int level);

/**
* @brief Compute edge-enhanced images
* @param[in] p sdk_create return value
* @param[in] imageSrc   original iamge data
* @param[out] imageDst
* @param[in] width
* @param[in] height
* @param[in] level  the edge image intensity, the setting range is 0~100, the larger the value, the sparser the edge detection information
* @return 0:success, -1:fail
*/
USBSDK_API int sdk_edge_enhace(IRNETHANDLE p, unsigned char* imageSrc, unsigned char* imageDst, int width, int height, int level);
