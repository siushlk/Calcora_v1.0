# Calcora - Menu-Driven Scientific Calculator in C

## A powerful, lightweight, menu-driven scientific calculator built entirely in C.

Calcora supports a wide range of mathematical operations including basic arithmetic, trigonometry, logarithms, exponentials, factorials, permutations, combinations, interest calculations, and unit conversions (degrees ↔ radians).

Made with ❤️ by **Samprit Gayen**


## ✨ Features

- **Basic Operations**: Addition, subtraction, multiplication, division, modulo, power, square root, nth root
- **Financial Functions**: Simple Interest, Compound Interest
- **Logarithms**: Base-10 log and natural log (ln)
- **Trigonometry**: sin, cos, tan (in radians) + inverse hyperbolic functions (sinh, cosh, tanh)
- **Combinatorics**: Factorial, Permutations (nPr), Combinations (nCr)
- **Conversions**: Degrees to Radians and vice versa
- **Exponential**: e^x
- Clean ASCII art menu interface
- Error handling for invalid inputs (division by zero, negative logs, etc.)

## 🚀 Quick Start

### Prerequisites
- GCC or any C compiler (Clang, MinGW, etc.)
- No external libraries required (only `<stdio.h>` and `<math.h>`)

### Compilation & Run

```bash
gcc calcora.c -o calcora -lm
./calcora
(On Windows with MinGW: gcc calcora.c -o calcora.exe -lm)
Once running, you'll see the beautiful menu:
text____      _               
 / ___|__ _| | ___ ___  _ __
| |   / _` | |/ __/ _ \| '__|
| |__| (_| | | (_| (_) | |   
 \____\__,_|_|\___\___/|_|   

====================================
            CALCORA v1.0            
====================================
Hi, I am Calcora!
A genius scientific calculator,
made by Samprit Gayen.
====================================
Choose any option from 1 to 24, or 25 to exit.

Made by Samprit Gayen
If you like Calcora, give the repo a ⭐!
