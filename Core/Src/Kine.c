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
    // Servo_angle(angel_base,1);
    double m = atan((HEIGHT - BASE) / dis_line);//直角三角形的顶角
    double hypo = sqrt((HEIGHT - BASE) * (HEIGHT - BASE) + dis_line * dis_line);//可优化
    // double n = acos((ARM_1 * ARM_1 + hypo * hypo - ARM_2 * ARM_2) / 2 * ARM_1 * hypo);//余弦定理
    double temp = (pow(ARM_1,2) + pow(hypo,2) - pow(ARM_2,1)) / (2 * ARM_1 * hypo);
    double n = acos(temp);
    angle_1 = 180 - Rad_To_Angle(m) - Rad_To_Angle(n);
    angle_2 = 180 - Rad_To_Angle(acos((ARM_1 * ARM_1 + ARM_2 * ARM_2 - hypo * hypo) / (2 * ARM_1 * ARM_2)));
    Servo_angle(angel_base,1);
    Servo_angle(angle_1,2);
    Servo_angle(angle_2,3);
}

// void Arm_Exe()
// {
//     switch ()
// }