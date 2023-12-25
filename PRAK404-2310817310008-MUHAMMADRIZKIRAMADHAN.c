#include <stdio.h>

int main(){
    float a, b, c;
    while (1){
    printf("Pilih program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");

    printf("Masukkan Pilihan:");
    scanf("%f", &a);

    if (a > 5){
        printf("Input anda salah, silahkan coba lagi");
        break;
    }
    else if(a == 5){
        printf("Terima kasih, telah menggunakan kalkulator MUHAMMAD RIZKI RAMADHAN");
        break;
    }
    printf("Masukkan nilai pertama:");
    scanf("%f", &b);
    printf("Masukkan nilai kedua:");
    scanf("%f", &c);
    if (a == 1){
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", b, c, b + c);
    }
    else if (a == 2){
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", b, c, b - c);
    }
    else if (a == 3){
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", b, c, b * c);
    }
    else if (a == 4){
        printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", b, c, b / c);
    }
    }

    return 0;
}