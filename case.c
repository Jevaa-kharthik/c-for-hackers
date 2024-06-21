#include<stdio.h>

int main(){
    int x = 2;
    switch( x + x){
        case 1:
            printf("choice 1 is true!!!");
            break;
        case 4:
            printf("choice 4 is true!!!");
            break;
        default:
        printf("Nothing");
        break;
    }
}