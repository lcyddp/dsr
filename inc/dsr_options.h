#ifndef DSR_OPTIONS_H
#define DSR_OPTIONS_H

#include <stdint.h>

int createRREQMsg(uint8_t *buf, uint8_t length, uint8_t id, uint8_t target);
int createRREPMsg(uint8_t *buf, uint8_t length, uint8_t *addr_list, uint8_t addr_list_len);
int createRERRMsg(uint8_t *buf, uint8_t length, uint8_t err_type, uint8_t source, uint8_t target);
int createAREQMsg(uint8_t *buf, uint8_t length, uint8_t id);

#endif /* DSR_OPTIONS_H */
