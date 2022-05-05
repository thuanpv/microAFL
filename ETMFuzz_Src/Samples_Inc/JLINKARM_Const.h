/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (C) 2004 - 2005    SEGGER Microcontroller Systeme GmbH      *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File    : JLinkARMDLL.h
Purpose : "C"- level interface of <JLinkARM.dll>
---------------------------END-OF-HEADER------------------------------
*/

#ifndef JLINKARM_CONST_H            //  Avoid multiple inclusion
#define JLINKARM_CONST_H


#include "TYPES.h"

#define STDCALL
typedef void            JLINKARM_LOG                    (const char* sErr);
#define JLINKARM_TIF_SWD               1
#define JLINKARM_HOSTIF_USB   (1 << 0)
#define JLINKARM_HOSTIF_IP    (1 << 1)
#define JLINKARM_RAWTRACE_CMD_START                 0
#define JLINKARM_RAWTRACE_CMD_STOP                  1
//
// ARM_REG
//
typedef enum {
  ARM_REG_R0,                         // Index  0
} ARM_REG;


#define JLINKARM_CM4_REG_R15  15

#endif

/************************** end of file *****************************/
