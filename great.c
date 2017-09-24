#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[10],great;
printf("enter the ten number");
scanf("%d",&a[i]);
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
great=a[0];
for(i=0;i<10;i++)
{
if(a[i]>great)
{
great=a[i];
}
}
printf("the greatest ten number is d",great);
}



