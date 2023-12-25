#include <stdio.h>

int main() {
    int a, b, i, j, total, total1 = 0, total2 = 0;
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a; i++) {
        total = i * b;
        total1 += total;

        if (i == 1) {
            printf("(%d * %d) = %d\n", i, b, total);
        } else {
            for (j = i; j > 0; j--) {
                printf("(%d * %d)", j, b);
                if (j > 1) {
                    printf(" + ");
                }
            }
            printf(" = %d \n", total1);
        }
        total2 += total1;
    }
    printf("%d", total2);
    return 0;
}
