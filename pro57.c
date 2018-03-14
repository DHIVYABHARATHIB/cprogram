#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
printf("\n enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("\n yes");
}
else
{
printf("no");
}
}
