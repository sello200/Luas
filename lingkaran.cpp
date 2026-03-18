#include <stdio.h>

int main() {
    float jari_jari, luas;

    printf("Masukkan jari-jari: ");
    scanf("%f", &jari_jari);

    luas = 3.14 * jari_jari * jari_jari;

    printf("Luas lingkaran = %.2f\n", luas);

    return 0;
}
