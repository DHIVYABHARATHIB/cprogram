#include<stdio.h>
#include<conio.h>
void main()
{
char str1[20],str2[20];
int i,temp;
printf("enter the first string");
scanf("%c",&str1[20]);
printf("enter the second string");
scanf("%c",str2[20]);
for(i=0;(str1='/0')(str2='/0');i++)
{
if(str1[i]=str2[i])
{
temp=1;
break;
}
}
if(temp==0)
{
printf("both string are same");
}
else
{
printf("both string are not same");
}
}
