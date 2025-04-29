# 🧠 RNN in C

This is a simple implementation of a **Recurrent Neural Network (RNN)** in **pure C**.  
It demonstrates the concept of forward propagation over a sequence of time-series inputs without using any external libraries.

---

## 📁 Project Structure

```
rnn-c/
├── include/             # Header files
│   ├── rnn.h            # RNN structure and declarations
│   └── utils.h          # Utility functions (e.g., matrix multiplication)
├── src/                 # Source code
│   ├── rnn.c            # RNN logic (init, forward, print)
│   └── utils.c          # Math utility implementation
├── data/                # Example input data (optional)
│   └── sample_input.txt
├── main.c               # Program entry point
├── Makefile             # Build configuration
└── README.md            # This file
```

---

## 🧪 Requirements

- GCC or compatible C compiler (e.g. `gcc`, `clang`)
- `make` (for building the project)

---

## ⚙️ Build Instructions

### 1. Clone or download the project:

```bash
git clone https://github.com/nomadsdev/rnn-model-with-c.git
cd rnn-c
```

### 2. Build the project using `make`:

```bash
make
```

This compiles all `.c` files and generates an executable named `rnn`.

---

## 🚀 Running the Program

```bash
./rnn
```

### Expected Output:

```text
Time step 0: Output: 0.4938
Time step 1: Output: 0.4962
Time step 2: Output: 0.4975
```

The program performs forward propagation across 3 time steps using a hardcoded input sequence (`0.1`, `0.5`, `0.9`) and prints the output of the RNN at each step.

---

## 🧰 How to Modify Inputs

To change the input sequence:

1. Open `main.c`
2. Modify the `inputs[]` array:

```c
float inputs[] = {0.2f, 0.4f, 0.6f, 0.8f};
```

3. Rebuild the project:

```bash
make clean && make
./rnn
```

---

## 🛠️ How to Extend This Project

Here are some ideas for improving this base project:

- ✅ Add Backpropagation Through Time (BPTT)
- 📉 Loss function and training loop
- 📁 Load input from file (`sample_input.txt`)
- 🧠 Increase model complexity (e.g., stacked RNN layers)
- 💾 Save and load weights to/from file
