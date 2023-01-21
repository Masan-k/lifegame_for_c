#include <stdio.h>
int main(void)
{
  int i;
  int count[3] = {0,3,5};

  for (i = 0; i <= 2; i = i+1){
     printf("%d:Hello\n", count[i]);
  }
  return 0;
}
