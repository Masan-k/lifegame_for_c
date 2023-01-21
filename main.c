/*
 * Author: Hiroyuki Chishiro
 * License: 2-Clause BSD
 */
#include <stdio.h>
#include <time.h>
 
int main(void) {
  double total_sec = 10; 
  clock_t start = clock();
  int dispSec = -1;
  printf("------------\n");
  printf("カウント開始\n");
  printf("------------\n");
  for (;;) {
    clock_t end = clock();
    int sec = (double)(end - start) / CLOCKS_PER_SEC;
    if(sec != dispSec){
      printf("%d\n",sec);
      dispSec = sec;
    }
    
    if (sec >= total_sec) {
      break;
    }
  }

  printf("カウント終了（%f秒カウントしました。）\n", total_sec);

  return 0;
}
