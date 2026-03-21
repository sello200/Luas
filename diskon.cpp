#include <stdio.h>

int main() {
    float harga, diskon, potongan, total;

    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    printf("Masukkan diskon (%%): ");
    scanf("%f", &diskon);

    potongan = harga * (diskon / 100);
    total = harga - potongan;

    printf("Potongan = %.2f\n", potongan);
    printf("Harga setelah diskon = %.2f\n", total);
}
