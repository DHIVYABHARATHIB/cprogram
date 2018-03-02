#include<stdio.h>
void main()
{
int a[5],i,k,count=0;
for(i=0;i<5;i++)
{
printf("\nenter the array element is %d",i);
scanf("%d",&a[i]);
}
printf("k value");
scanf("%d",&k);
for(i=0;i<5;i++)
{
  if(a[i]==k)
  {
    count++;
  }}
  printf("\n the repitation is %d",count);
}

