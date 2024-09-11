#include <stdio.h>
int main()
{
  int a,b,c,d;
  printf("\nEnter The Number: ");
  scanf("%d, %d,%d",&a,&b,&c);
  d=a>b?a>c?a:c:b>c?b:c;
  printf("the value of d is %d", d);
  return 0;
}