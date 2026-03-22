#include <stdio.h>

int faktorial(int n) {
    int i, hasil = 1;

    for (i = 1; i <= n; i++) {
        hasil *= i;
    }

    return hasil;
}

int main() {
    int angka, hasil;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    hasil = faktorial(angka);

    printf("Faktorial = %d\n", hasil);

    return 0;
}
