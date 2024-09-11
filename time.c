#include<stdio.h>
int main()
{
  int num, h, m, s;
  printf("enter a number");
  scanf("%d", &num);
  h=num/3600;
  m=(num-h*3600)/60;
  s=(num-3600*h-60*m);
  printf("time is %d hour, %d min, %d sec",h, m, s);
}  