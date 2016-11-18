#include <stdio.h>
void main()
{
int x;
char name[40],y;
float z;
printf("请输入:\n(提示一次性输入整数,串,小数 ,单字符)\n");

scanf("%d%s%f%c",&x,name,&z,&y);   //一次性输入整数,串,小数 ,单字符

printf("x=%d,name=%s,y=%c,z=%.2f\n",x,name,y,z);
}