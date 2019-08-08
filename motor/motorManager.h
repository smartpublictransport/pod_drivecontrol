#ifndef MOTOR_MANAGER_H
#define MOTOR_MANAGER_H

typedef enum {
    OFF = 0,
    IDLE,
    NON_IDLE,
    ERROR
} MOTOR_STATE;

MOTOR_STATE motor_get_status ();
uint32_t motor_get_speed();
uint32_t motor_change_speed(uint32_t s);

#endif
