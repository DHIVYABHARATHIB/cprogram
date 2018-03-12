#include<stdio.h>
#include<conio.h>
void main()
{
int low,high,i,flag;
printf("\n enter the number");
scanf("%d %d",&low,&high);
while(low<high)
{
flag=0;
    for(i=2;i<low/2;++i)
    {
if(low%i==0)
{
    flag=1;
    break;
}
}
if(flag==0)
    printf("the value %d",low);
    low++;
}}
}
