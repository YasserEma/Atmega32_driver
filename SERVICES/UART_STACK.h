
#ifndef UART_STACK_H_
#define UART_STACK_H_


typedef enum{

stack_status_t push(u8 data);
stack_status_t pop(u8 * pdata);

#endif /* UART_STACK_H_ */