#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={10,20,30,40,50,60,70,80,90,100;
int i,max;
max=a[0];
for(i=1;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
}
