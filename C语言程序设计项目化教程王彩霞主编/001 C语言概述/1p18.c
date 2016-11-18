#include<stdio.h>
void main()
{
int x,y;
printf("请诲一个整数:");    /*用PRINTF语句输出提示信息*/
scanf("%d",&x);             /*用SCANF语句接受一个整数,并把该 整数送给X*/
printf("请输入第一个整数:");
scanf("%d",&y);
printf("你输入的两个整数为%d,%d,和为:%d",x,y,x+y);
}