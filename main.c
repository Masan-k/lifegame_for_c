#include <stdio.h>
int main(void)
{
    int year = 2016; // うるう年
    if(year % 4 == 0) {
        printf("%d年はうるう年です！\n", year);
    }
    return 0;
}
