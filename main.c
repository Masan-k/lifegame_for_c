#include <stdio.h>
int main(void)
{
  int year;

  printf("year = ");
  scanf("%d", &year);

  if(year % 4 == 0) {
    printf("%d年はうるう年です！\n", year);
  }else{
    printf("%d年はうるう年ではありません！\n", year);
  }
  return 0;
}
