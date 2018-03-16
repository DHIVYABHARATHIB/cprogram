#include<stdio.h>
void main()
{
int a[10],i,min;
for(i=0;i<10;i++)
{
printf("\n the elements in array %d",i);
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
min=a[0];
if(min>a[0])
{
min=a[i+1];
break;
}
}
printf("\n the second smallest number is %d",min);
}
