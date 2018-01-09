#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,t,s,i,d;
printf("enter the two numbers");
scanf("%d%d",&n1&n2);
for(i=n1+1;i<n2;i++)
{
t=i;
d=0;
while(t!=0)
{
s=t%10;
d=s*s*s;
t/=10;
}
if(i=d)
{
printf("%d",i)
}
}
}
