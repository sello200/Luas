#include <stdio.h>

int maksimum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y, hasil;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &x, &y);

    hasil = maksimum(x, y);

    printf("Nilai terbesar = %d\n", hasil);
}
