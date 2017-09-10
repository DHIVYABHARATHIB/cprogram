#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,m1=0,m2=1,t;
printf("enter the number ");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
print("%d",m1);
t=m1+m2;
m1=m2;
m2=t;
}
}
