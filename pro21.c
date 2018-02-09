#include<stdio.h>
const float add = 0.5;
int main(void)
{
      float v;

       printf("Please enter a value to be rounded: ");
       scanf("%f", &v);

       v = v + add;
       v = (int)v;

       printf("The rounded value is %.2f", v);

      return 0;
}
