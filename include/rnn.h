#ifndef RNN_H
#define RNN_H

#define INPUT_SIZE 1
#define HIDDEN_SIZE 4
#define OUTPUT_SIZE 1

typedef struct {
    float input[INPUT_SIZE];
    float hidden[HIDDEN_SIZE];
    float output[OUTPUT_SIZE];
    float Wh[HIDDEN_SIZE][HIDDEN_SIZE];
    float Wx[INPUT_SIZE][HIDDEN_SIZE];
    float Wy[HIDDEN_SIZE][OUTPUT_SIZE];
} RNN;

void rnn_init(RNN *rnn);
void rnn_forward(RNN *rnn, float input);
void rnn_print(RNN *rnn);

#endif