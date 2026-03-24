#include <stdio.h>
#include <string.h>

int validJenis(char jenis[]) {
    if (strcmp(jenis, "mobil") == 0 ||
        strcmp(jenis, "motor") == 0 ||
        strcmp(jenis, "truk") == 0) {
        return 1;
    } else {
        return 0;
    }
}
