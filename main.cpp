#include <cstdio>
#include <time.h>
#include <iostream>

class GameTime {
  private:
    int dispSec;
    clock_t start;

  public:
    //コンストラクタ
    GameTime(){
      start = clock();
      dispSec = -1;
    }

    void updateTime(){
      int sec;
      clock_t end = clock();
      sec = (end - start) / CLOCKS_PER_SEC;

      if(dispSec != sec){
        std::cout << "\033[2J";
        std::cout << "\033[1;1H";
        dispSec = sec;
        std::cout << "sec : " << dispSec << std::endl;
      }
    }
};
int main(){
  GameTime gt;
  while(1){
    gt.updateTime();
  }
}
