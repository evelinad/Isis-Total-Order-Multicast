/*
+----------------------------------------------------------------------+
| This header file contains the definition of the message formats. |
+----------------------------------------------------------------------+
*/

#ifndef MSG_FORMAT_H
#define MSG_FORMAT_H

#include <stdint.h>

typedef struct {
	uint32_t type;   // must be equal to 1
	uint32_t sender; // the sender’s id
	uint32_t msg_id; // the identifier of the message generated by the sender
	uint32_t data;   // a dummy integer
} DataMessage;

typedef struct {
	uint32_t type;         // must be equal to 2
	uint32_t sender;       // the sender’s id
	uint32_t msg_id;       // the identifier of the message generated by the sender
	uint32_t proposed_seq; // the proposed sequence number
	uint32_t receiver;     // the receiver’s id
} AckMessage;

typedef struct {
	uint32_t type;      // must be equal to 3
	uint32_t sender;    // the sender’s id
	uint32_t msg_id;    // the identifier of the message generated by the sender
	uint32_t final_seq; // the final sequence number assigned by the sender
} SeqMessage;

#endif