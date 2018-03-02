#include<stdio.h>
void main()
{
int a[5],i,k,min;
for(i=0;i<5;i++)
{
printf("enter the array element is %d",i);
scanf("%d",&a[i]);
}
printf("k value");
scanf("%d",&k);
for(i=k;i<5;i++)
{
  if((i%2)!=0)
{
  printf("the odd number is %d",i);
}
}
}

