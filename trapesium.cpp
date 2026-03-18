#include <stdio.h>

int main() {
    float sisi_atas, sisi_bawah, tinggi, luas;

    printf("Masukkan sisi atas: ");
    scanf("%f", &sisi_atas);

    printf("Masukkan sisi bawah: ");
    scanf("%f", &sisi_bawah);

    printf("Masukkan tinggi: ");
    scanf("%f", &tinggi);

    luas = 0.5 * (sisi_atas + sisi_bawah) * tinggi;

    printf("Luas trapesium = %.2f\n", luas);

    return 0;
}
