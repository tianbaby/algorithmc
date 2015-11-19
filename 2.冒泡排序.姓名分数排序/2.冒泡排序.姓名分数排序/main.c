//
//  main.c
//  2.冒泡排序.姓名分数排序
//
//  Created by 田月 on 15/11/16.
//  Copyright (c) 2015年 hold on. All rights reserved.
//

#include <stdio.h>

struct student
{
    char name[21];
    int  score;
}; // 创建一个结构体 用来存储姓名和分数

int main(int argc, const char * argv[]) {
    struct student a[100],t;
      
    int i,j,n;
      
    scanf("%d",&n);  //输入一个数n
     
    for(i=1;i<=n;i++)
        scanf("%s %d",a[i].name,&a[i].score); //循环读入n个人名和分数
    //按分数由高到低排列
    for(i=1;i<=n-1;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            if( a[j].score<=a[j+1].score)
            {
                t=a[j];
                a[j]= a[j+1];
                a[j+1]=t;
            }
        }
    }
    
    for (i=1;i<=n;i++) //输出人名
        printf("%s\n",a[i].name);
    
    return 0;
}
