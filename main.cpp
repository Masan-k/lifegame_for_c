#include <cstdio>
#include <iostream>
#include <unistd.h>
#include <vector> 
int getCellsCount(std::vector<std::vector<int>> vv,int row, int col){

  int rowStart,rowEnd;
  int colStart,colEnd;
  int result = 0;

  rowStart = row-1;
  rowEnd = row+1;
  if(row == 0){rowStart = rowStart = rowStart+1;}
  if(row == vv.size()-1){rowEnd = rowEnd-1;}

  colStart = col-1;
  colEnd = col+1;
  if(col == 0){colStart = colStart+1;}
  if(col == vv.at(col).size()-1){colEnd = colEnd-1;}

  int i,j;
  for(i=rowStart; i<=rowEnd; i++){
    for(j=colStart; j<=colEnd; j++){
      result = result + vv.at(i).at(j);
    }
  }
 return result - vv.at(row).at(col);
}

int main(){
  std::vector<std::vector<int>> \
     cells{{0,0,0,0,0,0,0,0,0,0}\
          ,{0,0,0,0,0,0,0,0,0,0}\
          ,{0,0,0,0,0,0,0,0,0,0}\
          ,{0,0,0,0,0,0,0,0,0,0}\
          ,{0,0,0,0,0,0,0,0,0,0}\
          ,{0,0,0,0,0,0,0,0,0,0}\
          ,{0,0,0,0,0,0,0,0,0,0}\
          ,{0,0,0,0,0,0,0,1,1,1}\
          ,{0,0,0,0,0,0,0,1,0,0}\
          ,{0,0,0,0,0,0,0,0,1,0}};

  std::vector<std::vector<int>> newCells(cells);

  int i,j;
  int cellsCount;
  int secCount = 0;

  while(1){
    std::cout << "\033[2J";
    std::cout << "\033[1;1H";
    std::cout << "sec : " << secCount << std::endl;
    
    for(i=0 ; i<cells.size(); i++){
      for(j=0 ; j<cells.at(i).size(); j++){

        if(cells.at(i).at(j) == 0){
          std::cout << "□";
        }else{
          std::cout << "■";
        }

        cellsCount = getCellsCount(cells,i,j);
        if(cellsCount == 3){
          newCells.at(i).at(j) = 1;
        }else if(cellsCount == 2){
          newCells.at(i).at(j) = cells.at(i).at(j);
        }else{
          newCells.at(i).at(j) = 0;
        }

      } 
      std::cout << std::endl;
    }
    sleep(1);
    secCount = secCount + 1;
    cells = newCells;
  }
  return 0;
}
