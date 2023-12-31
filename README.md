# Code Documentation:  C++

## Introduction

This document explains a simple C++ program that demonstrates various methods of iteration using loops. The program covers the following key concepts:

1. Using a `for` loop to iterate through a range of values.
2. Utilizing a `while` loop to achieve the same iterative functionality.
3. Implementing a `do-while` loop, providing a variation of iterative control.
4. Using a range-based `for` loop to iterate through an array.

## Code Overview

```cpp
#include <iostream>

int main() {
    // Part 1: Using a for loop to iterate from 0 to 4
    for (int i = 0; i < 5; i++)
        std::cout << i << std::endl;

    // Part 2: Using a while loop for the same purpose
    int i = 0;
    while (i < 5) {
        std::cout << i << std::endl;
        i++;
    }

    // Part 3: Using a do-while loop for the same purpose
    i = 0;
    do {
        std::cout << i << std::endl;
        i++;
    } while (i < 5);

    // Part 4: Using a range-based for loop to iterate over an array
    int numbers[] = { 1, 2, 3};
    for (int number: numbers)
        std::cout << number << std::endl;
}
```

## Detailed Explanation

### Part 1: `for` Loop

In this section, a `for` loop is used to iterate from 0 to 4. Here's how it works:

- `int i = 0;`: Initializes an integer variable `i` with a value of 0.
- `i < 5;`: Specifies the loop's condition; it will execute as long as `i` is less than 5.
- `i++`: After each iteration, `i` is incremented by 1.
- `std::cout << i << std::endl;`: Outputs the value of `i` to the console followed by a newline.

### Part 2: `while` Loop

This section demonstrates a `while` loop with equivalent functionality:

- `int i = 0;`: Initializes `i` to 0.
- `while (i < 5) { ... }`: The loop continues as long as `i` is less than 5.
- Inside the loop, `std::cout << i << std::endl;` outputs the value of `i`, and `i` is incremented with `i++`.

### Part 3: `do-while` Loop

The `do-while` loop is similar to the `while` loop but guarantees at least one execution of the loop's body:

- `i = 0;`: Resets `i` to 0.
- `do { ... } while (i < 5);`: The loop executes the code block first and then checks the condition. It repeats as long as `i` is less than 5.

### Part 4: Range-Based `for` Loop

In this section, a range-based `for` loop is used to iterate over an array named `numbers`:

- `int numbers[] = { 1, 2, 3};`: Declares an integer array with three elements.
- `for (int number: numbers) { ... }`: The loop iterates over each element of the `numbers` array, assigning each element's value to the variable `number`.

## Conclusion

This C++ code demonstrates different methods of iteration, including `for`, `while`, and `do-while` loops, as well as a range-based `for` loop for iterating over an array. Understanding these fundamental concepts is crucial for writing programs that manipulate and process data effectively.

For more in-depth information on C++ programming and loops, refer to the C++ documentation and tutorials.
