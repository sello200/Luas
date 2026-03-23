#include <stdio.h>

int volumeKubus(int s) {
    return s * s * s;
}

int main() {
    int s;

    printf("Masukkan sisi: ");
    scanf("%d", &s);

    printf("Volume = %d\n", volumeKubus(s));
}
