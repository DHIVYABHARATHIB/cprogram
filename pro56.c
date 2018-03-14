#include<stdio.h>
include<conio.h>
void main()
{
int n1,n2,i;
printf("\n enter the two number");
scanf("%d %d",&n1,&n2);
for(i=2;i<=n2;i++)
{
if(n1%i==0&&n2%i==0)
{
printf("\n the number is %d",i);
}
}
}
