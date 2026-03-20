#include <stdio.h>

int main() {
    float a, b, c, rata;

    printf("Masukkan bilangan pertama: ");
    scanf("%f", &a);

    printf("Masukkan bilangan kedua: ");
    scanf("%f", &b);

    printf("Masukkan bilangan ketiga: ");
    scanf("%f", &c);

    rata = (a + b + c) / 3;

    printf("Rata-rata = %.2f\n", rata);

    return 0;
}
