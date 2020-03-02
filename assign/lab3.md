# Lab 3

## Problem

Create an advanced scientific calculator that performs various calculations on real numbers.

## Rubric

Create file `real.cpp` and add to it a program that accomplishes each of the following:

- Create a user-defined class `Real` that has a *protected* data member for storing a value of the real number.
    - Create a constructor that accepts one parameter which is used to initialize a class object.
    - Overload the multiplication operator ( `*` ) to multiply two `Real` numbers (5 pts).
    - Overload the prefix and postfix increment operator ( `++` ) for `Real` number (10 pts).
    - Implement insertion `<<` operator functions as **friend** functions (5 pts) to output a value of a `Real` number on a screen.
- **Bonus:** Implement extraction `>>` operator function should determine whether the data entered is valid, and, if not, it should set fail to indicate improper input  (10 pts).
    - The values can be negative or positive, and it's possible that one of the two values is not provided, in which case the appropriate data member should be set to 0.


## Test Driver

Add the below test driver code to your `real.cpp` file.

```c++
#include <iostream>
using namespace std;

int main()
{
    Real a{20.0}, b{2.5};
    // next line shows: 20 * 2.5 = 50
    cout << a << " * " << b << " = " << (a*b) << endl;
    // next line shows: 20 -> 21
    cout << a++ << " -> " << a << endl;
    // next line shows: 22 -> 22
    cout << ++a << " -> " << a << endl;
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

For Lab #3, submit the following files:

- `real.cpp`
