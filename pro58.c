#include<stdio.h>
void main()
{
int n,flag=0,i;
printf("\n enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0&&i%2!=0)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("\n the number is %d",i);
}
}
