#include<stdio.h>
#include<conio.h>
void main()
{
int num,i=1;
printf("enter the number");
scanf("%d",&num);
printf("%d",num)
while(i<=10)
{
printf("%d*%d=%d",num,i,num*i);
++i;
}
}
