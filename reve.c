#include<stdio.h>
#include<conio.h>
void main()
{
int n,r=0,t;
pirntf("enter the number");
scanf("%d",&n);
while(n!=0)
{
t=n%10;
r=r*10+t;
n/=10;
}
printf("r value is");
}
