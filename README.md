# CCS 2214 – Data Structures and Algorithms: Task 3


## Language used

All programming questions in this task (Questions 1, 4, 5, 6 and 7) are implemented in **C++**. The last question (Question 8, priority queues) is a written discussion and contains no code. Questions 2 and 3 are also written answers (stack applications, and infix to postfix conversion with trees).

## Contents

| Question | Topic | Type | Suggested file |
|---|---|---|---|
| 1 | Disadvantages of a linear queue; circular queue | Written + C++ | `q1_circular_queue.cpp` |
| 2 | Applications of a stack | Written | – |
| 3 | Infix to postfix conversion with trees (5 expressions) | Written | – |
| 4a | Sum of the first N natural numbers (recursive) | C++ | `q4a_sum.cpp` |
| 4b | Factorial of a number (recursive) | C++ | `q4b_factorial.cpp` |
| 4c | Nth term of the Fibonacci series (recursive) | C++ | `q4c_fibonacci_nth.cpp` |
| 4d | N terms of the Fibonacci series (recursive) | C++ | `q4d_fibonacci_series.cpp` |
| 5 | Enqueue and dequeue in a queue | C++ | `q5_queue.cpp` |
| 6 | Sparse matrix using arrays (triplet form) | C++ | `q6_sparse_matrix.cpp` |
| 7 | Double-ended queue operations | C++ | `q7_deque.cpp` |
| 8 | Priority queue and its types | Written | – |

## How to compile and run

You need a C++ compiler such as `g++`.

```bash
g++ q1_circular_queue.cpp -o q1
./q1
```

Replace the file name and output name for each program. On Windows, run the output as `q1.exe`.

Programs that read input from the keyboard (4a, 4b, 4c, 4d, 5, 6) will prompt you to type values. Programs 1 and 7 run a fixed demonstration in `main()` and need no input.

## Notes on each program

- **Q1 – Circular queue:** array of size 5. `(rear + 1) % MAX` wraps the pointer so freed slots are reused. The demo shows an overflow, two deletions, and then two insertions into the freed slots.
- **Q4 – Recursion:** each function has a base case and a recursive case. Factorial uses `long long` to avoid overflow for larger inputs. Negative input is rejected in `main`. The Fibonacci series is counted from 1 (`fib(1) = 0`, `fib(2) = 1`), and the simple recursive version is exponential in time.
- **Q5 – Queue:** a menu-driven linear queue (enqueue, dequeue, display, exit). Because it is a linear queue, space freed by dequeuing is not reused until the queue becomes empty.
- **Q6 – Sparse matrix:** stores only the non-zero elements as `(row, column, value)` triplets. Line 0 of the table is a header holding the number of rows, columns and non-zero values. Supports matrices up to 10 × 10 with at most 49 non-zero values.
- **Q7 – Deque:** circular array supporting front insertion, rear insertion, front deletion and rear deletion in O(1) time. The array is named `deque`, which is also a standard library container name. If your compiler reports a conflict, rename the array (for example to `dq`).

## Written answers

Questions 2, 3 and 8 are written answers with no code. Question 3 includes stack-trace tables, postfix results and expression trees for all five expressions. Expression (d) as printed in the task is missing one closing bracket; it was solved assuming the bracket is added at the end.

## Known limitations

- All arrays have fixed sizes set by `#define` constants or declarations.
- Input is not fully validated. Entering non-numeric text at a prompt will cause unexpected behaviour.
- The accompanying Word/online document may show some programs in C. The C++ versions are the ones intended for submission.
