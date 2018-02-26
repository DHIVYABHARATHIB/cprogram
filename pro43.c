#include<stdio.h>
#include<string.h>
void main()
{
char n[100];
int i;
printf("enter the string");
scanf("%s",&n);
for(i=0;n[i]!='\0';i++)
{
if(i%2==0)
{
printf("the even string is %s",n[i]);
}
else
{
printf("the odd string is %s",n[i]);
}
}
}

