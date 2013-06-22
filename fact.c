#include<stdio.h>
#include<stdlib.h>

int main()
{
  int  i;
  int  result = 1;

  scanf("%d", &i);

  while(i > 0)
  {
    result *= i;
    i--;
  }
  
  printf("%d", result);
  return 0;
}
