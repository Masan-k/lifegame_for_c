#include <stdio.h>
#include <time.h>
int main(void)
{
 //const int ROW_MAX = 10;
 //const int COL_MAX = 10;
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

 int col,row;
 for(row=0; row<10; row++){
   for(col=0; col<10; col++){
     printf("%d",cell[row][col]);
   }
   printf("\n");
 }
 return 0;
}
