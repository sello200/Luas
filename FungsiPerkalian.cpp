#include <stdio.h>

void tabelPerkalian(int n) {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int angka;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    tabelPerkalian(angka);
}
