#include <stdio.h>
float hitungTotal(float biaya[], int n) {
    float total = 0;

    for (int i = 0; i < n; i++) {
        total += biaya[i];
    }

    return total;
}
