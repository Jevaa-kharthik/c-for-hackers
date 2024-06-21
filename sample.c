#include<stdio.h>

int main(){
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        if (i * i == n) {
        printf("%d", i);
        break;
        }
    }
}