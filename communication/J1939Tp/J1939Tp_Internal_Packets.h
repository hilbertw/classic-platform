#ifndef J1939TP_PACKETS_INTERNAL_H_
#define J1939TP_PACKETS_INTERNAL_H_

#define CM_PGN_VALUE_1			0x00
#define CM_PGN_VALUE_2			0xCE
#define CM_PGN_VALUE_3			0x00
#define CM_PGN_BYTE_1			5
#define CM_PGN_BYTE_2			6
#define CM_PGN_BYTE_3			7
#define CM_BYTE_CONTROL			0


/* Cts message */
#define CTS_SIZE 				8
#define CTS_BYTE_CONTROL		CM_BYTE_CONTROL
#define CTS_BYTE_NUM_PACKETS	1
#define CTS_BYTE_NEXT_PACKET	2
#define CTS_BYTE_SAE_ASSIGN_1	3
#define CTS_BYTE_SAE_ASSIGN_2	4
#define CTS_BYTE_PGN_1			CM_PGN_BYTE_1
#define CTS_BYTE_PGN_2			CM_PGN_BYTE_2
#define CTS_BYTE_PGN_3			CM_PGN_BYTE_3
#define CTS_START_SEQ_NUM		0
#define CTS_CONTROL_VALUE		17

#define BAM_RTS_SIZE				8
#define BAM_RTS_BYTE_CONTROL		CM_BYTE_CONTROL
#define BAM_RTS_BYTE_LENGTH_1		1
#define BAM_RTS_BYTE_LENGTH_2		2
#define BAM_RTS_BYTE_NUM_PACKETS	3
#define BAM_RTS_BYTE_SAE_ASSIGN		4
#define BAM_RTS_BYTE_PGN_1			CM_PGN_BYTE_1
#define BAM_RTS_BYTE_PGN_2			CM_PGN_BYTE_2
#define BAM_RTS_BYTE_PGN_3			CM_PGN_BYTE_3
#define BAM_CONTROL_VALUE		32
#define RTS_CONTROL_VALUE		16

/* Dt message */
#define DT_SIZE 				8
#define DT_DATA_SIZE 			7
#define DT_BYTE_SEQ_NUM			0
#define DT_BYTE_DATA_1			1
#define DT_BYTE_DATA_2			2
#define DT_BYTE_DATA_3			3
#define DT_BYTE_DATA_4			4
#define DT_BYTE_DATA_5			5
#define DT_BYTE_DATA_6			6
#define DT_BYTE_DATA_7			7

#define DT_PGN_VALUE_1			0x00
#define DT_PGN_VALUE_2			0xEB
#define DT_PGN_VALUE_3			0x00

/* EndOfMsgAck message */
#define ENDOFMSGACK_SIZE					8
#define ENDOFMSGACK_BYTE_CONTROL			CM_BYTE_CONTROL
#define ENDOFMSGACK_BYTE_TOTAL_MSG_SIZE_1	1
#define ENDOFMSGACK_BYTE_TOTAL_MSG_SIZE_2	2
#define ENDOFMSGACK_BYTE_NUM_PACKETS		3
#define ENDOFMSGACK_BYTE_SAE_ASSIGN			4
#define ENDOFMSGACK_BYTE_PGN_1				CM_PGN_BYTE_1
#define ENDOFMSGACK_BYTE_PGN_2				CM_PGN_BYTE_2
#define ENDOFMSGACK_BYTE_PGN_3				CM_PGN_BYTE_3
#define ENDOFMSGACK_CONTROL_VALUE			19

#define CONNABORT_SIZE				8
#define CONNABORT_BYTE_CONTROL			0
#define CONNABORT_BYTE_SAE_ASSIGN_1		1
#define CONNABORT_BYTE_SAE_ASSIGN_2		2
#define CONNABORT_BYTE_SAE_ASSIGN_3		3
#define CONNABORT_BYTE_SAE_ASSIGN_4		4
#define CONNABORT_BYTE_PGN_1			CM_PGN_BYTE_1
#define CONNABORT_BYTE_PGN_2			CM_PGN_BYTE_2
#define CONNABORT_BYTE_PGN_3			CM_PGN_BYTE_3

#define CONNABORT_CONTROL_VALUE		32

#define J1939TP_T4_TIMEOUT_MS	1050
#define J1939TP_T3_TIMEOUT_MS	1250
#define J1939TP_T2_TIMEOUT_MS	1250
#define J1939TP_T1_TIMEOUT_MS	750

#endif
