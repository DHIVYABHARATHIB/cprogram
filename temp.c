#include<stdio.h>
#include<conio.h>
void main()
{
int num;
int temp,flag;
printf("enter the number");
scanf("%d",&num);
temp=num;
flap=0;
while(temp!=1)
{
if(temp%2==0)
{
flag=1;
break;
}
temp=temp/2;
}
if(flag==0)
{
printf("num is power of two");
}
else
{
printf("num is not power of two");
}
}
