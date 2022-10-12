#ifndef __MSG_QUEUE_CFG__
#define __MSG_QUEUE_CFG__

// ----MSG_TYPE----
// Logger <---> Web UI
// CAMERA CONFIG
#define TYPE_CAMERA_CFG		1
#define TYPE_CAMERA_CFG_RES	2

// IMAGE_HASH
#define TYPE_IMAGE_HASH_REQ	3
#define TYPE_IMAGE_HASH		4
#define TYPE_IMAGE_HASH_RES	5

// Verifier <--> Server
#define TYPE_CID                6
#define TYPE_CID_RECV           7
#define TYPE_VERIFIED_RSLT	8
#define TYPE_VERIFIED_RSLT_RECV 9
//-------------------------

// ----MSGQ KEY----
// CAMERA CONFIG
#define CAMERA_CFG_MQ		1129
#define CAMERA_CFG_RES_MQ	1130

// IMAGE_HASH
#define IMAGE_HASH_REQ_MQ	1131
#define IMAGE_HASH_MQ		1132
#define IMAGE_HASH_RES_MQ	1133


#define CID_MQ			1133
#define CID_RECV_MQ		1134
#define VERIFIED_RSLT_MQ	1135
#define VERIFIED_RSLT_RECV_MQ	1136
//-------------------------

// ----CAMERA_CFG VALUE----
#define VGA                     0x01
#define VGA_WIDTH		640
#define VGA_HEIGHT		480

#define HD                      0x02
#define HD_WIDTH		1280
#define HD_HEIGHT		1080

#define CIF                     0x03
#define CIF_WIDTH		352
#define CIF_HEIGHT		288

#define CAMERA_CFG_RES		0x01
//-------------------------
#define YUV420              0x21
//-------------------------


// ----IMAGE_HASH VALUE----
#define IMAGE_HASH_REQ		0x01
//-------------------------


// ----IMAGE_HASH VALUE----
#define IMAGE_HASH_REQ		0x01
//-------------------------

// ----BUFF SIZE----
#define CAMERA_CFG_BUFF_SIZE		6
#define CAMERA_CFG_RES_BUFF_SIZE       	1

#define IMAGE_HASH_REQ_BUFF_SIZE	1
#define IMAGE_HASH_BUFF_SIZE		64
#define IMAGE_HASH_RECV_BUFF_SIZE	1

#define CID_BUFF_SIZE			24
#define CID_RECV_BUFF_SIZE		1
#define VERIFIED_RSLT_BUFF_SIZE		100
#define VERIFIED_RSLT_RECV_BUFF_SIZE 	1
//-------------------------

struct camera_cfg_msg_data{
	long data_type;
	unsigned char data_buff[CAMERA_CFG_BUFF_SIZE];
};

struct  camera_cfg_res_msg_data{
	long data_type;
	unsigned char data_buff[CAMERA_CFG_RES_BUFF_SIZE ];
};

struct Image_hash_req_msg_data{
	long data_type;
	unsigned char data_buff[IMAGE_HASH_REQ_BUFF_SIZE];
};

struct Image_hash_msg_data{
	long data_type;
	char data_buff[IMAGE_HASH_BUFF_SIZE];
};

struct Image_hash_recv_msg_data{
	long data_type;
	unsigned char data_buff[IMAGE_HASH_RECV_BUFF_SIZE];
};

struct CID_msg_data{
	long data_type;
	char data_buff[CID_BUFF_SIZE];
};

struct CID_recv_msg_data{
	long data_type;
	unsigned char data_buff[CID_RECV_BUFF_SIZE];
};

struct Verified_Result_msg_data{
	long data_type;
	unsigned char data_buff[CID_RECV_BUFF_SIZE];
};

#endif
