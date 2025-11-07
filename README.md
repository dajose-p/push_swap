# 🧩 Push Swap

A sorting algorithm project written in **C** for **42 School**, designed to sort a stack of integers using a limited set of operations — as efficiently as possible.

This implementation uses a **k-sort–based algorithm** to minimize the total number of moves, providing both speed and clarity in its logic.

---

## 🎯 Objective

You are given two stacks:  
- **Stack A**: initially filled with unsorted integers.  
- **Stack B**: initially empty.

The goal is to sort **Stack A** in ascending order using a restricted set of operations:

| Operation | Description |
|------------|-------------|
| `sa` | Swap the top two elements of stack A |
| `sb` | Swap the top two elements of stack B |
| `ss` | Swap both A and B |
| `pa` | Push the top element from stack B to stack A |
| `pb` | Push the top element from stack A to stack B |
| `ra` | Rotate stack A upwards |
| `rb` | Rotate stack B upwards |
| `rr` | Rotate both stacks upwards |
| `rra` | Reverse rotate stack A |
| `rrb` | Reverse rotate stack B |
| `rrr` | Reverse rotate both stacks |

---

## ⚙️ How It Works

This version of **Push Swap** is powered by a **k-sort algorithm**, a hybrid method inspired by chunk-based and insertion sorting.  
It divides the data into *k* chunks, sorting and reinserting elements strategically to minimize the total number of operations.

### 🔍 Main Steps
1. **Indexing**: Each number is replaced with its sorted index to simplify comparisons.  
2. **Chunk Division**: The array is divided into *k* equal (or near-equal) parts.  
3. **Selective Push**: Elements are pushed from A to B in chunk order, optimizing rotation direction.  
4. **Smart Reinsertion**: Elements are moved back from B to A using minimal rotation and push operations.

This approach ensures a smooth time complexity that scales efficiently with input size.

---

## 🧠 Example

Input:
```bash
./push_swap 4 67 3 87 23
```

Output (example sequence of operations):
```bash
pb
pb
sa
pa
pa
```

You can visualize how the algorithm works below 👇

[![Watch the video](https://img.youtube.com/vi/A405iB4Du78/hqdefault.jpg)](https://youtu.be/A405iB4Du78)

---

## 🧰 Compilation

To compile the project, simply run:
```bash
make
```

This will create the executable `push_swap` in the root directory.

To clean object files:
```bash
make clean
```

To remove everything (including the executable):
```bash
make fclean
```

To rebuild everything:
```bash
make re
```

---

## 🚀 Usage

### Basic Example
```bash
./push_swap 2 1 3 6 5 8
```

### Test with a larger random input
```bash
ARG=$(seq 1 100 | shuf); ./push_swap $ARG | wc -l
```

### Checker 
```bash
make bonus
./push_swap $ARG | ./checker $ARG
```

---

## 📊 Performance

| Input size | Average moves (k-sort) | Max moves allowed (42 benchmark) |
|-------------|------------------------|----------------------------------|
| 100 | ~650 | ≤ 700 |
| 500 | ~4800 | ≤ 5500 |

---

## 🧑‍💻 Author

**Daniel José Pereira**  
42 Student  
📧 [danjose-@student.42madrid.com](mailto:danjose-@student.42madrid.com)

