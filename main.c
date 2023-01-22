#include <stdio.h>
#include <time.h>
#include <unistd.h>
int getNextCell(int r,int c,int cell[10][10]){

  int cellL,cellR,cellU,cellD;
  int cellLD,cellRD,cellRU,cellLU;
  if(r == 0){
    //左上
    if(c == 0){
      cellR = cell[0][1];
      cellD = cell[1][0];
      cellRD = cell[1][1];
      return cellR + cellD + cellRD;

    //上中
    }else if(c < 9){
      cellL = cell[0][c-1];
      cellLD = cell[1][c-1];
      cellR = cell[0][c+1];
      cellD = cell[1][c];
      cellRD = cell[1][c+1];
      return cellL + cellLD + cellR + cellD + cellRD; 
    
    //右上
    }else{
      cellL = cell[0][c-1];
      cellLD = cell[1][c-1];
      cellD = cell[1][c];
      return cellL + cellLD + cellD; 
    }
  //2行目〜最終行-1行
  }else if(r < 9){
    //1列目
    if(c == 0){
      cellU = cell[r-1][c];
      cellRU = cell[r-1][c+1];
      cellR = cell[r][c+1];
      cellRD = cell[r+1][c+1];
      cellD = cell[r+1][c];
      return cellU + cellRU + cellR + cellRD + cellD ; 
    //2~9列目
    }else if(c < 9){
      cellL = cell[r][c-1];
      cellLU = cell[r-1][c-1];

      cellU = cell[r-1][c];
      cellRU = cell[r-1][c+1];
      cellR = cell[r][c+1];
      cellRD = cell[r+1][c+1];
      cellD = cell[r+1][c];
      cellLD = cell[r+1][c-1];
      return cellL + cellLU + cellU + cellRU + cellR + cellRD + cellD + cellLD; 
    }else{
      //10列目
      cellL = cell[r][c-1];
      cellLU = cell[r-1][c-1];

      cellU = cell[r-1][c];
      cellD = cell[r+1][c];
      cellLD = cell[r+1][c-1];
      return cellL + cellLU + cellU + cellD + cellLD; 
    }
  //最終行
  }else{
    //1列目
    if(c == 0){
      cellU = cell[r-1][c];
      cellRU = cell[r-1][c+1];
      cellR = cell[r][c+1];
      return cellU + cellRU + cellR; 
    //2~9列目
    }else if(c < 9){
      cellL = cell[r][c-1];
      cellLU = cell[r-1][c-1];

      cellU = cell[r-1][c];
      cellRU = cell[r-1][c+1];
      cellR = cell[r][c+1];
      return cellL + cellLU + cellU + cellRU + cellR; 
    }else{
      //10列目
      cellL = cell[r][c-1];
      cellLU = cell[r-1][c-1];

      cellU = cell[r-1][c];
      return cellL + cellLU + cellU; 
    }
  }
}
int main(void)
{
  int cell[10][10] =\
      {{0,0,0,0,0,0,0,0,1,0}\
      ,{0,0,0,0,0,0,0,0,1,0}\
      ,{0,0,0,0,0,0,0,0,1,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,0,0,0}\
      ,{0,0,0,0,0,0,0,1,1,1}\
      ,{0,0,0,0,0,0,0,1,0,0}\
      ,{0,0,0,0,0,0,0,0,1,0}};

  int newCell[10][10];
     
  clock_t start = clock();
  int dispSec = -1;
  int col,row;

  while(1){
    clock_t end = clock();
    int sec = (double)(end - start) / CLOCKS_PER_SEC;
    if(sec != dispSec){
      dispSec = sec;
      printf("\033[2J");   /* 画面をクリア */
      printf("\033[1;1H"); /* カーソルを移動 */
      printf("-------------------\n");
      printf("経過時間 : %d\n",sec);
      printf("-------------------\n");
     for(row=0; row<10; row++){
        for(col=0; col<10; col++){
          if(getNextCell(row,col,cell) == 3){
            newCell[row][col] = 1;
          }else if(getNextCell(row,col,cell) == 2){
            newCell[row][col] = cell[row][col];
          }else{
            newCell[row][col] = 0;
          }
        }
      }
      //char offValue[] = '□';
      //char onValue[] = '■';
      //char rowValue[100];

      for(row=0; row<10; row++){
        for(col=0; col<10; col++){
          //if(newCell[row][col] == 0){
            //writeCell[] = writeCell[] + '□';
          //}else{
            //writeCell[] = writeCell[] + '■';
          //}
          printf("%d",newCell[row][col]);
          cell[row][col] = newCell[row][col];
        }
        printf("\n");
        //printf("%s\n",writeCell);
      }

    }
  }
  return 0;
}
