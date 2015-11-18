//
//  main.c
//  小练习.飞机乘客
//
//  Created by 田月 on 15/11/16.
//  Copyright (c) 2015年 hold on. All rights reserved.
//

#include <stdio.h>
struct plane{
    
    int id;
    int *p;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    struct plane planes[3];
    planes[0].id = 3;
    int plane0_array[] =  {500,30,31,4,100,200,700,900,711,712};
    planes[0].p  = plane0_array;
    
    planes[1].id = 1;
    int plane1_array[] = {701,702,304,507,100,300,910,301,401,990};
    planes[1].p = plane1_array;
    
    planes[2].id = 6;
    int plane2_array[] = {34,45,47,34,34,43,34,45,78,93};
    planes[2].p = plane2_array;
    
    
    
    for (int i = 0 ; i < 3; i++) {
        int *p = planes[i].p;
        
        for (int j = 0;j < 9 ;j++) {
            for (int k = 0; k < 9; k++) {
                if (p[k] > p[k + 1]) {
                    int t = p[k];
                    p[k] = p[k + 1];
                    p[k + 1] = t;
                }
            }
        }
    }
    
    
    
    int tong_plane[7],i;
    
    for (i = 0; i<= 6; i++)//由6个桶中初始化为0
    {
        tong_plane[i] = -1;
    }
    
    for (i=0; i<=2; i++) {
        int id = planes [i].id ;
        tong_plane[id] = i ;
    }
    
    for (i=0; i<7; i++)
    {
        if (tong_plane[i] == -1) {
            
        } else {
            int index = tong_plane[i];
            printf("\nid:%d",planes[index].id);
            printf(" array:");
            for (int j = 0;j < 10; j++) {
                printf("%d\t",planes[index].p[j]);
            }
            
        }
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}
