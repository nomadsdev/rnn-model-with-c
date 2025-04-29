#include <stdio.h>
#include "include/rnn.h"

int main() {
    RNN rnn;
    rnn_init(&rnn);

    float inputs[] = {0.1f, 0.5f, 0.9f};
    int len = sizeof(inputs) / sizeof(float);

    for (int t = 0; t < len; t++) {
        rnn_forward(&rnn, inputs[t]);
        printf("Time step %d: ", t);
        rnn_print(&rnn);
    }

    return 0;
}