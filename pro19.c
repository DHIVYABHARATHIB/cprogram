#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int flag,i,length;
printf("enter the string");
scanf("%s",&str);
length=strlen[str];
for(i=0;str[i]<=length;i++)
{
str[i]=str[length-i-1];
flag=1;
break;
}
if(flag)
{
printf("not palindrome");
}
else
{
printf("palindrome");
}
}


