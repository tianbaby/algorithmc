//
//  main.c
//  2冒泡排序
//
//  Created by 田月 on 15/11/16.
//  Copyright (c) 2015年 hold on. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a[100],i,j,t,n;
    
    scanf("%d",&n); //输入一个数n,表示接下来有n个数
    
    for (i=1;i<=n;i++)   // 循环读入n个数到数组a中
        
        scanf("%d",&a[i]);
    // 冒泡的核心部分
    
    for(i=1;i<=n-1;i++)  //n个数排序，只用进行n-1趟
    {
        for (j=1;j<=n-i;j++)
        {
            if (a[j]<=a[j+1])  //比较大小并交换
            {   t=a[j];a[j]=a[j+1];a[j+1]=t; }  //按照由大到小排序
        }
    }
    for (i=1;i<=n;i++)
        printf("%d",a[i]);
    
    
            
    
        return 0;
}
