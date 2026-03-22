#include <stdio.h>

int tambah(int a, int b) {
    return a + b;
}

int main() {
    int x, y, hasil;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &x, &y);

    hasil = tambah(x, y);

    printf("Hasil penjumlahan = %d\n", hasil);
}
