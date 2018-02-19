#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],sum=0,i;
printf("enter the array");
for(i=0;i<=5;i++)
{
printf("\n the elments of array is %d",i);
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
sum=sum+a[i];
}
printf("the sum of array elemnt is %d",sum);
}
