#include<stdio.h>
#include<conio.h>
void main()
{
int g,n=o,i;
printf("enter the value");
scanf("%d",&g);
for(i=1;i<=g;i++)
{
if(g%i==0)
{
printf("prime");
}
else
{
printf("composite number");
}
}
