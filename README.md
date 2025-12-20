# Cpp-Classwork

C++ programs for class

## Files in this folder

- `CompileTest` (binary)
- `CompileTest.cpp` — simple compile/test program
- `Lesson1.cpp` — Fruit sorting using Greedy Algorithm
- `Lesson2.cpp` — binary-search example (reads `n`, `n` numbers, then a target; outputs position or `-1`)
- `Lesson3.cpp` — counts valid 4x4 Sudoku-style fillings using DFS; prints total count
- `README.md` — this file

## Notes

- Build: use the provided VS Code task or run `g++ <file>.cpp -o <file>`

### Quick run examples

- `CompileTest` (compile & run):

```bash
g++ CompileTest.cpp -o CompileTest
./CompileTest
```

- `Lesson1` (compile; expects input — n followed by n numbers):

```bash
g++ Lesson1.cpp -o Lesson1
./Lesson1
```

- `Lesson2` (binary search; compile & run — input: n, n sorted numbers, target):

```bash
g++ Lesson2.cpp -o Lesson2
./Lesson2
```

- `Lesson3` (counts all valid 4x4 fillings; no input required):

```bash
g++ Lesson3.cpp -o Lesson3
./Lesson3
```