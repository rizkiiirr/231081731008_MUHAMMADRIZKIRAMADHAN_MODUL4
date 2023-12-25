#include <stdio.h>

int main(){
    int a, b;
    
    scanf("%d", &a);

    for (b = 1; b <= a; b ++){
        if (b % 2 == 1)
        printf(" %d ", b);
    }
    printf("\n");

    for (b = a; b >= 2; b -- ){
        if (b % 2 == 0)
        printf(" %d ", b);
    }
    return 0;
}

