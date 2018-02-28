#include<stdio.h>
void main()
{
int a[10],i,k;
printf("enter the element");
scanf("%d",&k);
for(i=0;i<4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<4;i++)
{
if(a[i]==k)
{
printf("yes");
}
else
{
printf("no");
}
}
}
