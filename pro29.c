#include<stdio.h>
#include<conio.h>
void main()
{
int n[10],i;
printf("the character array ");
for(i=0;i<10;i++)
{
scanf("%c",&n[i]);
}
for(i=0;i<=10;i++)
{
if((n[i]>='0')&&(n[i]<='9'))
{
printf("the numbers are %d:",n[i]);
}
}
}
