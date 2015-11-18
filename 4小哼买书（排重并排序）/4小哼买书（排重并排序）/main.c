//
//  main.c
//  4小哼买书（排重并排序）

//
//  Created by 田月 on 15/11/18.
//  Copyright (c) 2015年 hold on. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
        int a[1001],n,i,t;
        for (i=1; i<=1000; i++)
            a[i]=0; //初始化
        
        scanf("%d",&n); //输入n个数
        for (i=1;i<=n;i++)
        {
            scanf("%d",&t); //把每个ISBN 号读到变量t中
            a[t]= 1;        //标记出现过的ISBN号 (强迫出现的数字都为1,这步是排重）
        }
        
        for(i=1;i<=1000;i++)//
        {
            if (a[i]==1)
                
                printf("%d\t",i);
        }
        
    return 0;
    }
