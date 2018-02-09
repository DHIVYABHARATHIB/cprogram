#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char str[10];
  int i,l;
printf("enter the string");
scanf("%s",str);
  l=strlen(str);
  if(l%2==0)
  {
    str[l/2]='*';
  }
  else
  {
    str[(l-1)/2]='*';
  }
  for(i=0;str[i]!='\0';i++)
  {
    printf("the middle element is %c",str[i]);
  }
}
