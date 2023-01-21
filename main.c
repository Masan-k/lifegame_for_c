#include <stdio.h>
#include <time.h>
int main(void)
{
  int cell[10][10] =\
      {{1,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,9,9}};

  clock_t start = clock();
  int dispSec = -1;
  int col,row;
  for (;;){
    clock_t end = clock();
    int sec = (double)(end - start) / CLOCKS_PER_SEC;
    if(sec != dispSec){
      dispSec = sec;
      printf("\033[2J");   /* 画面をクリア */
      printf("\033[1;1H"); /* カーソルを移動 */
      //puts("\x1b[2J");
      printf("-------------------\n");
      printf("経過時間 : %d\n",sec);
      printf("-------------------\n");
      for(row=0; row<10; row++){
        for(col=0; col<10; col++){
          printf("%d",cell[row][col]);
        }
      printf("\n");
      }
    }
  }
  return 0;
}
