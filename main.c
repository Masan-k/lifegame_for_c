#include <stdio.h>
#include <string.h>
int main(void)
{
  int cell[2][2] = {{0,1}\
                  ,{2,3}};
 
  char str[256] = "□";
  char str2[256] = "■";

  printf("strlen：□：%ld\n",strlen(str));
  printf("strlen：■：%ld\n",strlen(str2));

  int i,j;
  for(i=0; i<2; i++){
    char str3[256] = "";
    for(j=0; j<2; j++){
      if(cell[i][j] == 0){
        strcat(str3,"□");
      }else{
        strcat(str3,"■");
      }
    }
    printf("%s\n",str3);
  }
  return 0;
}
