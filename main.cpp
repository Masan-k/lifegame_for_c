#include <iostream>
#include <array>
int main() {
  std::cout << std::endl;
  std::array<int, 10> arr{1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

  if (!arr.empty()) {
    std::cout << "array size: " << arr.size() << std::endl;
  }

  for (int i = 0; i < arr.size(); i++) {
      std::cout << arr[i];
      if(i < arr.size()-1){
        std::cout << ",";
      }
  }
  std::cout << std::endl << std::endl;
  std::cout << "first element: " << arr.front() << std::endl; // 1
  std::cout << "last element: " << arr.back() << std::endl;   // 55

  std::cout << std::endl;
  std::array<int, 5> fillTest; 
  std::cout << "array size: " << fillTest.size() << std::endl;
  fillTest.fill(999);
  for (int i = 0; i < fillTest.size(); i++) {
      std::cout << fillTest[i];
      if(i < fillTest.size()-1){
        std::cout << ",";
      }
  } 
  return 0;
}
