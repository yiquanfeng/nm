//
// Created by yiquanfeng on 24-7-29.
//

#include "servo.h"

#include "stm32f1xx_hal_tim.h"


void Servo_Init()
{
    HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_1);
    HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_2);
    HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_3);
    HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_4);
}

void Servo_angle(double angle,int id)
{
    int compare = 10 + (angle / 180.0 * 40);
    switch (id)
    {
        case 1:
            __HAL_TIM_SetCompare(&htim1,TIM_CHANNEL_1,compare);
            break;
        case 2:
            __HAL_TIM_SetCompare(&htim1,TIM_CHANNEL_2,compare);
            break;
        case 3:
            __HAL_TIM_SetCompare(&htim1,TIM_CHANNEL_3,compare);
            break;
        case 4:
            __HAL_TIM_SetCompare(&htim1,TIM_CHANNEL_4,compare);
            break;
        default:
            break;
    }
}

double Rad_To_Angle(double rad)
{
    return rad / PI * 180.0;
}