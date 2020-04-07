# Lab 4

## Problem

Create an advanced scientific calculator that performs various calculations on numbers and polynomials.
In *abstract algebra*, there exists an abstract description of above numerical or algebraic system called **group**.
- **Group** is a **set** with an associative **binary** operation, called a *group law*.

For example:

- Real numbers with division
- Complex numbers with multiplication
- Polynomials with addition

You can use this knowledge to create an hierarchy of classes `Real`, `Complex` and `Trinomial`,
and then extend it with appropriate numerical or algebraic system binary operations.

## Rubric

Write a program that accomplishes each of the following:

- Create a user-defined class `Real` that has a *protected* data member that would contain a value of the real number (5 pts).
    - Create a constructor that accepts one parameter which is used to initialize a class object.
    - Overload the division operator ( `/` ) to divide two `Real`s.
- Derive a class `Complex` from `Real` and add an additional data member for the imaginary part of the number (5 pts).
    - Create a constructor that accepts two parameters which are used to initialize a class object. Call the base class constructor to initialize the inherited data members.
    - Overload the multiplication operator ( `*` ) to multiply two `Complex` numbers.
- Derive a class `Trinomial` from `Complex`. Use the inherited data members to keep values of the coefficients of a trinimial, and add an additional data member to represent the third coefficient (5 pts).
    - Trinomial: $ax^2+bx+c$
    - Create a constructor that accepts three parameters which are used to initialize a class object. Call the base class constructor to initialize the inherited data members.
    - Overload the addition operator ( `+` ) to add two `Trinomial`s.
- Implement for every class the stream insertion `<<` operator functions as **friend** functions (5 pts).
    - The stream insertion operator should not be able to display if an input error occurred.
    - For negative imaginary values, a minus sign should be printed rather than a plus sign.


## Test Driver

Add the below test driver code to your `group.cpp` file.

```c++
#include <iostream>
using namespace std;

class Real{
    // add your code here
};

class Complex{
    // add your code here
};

class Trinomial{
    // add your code here
};


int main() 
{
    Real a{30.0};
    Real b{20.0};  
    // next line shows: 30/20 = 1.5
    cout << a << " / " << b << " = " << (a/b) << endl;
                
    Complex d{3.0, 1.0};  // 3 + i
    Complex e{2.0, -2.0}; // 2 - 2i
    // next line shows: (3+1i)*(2-2i) = 8-4i
    cout << "(" << d << ") * (" << e << ") = " << (d*e) << endl;
        
    Trinomial h{2,1,1};    // 2x^2+1x+1
    Trinomial i{1,-1,0};   // 1x^2-1x
    // next line shows: (2x^2+1x+1) + (1x^2-1x) = 3x^2+1
    cout << "(" << h << ") + (" << i << ") = " << (h+i) << endl;     
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

For Lab #4, submit the following files:

- `group.cpp`
