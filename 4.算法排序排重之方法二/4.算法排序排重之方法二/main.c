//
//  main.c
//  4.算法排序排重之方法二
//
//  Created by 田月 on 15/11/18.
//  Copyright (c) 2015年 hold on. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[101],n,i,j,t;
    
    scanf("%d",&n); //读入n
    for(i=1;i<=n;i++)   //循环读入n个ISBN号
        scanf("%d",&a[i]);
    
    //开始冒泡排序
    for (i=1; i <= n-1; i++) {
        for (j=1; j <= n-1; j++) {
            if (a[j]>a[j+1]) {
                t= a[j];a[j]= a[j+1];a[j+1]=t;
            }
            
            
        }
    }
    printf("%d",a[1]); //输出第一个数
    
    for(i=2;i<=n;i++)
    {
        if (a[i]!= a[i-1])
            printf("%d",a[i]);
    }
    return 0;
}
