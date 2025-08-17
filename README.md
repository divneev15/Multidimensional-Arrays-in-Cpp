# Exp-8 Multi-Dimensional Arrays in C++

## Aim

Study and implement **two-dimensional arrays (matrices)** in C++ through programs that:

* Read matrix input and display it neatly
* Add two matrices
* Multiply two matrices
* Compute the **main diagonal** sum
* Produce the **transpose** of a matrix
* Compare the **first row** with the **second row**

---

## Tools Used

* **VS Code** (or any C++-ready IDE)

---

## Theory (Multidimensional Arrays)

In C++, an array is a collection of similar data items stored under a common name. A one-dimensional array stores elements in a linear sequence, while a two-dimensional (2D) array stores data in a grid format consisting of rows and columns.

A 2D array is often used to represent a matrix, which is a fundamental data structure in mathematics and computer science. Each element is accessed using two indices:

A[i][j] → element in i-th row and j-th column

General Form
datatype arrayName[rows][cols];


Example:

int matrix[3][3];  // a 3x3 integer matrix

Why Use Multidimensional Arrays?

To represent tables, matrices, and grids.

For performing mathematical operations like addition, subtraction, multiplication.

In image processing (pixels stored in 2D).

In games (like a chessboard or tic-tac-toe grid).

To represent graphs and adjacency matrices in data structures.

Common Matrix Operations

Input and Display: Taking values row by row and showing them.

Addition: Element-by-element sum of two matrices of the same dimension.

Multiplication: Applying the rule of row–column product, valid only if (columns of A = rows of B).

Diagonal Sum: Adding elements from the top-left to the bottom-right.

Transpose: Interchanging rows and columns.

Comparison: Checking if two rows or columns are identical.

These operations build a foundation for solving larger problems like solving linear equations, transformations in graphics, and scientific computing.

---

## Algorithms

### 1) Matrix Input **and** Display

**Goal:** Read a matrix and print it as a grid.

**Algorithm (step‑wise):**

1. Read `rows`, `cols`.
2. Declare matrix `A[rows][cols]` (or a sufficiently large fixed array).
3. For each `i` in `0..rows-1`:

   1. For each `j` in `0..cols-1`:

      * Read `A[i][j]`.
4. For each `i` in `0..rows-1`:

   1. For each `j` in `0..cols-1`:

      * Print `A[i][j]` with spacing/tab.
   2. Print newline.

---

### 2) **Addition** of Two Matrices

**Goal:** `C = A + B` (element‑wise), only if dimensions match.

**Algorithm (step‑wise):**

1. Read `rows`, `cols`.
2. Declare `A[rows][cols]`, `B[rows][cols]`, `C[rows][cols]`.
3. Input all elements of `A`.
4. Input all elements of `B`.
5. If `rows` or `cols` differ between `A` and `B`, print **"Invalid! Matrices must have the same dimensions for addition."** and stop.
6. For each `i` in `0..rows-1`:

   1. For each `j` in `0..cols-1`:

      * `C[i][j] = A[i][j] + B[i][j]`.
7. Print matrix `C`.

---

### 3) **Multiplication** of Two Matrices

**Goal:** `C = A × B` using the row–column product.

**Algorithm (step‑wise):**

1. Read `rows1`, `cols1` for `A`.
2. Read `rows2`, `cols2` for `B`.
3. If `cols1 != rows2`, print **"Invalid! Cannot multiply (cols(A) must equal rows(B))."** and stop.
4. Declare `A[rows1][cols1]`, `B[rows2][cols2]`, `C[rows1][cols2]`.
5. Input all elements of `A`.
6. Input all elements of `B`.
7. For each `i` in `0..rows1-1`:

   1. For each `j` in `0..cols2-1`:

      * Set `C[i][j] = 0`.
      * For each `k` in `0..cols1-1`:

        * Accumulate `C[i][j] += A[i][k] * B[k][j]`.
8. Print matrix `C`.

---

### 4) **Main Diagonal Sum** (Square Matrices)

**Goal:** Sum elements from top‑left to bottom‑right.

**Algorithm (step‑wise):**

1. Read `n` (size of square matrix).
2. If `n <= 0`, print **"Invalid size"** and stop.
3. Declare `A[n][n]`.
4. Input all elements of `A`.
5. Set `sum = 0`.
6. For each `i` in `0..n-1`:

   * Add `sum += A[i][i]`.
7. Print `sum`.

> *(Optional)* For the **secondary diagonal**, sum `A[i][n-1-i]`.

---

### 5) **Transpose** of a Matrix

**Goal:** Create `T` where `T[j][i] = A[i][j]`.

**Algorithm (step‑wise):**

1. Read `rows`, `cols`.
2. Declare `A[rows][cols]`, `T[cols][rows]`.
3. Input all elements of `A`.
4. For each `i` in `0..rows-1`:

   1. For each `j` in `0..cols-1`:

      * Set `T[j][i] = A[i][j]`.
5. Print matrix `T`.

---

### 6) **Compare First Row with Second Row**

**Goal:** Report if row‑0 equals row‑1 element‑wise.

**Algorithm (step‑wise):**

1. Read `rows`, `cols`.
2. If `rows < 2`, print **"You need at least 2 rows to compare"** and stop.
3. Declare `A[rows][cols]`.
4. Input all elements of `A`.
5. Set `equal = true`.
6. For each `j` in `0..cols-1`:

   * If `A[0][j] != A[1][j]`, set `equal = false` and break.
7. If `equal` is `true`, print **"The first row is the same as the second row"**; otherwise print **"The first row is not the same as the second row"**.

---

## Complexity Notes (Big‑O)

* Input/Display: **O(rows × cols)**
* Addition/Transpose/Row Compare: **O(rows × cols)**
* Diagonal sum (square `n × n`): **O(n)**
* Multiplication (`r×c` by `c×m`): **O(r × c × m)**

---

## Common Pitfalls & Good Practices

* **Dimension checks first** to avoid out‑of‑bounds or invalid math.
* **Initialize** result matrices (e.g., set `C[i][j] = 0` before accumulation in multiplication).
* **Consistent formatting** when printing (tabs/spaces) for readability.
* Prefer **`std::vector`** for runtime sizes; VLAs are non‑standard in C++.
* Validate **input ranges** (`rows, cols > 0` and within allocated capacity).

---

## Conclusion

By completing these tasks, you should be able to:

* Confidently **declare, index, and traverse** 2D arrays in C++ using nested loops.
* Enforce **correctness via dimension validation** before performing operations.
* Implement core matrix operations—**addition, multiplication, transpose, and diagonal sums**—and understand their **time complexity**.
* Apply **element‑wise comparisons** to verify row equality, a pattern that generalizes to column/entire matrix comparisons.
* Build a solid foundation for further topics such as **image processing, numerical methods, linear algebra utilities, and graph algorithms** where matrix representations are essential.

> **Outcome:** You not only practiced syntax and indexing, but also learned to translate mathematical definitions into clear, step‑wise algorithms—an essential skill for writing correct, maintainable C++ programs.
