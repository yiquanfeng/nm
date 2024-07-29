//
// Created by yiquanfeng on 24-7-29.
//

#include "Kine.h"
#include "servo.h"

node arm_all = {67,0};
node chess_1 = {35,79};
node chess_2 = {67,79};
node chess_3 = {0,0};
node chess_4 = {0,0};
node chess_5 = {67,47};
node chess_6 = {0,0};
node chess_7 = {0,0};
node chess_8 = {0,0};
node chess_9 = {0,0};


void Arm_Move(double x,double y)
{
    double angle_2,angle_1,angel_base; //three angle
    double dealt_x = x - arm_all.x;
    double dealt_y = y - arm_all.y;
    double dis_line = sqrt(dealt_x * dealt_x + dealt_y * dealt_y);
    double dis_hig = HEIGHT;
    angel_base = 90.0 + Rad_To_Angle(atan(dealt_x / dealt_y));
    Servo_angle(angel_base,1);

}