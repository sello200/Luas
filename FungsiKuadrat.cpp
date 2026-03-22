#include <stdio.h>

int kuadrat(int n) {
    return n * n;
}

int main() {
    int angka, hasil;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    hasil = kuadrat(angka);

    printf("Hasil kuadrat = %d\n", hasil);
}
