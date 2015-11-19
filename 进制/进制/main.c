//
//  main.c
//  进制
//
//  Created by 田月 on 15/11/19.
//  Copyright (c) 2015年 hold on. All rights reserved.
//
//以二进制，八进制，十六进制 输出数字100

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a =100;
    printf("dec = %d,octal = %o,hex = %x\n",a,a,a);
    
    printf("dec = %d,octal = %#o,hex = %#x\n",a,a,a);

    
    return 0;
}
