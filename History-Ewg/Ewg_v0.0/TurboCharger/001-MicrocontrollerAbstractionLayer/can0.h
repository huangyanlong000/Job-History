#ifndef CAN0_H_
#define CAN0_H_

/*Load header file*/

#include "SysTick.h"

#include "S32K116.h"
#include "eepromservice.h"

// CCP命令码定义
#define CAN0_IFLAG1_RXF1NEIF            (0x01<<12)

#define CAN_MCR_WUPM_MASK               (1UL << 27)
#define CAN_MCR_WUPE_MASK               (1UL << 26)

#define CAN_NODE_ID         (0x3B8)
#define TJA1044T_STB(x)     (x==0x00)?(0x01):(0x00)

#define CAN0_CTRL1_PRESDIV      (0x00)
#define CAN0_CTRL1_RJW          (0x0B)
#define CAN0_CTRL1_SEG1         (0x03)
#define CAN0_CTRL1_SEG2         (0x03)
#define CAN0_CTRL1_BUSOFFINTER  (0x01)
#define CAN0_CTRL1_ERRORINTER   (0x01)
#define CAN0_CTRL1_PROPSEG      (0x06)

#define CAN0_RAMN0 (0x00 * MSG_BUF_SIZE + 0x00)

/* Msg Buffer Size. (CAN 2.0AB: 2 hdr +  2 data= 4 words)1MB = 4words */
#define MSG_BUF_SIZE        0x04
/* MB for transmitting CAN message*/
#define MB_FIFO_IDX_TX      16u   
/* MB for transmitting CAN message*/
#define MB_FIFO_IDX_RX      6u    
/* MB0~MB5 for FIFO engine*/
#define MB_FIFO_NUM         6u    

typedef struct 
{
    uint32_t id;
    uint8_t  length;
    uint8_t  FramType;
    uint8_t  data[0x08];
    char     HadeRecvdata;
    char     Can0_Error_Flag;
    char     CalibrationDataUpdate;
}CAN0_rxMessage;

typedef struct 
{
    uint32_t id;
    uint8_t  length;
    uint8_t  FramType;
    uint8_t  data[0x08];
    char     cansenddata;
    char     Can0_Error_Flag;
}CAN0_txMessage;

typedef enum 
{
    CAN_FRAME_STANDARD = 0,  // 标准CAN帧，使用11位标识符
    CAN_FRAME_EXTENDED = 1   // 扩展CAN帧，使用29位标识符
}CAN0_Frame_Type;

typedef enum 
{
    CAN0_NO_ERROR = 0x00,        // 无错误
    CAN0_BIT_ERROR,              // 位错误：发送的位与总线上监测到的位不一致
    CAN0_STUFF_ERROR,            // 填充错误：违反位填充规则
    CAN0_CRC_ERROR,              // CRC 错误：计算的 CRC 码与接收到的不一致
    CAN0_FORM_ERROR,             // 格式错误：帧格式不符合 CAN 协议规定
    CAN0_ACK_ERROR,              // 应答错误：发送数据后未收到应答
    CAN0_BUS_OFF_ERROR,          // 总线关闭错误：节点因多次错误进入总线关闭状态
    CAN0_TX_WARNING_ERROR,       // 发送错误警告：发送错误计数器达到警告阈值
    CAN0_RX_WARNING_ERROR,       // 接收错误警告：接收错误计数器达到警告阈值
    CAN0_UNKNOWN_ERROR           // 未知错误
}CAN0_ErrorType;

void CAN0_Init(void);
void CAN0_SendMessage(CAN0_rxMessage *msg);

CAN0_ErrorType CAN0_CheckErrorStatus(void);

char CAN0_ReceiveMessage(CAN0_rxMessage *msg);

#endif
