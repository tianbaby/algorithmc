//
//  main.c
//  队列的学习
//
//  Created by 田月 on 15/11/19.
//  Copyright (c) 2015年 hold on. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;
    int i;
    //初始化队列
    head = 1;
    tail = 10; //队列中已经有9个元素了，tail指向队尾的后一个位置
    while (head<tail)
    {
        //打印队首并将队首出队
        printf("%d",q[head]);
        head++;
        
        //先将新队首的数添加到队尾
        q[tail]=q[head];
        tail++;
        //再将队首出队
        head++;
    }
    

    
    return 0;
}
