#ifndef UTILS_H
#define UTILS_H

void random_init(float *array, int size);
void matrix_mul(float *input, float *weights, float *output, int in_size, int out_size);
float sigmoid(float x);

#endif