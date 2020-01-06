#pragma once

#include <inttypes.h>

#define RUBI_PROTOCOL_VERSION 0xA001

#define RUBI_BROADCAST1 (0x400)
#define RUBI_BROADCAST2 (0x401)

#define RUBI_ADDRESS_RANGE1_LOW ((uint16_t)0x402) // interrupt
#define RUBI_ADDRESS_RANGE1_HIGH (0x440)

#define RUBI_ADDRESS_RANGE2_LOW (0x441) // no interrupt
#define RUBI_ADDRESS_RANGE2_HIGH (0x4ff)

#define RUBI_LOTTERY_RANGE_LOW (0x480)
#define RUBI_LOTTERY_RANGE_HIGH (0x7ff)

typedef enum
{
    RUBI_MSG_NOMSG         = 0x00,
    RUBI_MSG_BLOCK         = 0x10,
    RUBI_MSG_FIELD         = 0x20,
    RUBI_MSG_FUNCTION      = 0x30,
    RUBI_MSG_INFO          = 0xa0,
    RUBI_MSG_EVENT         = 0xb0,
    RUBI_MSG_COMMAND       = 0xc0,
    RUBI_MSG_LOTTERY       = 0xd0,
    RUBI_MSG_INIT_COMPLETE = 0xe0
} rubi_msg;

#define RUBI_MSG_MASK 0b11110000

#define RUBI_FLAG_BLOCK_TRANSFER 0b00000001
#define RUBI_FLAG_CRC 0b00000010

#define RUBI_INFO_BOARD_NAME 0x01
#define RUBI_INFO_BOARD_VERSION 0x02
#define RUBI_INFO_BOARD_DRIVER 0x03
#define RUBI_INFO_BOARD_DESC 0x04
#define RUBI_INFO_BOARD_ID 0x05

#define RUBI_INFO_ENUM_NAME 0x10
#define RUBI_INFO_ENUM_FIELDS 0x11

#define RUBI_INFO_FIELD_NAME 0x20
#define RUBI_INFO_FIELD_TYPE 0x21
#define RUBI_INFO_SUBFIELDS 0x22
#define RUBI_INFO_SUBFIELDS_C 0x23
#define RUBI_INFO_FIELD_ACCESS 0x24

#define RUBI_INFO_FUNC_NAME 0x30
#define RUBI_INFO_FUNC_ARGS_NAMES 0x31
#define RUBI_INFO_FUNC_ARGS_TYPE 0x32
#define RUBI_INFO_FUNC_OUT_TYPE 0x33
#define RUBI_INFO_FUNC_ARGS_N 0x34

#define RUBI_COMMAND_REBOOT 0x10
#define RUBI_COMMAND_SOFTSLEEP 0x20
#define RUBI_COMMAND_HARDSLEEP 0x30 // not implemented
#define RUBI_COMMAND_HOLD 0x40
#define RUBI_COMMAND_OPERATIONAL 0x50
#define RUBI_COMMAND_WAKE 0x60
#define RUBI_COMMAND_KEEPALIVE 0xB0
#define RUBI_COMMAND_LOTERRY 0xA0

#define RUBI_EVENT_FATAL_ERROR 0x10
#define RUBI_EVENT_INFO 0xA0
#define RUBI_EVENT_WARNING 0xB0
#define RUBI_EVENT_ERROR 0xC0

#define RUBI_ERROR_ASSERT 0x00
#define RUBI_ERROR_USER 0x10