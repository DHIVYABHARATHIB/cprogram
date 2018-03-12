#include<stdio.h>
void main()
{
int n,r,sum=0;
printf("\n enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
sum=sum+(r*r);
n=n/10;
}
printf("\n the sum value is %d",sum);
}
