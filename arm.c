#include<stdio.h>
#include<conio.h>
void main()
{
int no,m,t,result=0;
printf(enter the number");
scanf("%d",&no);
m=no;
while(m!==0)
{
t=m%10;
result+=t*t*t;
m=m/10;
}
if(result==number)
{
printf("no is armstrong number");
}
else("no is not armstrong number");
}
}
