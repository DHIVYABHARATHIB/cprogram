#include<stdio.h>
#include<conio.h>
void main()
{
  int n,k,s=1;
  printf("the two no");
  scanf("%d%d",&n,&k);
  while(k!=0)
  {
    s=s*n;
    --k;
  }
  printf("the value is %d",s);
}
