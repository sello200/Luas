#include <stdio.h>

char nilaiHuruf(int nilai) {
    if (nilai >= 80) return 'A';
    else if (nilai >= 70) return 'B';
    else if (nilai >= 60) return 'C';
    else return 'D';
}

int main() {
    int n;

    printf("Masukkan nilai: ");
    scanf("%d", &n);

    printf("Nilai huruf = %c\n", nilaiHuruf(n));
}
