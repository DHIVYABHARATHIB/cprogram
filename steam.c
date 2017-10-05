#includestdio.h>
#include<conio.h>
void main()
{
int t1,t2,rem,,num,temp,i;
printf("enter the number");
scanf("%d%d",&t1,&t2);
printf("%d%d",t1,t2);
for(i=t1+1;i<=t2;i++)
{
temp=i;
num=0;
while(temp!=0)
{
rem=(temp%10);
num+=rem*rem*rem;
temp/=10;
}
if(i=num)
{
printf(%d",i)
}
}
}
