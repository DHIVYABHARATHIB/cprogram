# include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,f=0;
printf("enter the two intervals");
scanf("%d%d",&j,&k);
while(j<k)
{
f=0;
for(i=2;i=j/2;i++)
{
if(j%i==0)
{
flag=1;
break;
}
}
if(f==0)
{
printf("j value is");
++j;
}
}
}




