#include<stdio.h>
void main()
{
int i,n,f=1;
printf("enter the number");
scanf("%d",&n);
if(n<0)
{
printf("factorial not exist");
}
else
{
for(i=1;i<=n;i++)
{
f*=i;
}
printf("enter the factorial is %d",f);
}
}
