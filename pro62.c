#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int i,flag=0;
printf("\n enter the string");
scanf("%s %s",&a,&b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=b[i])
{
flag==1;
}
else
{
  flag=0;
}}
if(flag==0)
{
printf("\n yes");
}
else
{
printf("\n no");
}
}
