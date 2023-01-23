//#include <cstdio>
#include <iostream>
#include <vector>
#include <array>
int main() {
  //vectorを配列と同じように扱う
  std::vector<int> cell(10,2);
  int i;
  std::cout << "cell.size() -> " << cell.size() << std::endl;
  for(i=0; i<cell.size(); i++){
    std::cout << cell[i];
  }
  std::cout << std::endl;
 

  //arrayで書き直し(宣言の方法が若干異なる)
  std::array<int,3> foods{1,2,3};
  std::cout << "food.size() -> " << foods.size() << std::endl;
  for(i=0; i<foods.size(); i++){
    std::cout << foods[i];
  }
  std::cout << std::endl;

  //vecter配列から新しい配列を作成
  int items[] = {1,2,3};
  std::vector<int> foods2(items ,items + 3);
  items[0] = 9;
  foods2[2] = 7;
  std::cout << "items ->" << items << std::endl;
  std::cout << "items + 3 ->" << items+3 << std::endl;
  std::cout << "std::end(items) ->" << std::end(items) << std::endl;
  std::cout << "foods2" << std::endl;
  std::vector<int> items2{4,5,6};
  
  std::cout << "foods2" << std::endl;
  for(i=0; i<foods2.size(); i++){
    std::cout << foods2[i];
  }
  std::cout << std::endl;

  std::cout << "items2" << std::endl;
  for(i=0; i<items2.size(); i++){
    std::cout << items2[i];
  }
  std::cout << std::endl;
  std::cout << "範囲外の指定"<< std::endl;
  std::cout << foods2[4] << std::endl;
  //std::cout << foods2.at(4) << std::endl;
  
  //データの追加
  foods2.push_back(5);
  for(i=0; i<foods2.size(); i++){
    std::cout << foods2[i];
  }



}
