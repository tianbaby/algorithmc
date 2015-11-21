//
//  main.c
//  小练习
//
//  Created by 田月 on 15/11/21.
//  Copyright (c) 2015年 hold on. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char a,b;
    
    printf("请输入第一个字符: ");
    
    scanf("%c",&a);
    getchar();
    
    printf("请输入第二个字符: ");
    
    scanf("%c",&b);
    
    printf("输出第一个字符: %c\n",a);
    
    printf("输出第二个字符: %c\n",b);
    return 0;
}
