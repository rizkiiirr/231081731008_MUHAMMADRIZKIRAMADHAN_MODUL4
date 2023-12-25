#include <stdio.h>

int main(){
    int a, b, i;
    scanf("%d %d", &a, &b);

    if (a < b){
        i = a;
        while (i < b){
        printf("%d %d - ", i, a + b - i);
        i++;
     }
    }
    else if (a > b){
        i = a;
        while (i > b){
        printf("%d %d - ", i, a + b - i);
        i--;
     }
    }
    printf ("%d %d", b, a);
    
    return 0;
}
