//
//  main.c
//  第二天作业
//
//  Created by 田月 on 15/11/21.
//  Copyright (c) 2015年 hold on. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    1、接受用户从键盘上输入的两个字符，然后输出他们
//    char ch1,ch2;
//    scanf("%c,%c",&ch1,&ch2);
//    printf("ch1= %c,ch2 = %c\n",ch1,ch2);
//    2、接受用户从键盘上输入的两个双精度浮点数，然后输出他们
//    double d1;double  d2;
//    scanf("%lf,%lf",&d1,&d2);
//    printf("d1= %lf,d2 = %lf\n",d1,d2);
//
//    3、接受用户从键盘上输入的两个单精度浮点数，然后输出他们(保留两位小数)
//    float f1,f2;
//    scanf("%f,%f",&f1,&f2);
//    printf("f1= %.2f,f2 = %.2f\n",f1,f2);
//    
//    4、用户从键盘上输入两个整数，然后输出他们和
//    int  n1,n2;
//    scanf("%d,%d",&n1,&n2);
//    printf("n1+n2= %d\n",n1+n2);
//    
//    
//    5、用户从键盘上输入两个整数，然后输出他们差
//    int  n1,n2;
//    scanf("%d,%d",&n1,&n2);
//    printf("n1-n2= %d\n",n1-n2);
//    
//    
//    6、用户从键盘上输入两个整数，输出他们的商
//    int  n1,n2;
//    scanf("%d,%d",&n1,&n2);
//    printf("n1/n2= %d\n",n1/n2);
//    
//    
//    7、用户从键盘上输入两个整数，输出他们的余数     有问题
//    int  n1,n2;
//    scanf("%d,%d",&n1,&n2);
//    printf("n1除以n2的余数是 %d\n",n1%n2);
//
//    
//    9. 用户输入矩形的长和宽,求出矩形的面积和周长,并将结果显示在屏幕上.
//    
//    面积: 长*宽       周长  （长+宽)*2
//    int length,width;
//    scanf("%d,%d",&length,&width);
//    printf("面积 = %d\n",length*width);
//    printf("周长 ＝ %d\n",length*2+width*2);
//    
//    
//    10. 要求用户输入圆形的半径,求出圆形的面积和周长,并将结果显示在屏幕上.
//    面积:pi*r*r 周长: 2*pi*r  PI的值取3.14
//    int r;  //定义一个半径
//    float pi = 3.14;
//    printf("用户输入圆形的半径：\n");
//    scanf("%d",&r);
//    printf("面积 = %.2f\n",pi*r*r);
//    printf("周长 ＝ %.2f\n",2*pi*r);
//    return 0;
//    
//    11. 编程实现计算几天(如46天)是几周零几 天. 天数要求用户 从控制台输入
//    请用户输入1个天数 计算用户输入的天数是几周零几天。
//    int day;  //定义一个天数
//    printf("用户输入一个天数：\n");
//    scanf("%d",&day);
//    printf("%d天是%d周零%d天\n",day,day/7,day%7);
    
    
    
    
//    12. 请用户从控制台输入1个秒数,求用户输入的秒数是几天几小时几分钟几秒?
//    int days,hours,minutes,second1,second2;
//    printf("请输入一个秒数:\n");
//    scanf("%d",&second1);
//    second2 = second1%60;
//    minutes = second1/60;
//    hours = second1/(60*60);
//    days = second1/(60*60*24);
//    printf("共计%d天%d时%d分%d秒\n",days,hours,minutes,second2);
//    13. 编一个程序，定义圆周率Pi=3.14, vbhnjk
//    要求用户输入圆柱的底圆的半径和圆柱的高 求出圆柱的体积。
//    圆柱的体积:Pi*圆的半径的平方*圆柱的高
//    float Pi  = 3.14;
//    int r,h;
//    printf("请输入半径，高\n");
//    scanf("%d,%d",&r,&h);
//    printf("圆柱的体积是：%f\n",Pi*r*r*h);
    
    
    
//    14. 裤子的单价是78.8元. 衬衫的单价是45.6元。
//    输入顾客购买的裤子数量 和 衬衫的数量
//    显示顾客应该付多少钱.
    int pants,shirts;
    float total ;
    printf("购买的裤子数量和衬衫的数量:\n");
    scanf("%d,%d",&pants,&shirts);
    total = pants*78.8 + shirts*45.6;
    printf("应付%f元钱\n",total);
  
    return 0;
}
