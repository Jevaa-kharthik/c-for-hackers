#include<stdio.h>

int main(){
    int x = 10;
    int y = (++x != 10 && x-- < 10) ? x++ : x--;
    printf("%d", y);
    return 0;
}