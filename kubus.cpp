#include <stdio.h>

int main() {
    float sisi, volume;

    printf("Masukkan sisi: ");
    scanf("%f", &sisi);

    volume = sisi * sisi * sisi;

    printf("Volume kubus = %.2f\n", volume);

    return 0;
}
