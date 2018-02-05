#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
if((r%2)!==0)
printf("the odd digits is %d",r);
n=n/10;
}
}
