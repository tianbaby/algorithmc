//
//  main.c
//  scanf缓冲区小练习
//
//  Created by 田月 on 15/11/20.
//  Copyright (c) 2015年 hold on. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch,ch2;
    printf("input a char:\n");
    scanf("%c",&ch);
    getchar();//拿出scanf缓冲区的换行符
    scanf("%c",&ch2);
    printf("ch = %c\n",ch);
    printf("ch2 = %c\n",ch2);

    return 0;
}
