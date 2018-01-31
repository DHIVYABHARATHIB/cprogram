#include<stdio.h>
#iclude<conio.h>
void main()
{
 int count=0;
char v[50];
printf("enter the charater");
scanf("%s",&v);
if(v=='\n')
{
++count;
printf("the count is %d",count);
}
}
