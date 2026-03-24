#include <stdio.h>

float cariMax(float biaya[], int n) {
    float max = biaya[0];

    for (int i = 1; i < n; i++) {
        if (biaya[i] > max) {
            max = biaya[i];
        }
    }

    return max;
}
