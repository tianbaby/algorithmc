//
//  main.c
//  桶排序
//
//  Created by 凉鞋 on 15/11/14.
//  Copyright © 2015年 凉鞋. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[11],i,j,k;
    
    for(i=0;i<=10;i++)
        a[i]=0;         // 初始化为0
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&j); //把每一个数读到变量j中
        a[j]++;         //进行计数
    }
    
    for(i=0;i<10;i++)   //测试github
        for(k=1;k<=a[i];k++)
            printf("%d",i);
            
    return 0;
}
