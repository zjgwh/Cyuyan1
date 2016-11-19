#include<stdio.h>

void main()
{
float x,y;                        /*定义两个实数,也就是带小数点的数*/
printf("请输入第一个实数:");    /*用PRINTF语句输出提示信息*/
scanf("%f",&x);                         /*用SCANF语句接受一个整数,并把该 整数送给X*/
printf("请输入第二个实数:");
scanf("%f",&y);
printf("你输入的两个实数为:%f和%f\n其和为:%f\n",x,y,x+y);
printf("其差为:%f\n",x-y);
printf("其积为:%f\n",x*y);
}