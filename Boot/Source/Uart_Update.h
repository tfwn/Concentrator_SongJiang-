/************************************************************************************************
*                                   SRWF-6009-BOOT
*    (c) Copyright 2015, Software Department, Sunray Technology Co.Ltd
*                               All Rights Reserved
*
* FileName     : Uart_Update.h
* Description  :
* Version      :
* Function List:
*------------------------------Revision History--------------------------------------------------
* No    Version     Date            Revised By      Item            Description
* 1     V1.0        10/08/2015      Zhangxp         SRWF-6009-BOOT  Original Version
************************************************************************************************/
#ifndef _UART_UPDATE_H_
#define _UART_UPDATE_H_


/************************************************************************************************
*                                   Macro Define Section
************************************************************************************************/
#define UART_ENTER_UPDATE_CMD           0x01                // ���봮����������
#define UART_ENTER_UPDATE_ACK           0x02                // ���봮����������Ӧ��
#define UART_UPDATEING_CMD              0x03                // �����������ݰ�����
#define UART_UPDATEING_ACK              0x04                // �����������ݰ�����Ӧ��

/************************************************************************************************
*                                   Struct Define Section
************************************************************************************************/
// Boot��ز���
typedef struct
{
    uint16 SoftVersion;                                     // ���������汾
    uint16 CodeFilePkgNum;                                  // �����ļ��ܰ���
    uint16 AllPkgCRC1;                                      // У����1
    uint16 AllPkgCRC2;                                      // У����2
    uint16 AllPkgCRC3;                                      // У����3
    uint16 AllPkgCRC4;                                      // У����4
    uint16 CalAllPkgCRC;                                    // ���������У����
    uint16 PkgCounter;                                      // ��������ʱ��������
    uint16 CurPkgNum;                                       // ��ǰ���յİ���
}BOOT_PARAM_STRUCT;


/************************************************************************************************
*                            Variable Declare Section
************************************************************************************************/


/************************************************************************************************
*                            Function Declare Section
************************************************************************************************/
extern void Uart_UpdateProcess(void);

#endif

/***************************************End of file*********************************************/

