#include<stdio.h>
#include<conio.h>
void main()
{
int i,d,k;
printf("enter the limit");
scanf("%d",&k);
printf("enter the number");
scanf("%d",&d);
for(i=1;i<=k;i++)
{
if(i%k)
{
printf("%d",i);
}
}
}
