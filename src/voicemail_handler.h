/*
 * voicemail_handler.h
 *
 *  Created on: Dec 4, 2017
 *      Author: pchero
 */

#ifndef SRC_VOICEMAIL_HANDLER_H_
#define SRC_VOICEMAIL_HANDLER_H_

#include <evhtp.h>

void htp_get_voicemail_users(evhtp_request_t *req, void *data);
void htp_get_voicemail_vms(evhtp_request_t *req, void *data);
void htp_get_voicemail_vms_msgname(evhtp_request_t *req, void *data);
void htp_delete_voicemail_vms_msgname(evhtp_request_t *req, void *data);


#endif /* SRC_VOICEMAIL_HANDLER_H_ */