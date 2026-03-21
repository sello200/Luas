#include <stdio.h>

int main() {
    float jam_kerja, gaji_per_jam, total_gaji, lembur;

    printf("Masukkan jumlah jam kerja: ");
    scanf("%f", &jam_kerja);

    printf("Masukkan gaji per jam: ");
    scanf("%f", &gaji_per_jam);

    if (jam_kerja > 40) {
        lembur = jam_kerja - 40;
        total_gaji = (40 * gaji_per_jam) + (lembur * gaji_per_jam * 1.5);
    } else {
        total_gaji = jam_kerja * gaji_per_jam;
    }

    printf("Total gaji = %.2f\n", total_gaji);
}
