#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,t;
printf("enter the number");
scanf("%d",&n);
m=n*n;
t=(n)^2;
if(m==t)
{
printf("its a perfect square");
}
else
{
printf("not a perfect square");
}
}
