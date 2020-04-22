<script>MathJax = {tex: {inlineMath: [['$', '$'], ['\\(', '\\)']]}};</script>
<script id="MathJax-script" async src="https://cdn.jsdelivr.net/npm/mathjax@3/es5/tex-chtml.js"></script>

# Lab 6

## Problem

Calculate a **distance** between two points in various metric spaces. You can use the Euclidian distance which is defined by the following formula: $d(x,y) = \sqrt{\sum_{i=1}^N (x_i-y_i)^2}$, where $N$ is a dimension of the space.

You can use this knowledge to calculate `distance` in various metric spaces represented by various data types: `Real`, `Complex`, and `Vector3D`.

## Rubric

Write a program that accomplishes each of the following:

- Write a **one** function template that calculates a distance between two points (10 pts).
    - **Hint:** What is common for all provided definitions of metric space classes?
    - **Hint:**  What operator provides common interface for accessing data?
- Your code have to be compiled without errors (2 pts).
- Test you code using the provided test driver (3 pts).


## Test Driver

Add the below test driver code to your `distance.cpp` file.

```c++
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Real {
    double a;
public:
    size_t dim() {return  1;}
    Real(double x) : a{x}{}
    // write your code here
};

class Complex {
    double a;
    double b;
public:
    size_t dim() {return  2;}
    Complex(double x, double y) : a{x}, b{y} {}  
    // write your code here
};

class Vector3D {
    vector <double> vec;
public:
    size_t dim() {return  3;}
    Vector3D(double a, double b, double c){
        vec.push_back(a);
        vec.push_back(b); 
        vec.push_back(c); 
    } 
    // write your code here
};


//===============================================
// Write your `distance` function templates here
//===============================================


//===============================================

int main()
{
    Real n1{1.0}, n2{2.0};
    Complex c1{1.0, 2.0}, c2{2.0, 1.0};
    Vector3D v1{1.0, 2.0, 3.0}, v2{3.0, 2.0, 1.0};
    
    cout << "Distance between n1 and n2 is " << distance(n1, n2) << endl;
    cout << "Distance between c1 and c2 is " << distance(c1, c2) << endl;
    cout << "Distance between v1 and v2 is " << distance(v1, v2) << endl;
    
    return 0;
}
```

## Submission

### Coding Style

In any programming project, matching the existing coding style is important. Having different coding styles intermixed leads to confusion and bugs. Students are required to follow the particular existing coding style that maintains the indentation style in `.cpp` and `.h` files using spaces, not tabs.

In particular, pay close attention to function declarations and how the function name begins the line after the function return type. For helper functions which are limited in scope to a specific file, you must declare the function as `static` in the same file in which it is used.

*Indentation*: The indentation style for your work have to be 4 spaces. Many students are taught to use tabs for indentation, which can make code very hard to read, especially when there are several levels of indentation.

For additional information of C++ coding style see [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).

### Before You Submit

You are required to test that your submission works properly before submission. Make sure that your program compiles without errors. Once you have verified that the submission is correct, you can submit your work.


### Your Submission

Program submissions should be done through the Blackboard.

For Lab #5, submit the following files:

- `distance.cpp`
