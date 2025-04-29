#include "../include/utils.h"
#include <stdlib.h>
#include <math.h>
#include <time.h>

void random_init(float *array, int size) {
    srand((unsigned int) time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = ((float)rand() / RAND_MAX) * 2.0f - 1.0f; // -1 to 1
    }
}

void matrix_mul(float *input, float *weights, float *output, int in_size, int out_size) {
    for (int i = 0; i < out_size; i++) {
        for (int j = 0; j < in_size; j++) {
            output[i] += input[j] * weights[j * out_size + i];
        }
    }
}

float sigmoid(float x) {
    return 1.0f / (1.0f + expf(-x));
}