//
// Created by yiquanfeng on 24-7-29.
//

#ifndef KINE_H
#define KINE_H

#define ARM_1 104
#define ARM_2 141
#define ARM_3 0
#define BASE 47
#define HEIGHT 90 //固定高度

#include <stdlib.h>
// #include "servo.h"
#include <math.h>

typedef struct node
{
    unsigned int x;
    unsigned int y;
}node;

//node arm_all;
// node chess_1;
// node chess_2;
// node chess_3;
// node chess_4;
// node chess_5;
// node chess_6;
// node chess_7;
// node chess_8;
// node chess_9;

void Arm_Move(double x,double y);
void Arm_Exe();

#endif //KINE_H
