# Root Finding Algorithm

**Author:** Dhruv Koli  
**Created:** 1/17/2024  

#### Image : 
[Image](https://upload.wikimedia.org/wikipedia/commons/thumb/8/8c/Bisection_method.svg/500px-Bisection_method.svg.png)

## Idea

The algorithm aims to find the root of a function within a given range \([a, b]\).

1. Find the middle point \(c = a + \frac{{b - a}}{2}\).
2. If \(f(c) == 0\), then \(c\) is the root.
3. Otherwise:
    - If \(f(a) \times f(c) < 0\), recursively search for the root in the range \([a, c]\).
    - If \(f(b) \times f(c) < 0\), recursively search for the root in the range \([b, c]\).

Repeat these steps until \(b - a \geq 0.00001\) or any smaller threshold specified.

### The code assumes the function f(x); for any other function / polynomial make necessary changes in line no. 9 of the root.cpp file