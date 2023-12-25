#include <stdio.h>

int main(){
    int a, b;
    char c;
    scanf("%d %c", &a, &c);

    for(b = 1; b <= 50; b ++){
        if(b % a == 0){
            printf(" %c ", c);
            }
        else{
            printf(" %d ", b);
            }
    }
    return 0;
}