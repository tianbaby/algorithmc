//
//  main.c
//  5队列的学习
//
//  Created by 田月 on 15/11/21.
//  Copyright (c) 2015年 hold on. All rights reserved.
//

#include <stdio.h>


struct queue
    {
        int data[100]; //队列的主体，用来存储内容
        int head;   //
        int tail;
    };
int main(){
    struct queue  q;
    int i;
    //初试化队列
    q.head = 1;
    q.tail = 1;
    for (i=1; i<=9; i++) {
            //依次向队列中插入9个数
        scanf("%d",&q.data[q.tail]);
        q.tail++;
    }
    while (q.head<q.tail) {
        //打印队首并将队首出队
        printf("%d",q.data[q.head]);
        q.head++;
        
        //先将新队首的数添加到队尾
        q.data[q.tail]= q.data[q.head];
        q.tail++;
        // 再将队首出队
        q.head++;
    }
    
    
    
    return 0;
}
