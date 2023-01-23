#include <iostream>
#include <time.h>
int main(){
  int dispSec = -1;
  int sec = -1;

  clock_t start = clock();    // スタート時間

 //printf("\033[2J");   /* 画面をクリア */
  //printf("\033[1;1H"); /* カーソルを移動 */
  while(1){
    clock_t end = clock();
    sec = (end - start) / CLOCKS_PER_SEC;
    if(dispSec != sec){
      std::cout << "\033[2J";
      std::cout << "\033[1;1H";

      std::cout << "------------" << std::endl;         // int 型動的配列
      std::cout << "カウント開始" << std::endl;         // int 型動的配列
      std::cout << "------------" << std::endl;         // int 型動的配列

      dispSec = sec;
      std::cout << dispSec << std::endl;
    }
  }
}
