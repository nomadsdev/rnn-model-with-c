#include "../include/rnn.h"
#include "../include/utils.h"
#include <stdio.h>
#include <string.h>

void rnn_init(RNN *rnn) {
    memset(rnn->hidden, 0, sizeof(rnn->hidden));
    random_init((float *)rnn->Wx, INPUT_SIZE * HIDDEN_SIZE);
    random_init((float *)rnn->Wh, HIDDEN_SIZE * HIDDEN_SIZE);
    random_init((float *)rnn->Wy, HIDDEN_SIZE * OUTPUT_SIZE);
}

void rnn_forward(RNN *rnn, float input) {
    memcpy(rnn->input, &input, sizeof(float));
    float temp_hidden[HIDDEN_SIZE] = {0};

    matrix_mul(rnn->input, (float *)rnn->Wx, temp_hidden, INPUT_SIZE, HIDDEN_SIZE);
    matrix_mul(rnn->hidden, (float *)rnn->Wh, temp_hidden, HIDDEN_SIZE, HIDDEN_SIZE);

    for (int i = 0; i < HIDDEN_SIZE; i++) {
        rnn->hidden[i] = sigmoid(temp_hidden[i]);
    }

    matrix_mul(rnn->hidden, (float *)rnn->Wy, rnn->output, HIDDEN_SIZE, OUTPUT_SIZE);
}

void rnn_print(RNN *rnn) {
    printf("Output: %.4f\n", rnn->output[0]);
}