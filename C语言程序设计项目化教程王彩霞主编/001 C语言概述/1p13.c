#include<stdio.h>

void ptStar()
{
printf("****");   //语句书写规定:1,一条完整的语句必须以英文分号结束
}

void ptBye()
{
printf("再见");
}

void main()
{
ptStar();printf("Thank you--丹尼斯-里奇先生!");//2一行可以写多条语句
printf
("大家好");  /*一条语句可以占多行,但在何处断行很重要.比如左侧语句正确.而如下语句就不正确
printf("
大家好")*/
ptStar();
printf("\n");
}
