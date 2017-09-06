#include<stdio.h>
#include<conio.h
void main()
{
int n, s=0,t,r;
printf("enter the number");
scanf("%d",&n);
r=n;
while(n!=0)
{
t=n%10;
s=s*10+t;
n/=10;
}
if(r==s)
{
printf("number is palindrome");
}
else
{
printf("number is not palindrome");
}
}
