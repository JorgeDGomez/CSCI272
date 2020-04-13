# Lab 5

## Problem

Calculate a **norm** for various vector spaces. A **norm** is a function that assigns a strictly positive length or size to each vector in a vector space, except for the zero vector, which is assigned a length of zero.

- For vector space $V$, a **norm** on $V$ is a nonnegative-valued scalar function $p: V \to [0,+\infty)$.

You can use this knowledge to calculate `norm` for various vector spaces that are presented as a hierarchy of classes `Real`, `Complex`, `Trinomial`, and `Vector`.

## Rubric

Write a program that accomplishes each of the following:

- Create a user-defined **abstract** class `Group` that has two pure functions (5 pts):
    - `to_string` which returns a string representation of the class object
    - `norm` which returns a norm of the class object    
- Create a user-defined class `Real` from `Group` that has a *protected* data member that would contain a value of the real number (10 pts).
    - Create a constructor that accepts one parameter which is used to initialize a class object.
    - Implement necessary methods.
    - The norm of the real number is its value.
- Derive a class `Complex` from `Real` and add additional data member for the imaginary part of the number (10 pts).
    - Create a constructor that accepts two parameters which are used to initialize a class object.
    - Implement necessary methods.
    - The norm of the complex number $a+bi$ is $\sqrt{a^2 + b^}$.
- Derive a class `Trinomial` from `Complex` and add additional data member for the the exponents of algebraic coefficients (10 pts).
    - Create a constructor that accepts three parameters which are used to initialize a class object.
    - Implement necessary methods.
    - The norm of the polinomial $p = \sum_{i=1}^k a_i x^i$ is $\sqrt{\sum_i a_i^2}$.
- Create a user-defined class `Vector` from `Group` that has a *protected* data member that would contain a real vector values (10 pts).
    - Create a constructor that accepts three parameter which are used to initialize a class object.
    - Implement necessary methods.
    - Use the `std::vector` collection to store elements of the `Vector` object.
    - The norm of the vector is $[x_1, \ldots, x_n]$ is $\sqrt{\sum_i x_i^2}$.


## Test Driver

Add the below test driver code to your `norm.cpp` file.

```c++
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Group {
    // add your code here
};

class Real{
    // add your code here
};

class Complex{
    // add your code here
};

class Trinomial{
    // add your code here
};

class Vector{
    // add your code here
};


int main() 
{
    vector<Group*> elements;
    
    elements.push_back(new Real{3});
    elements.push_back(new Complex{3,4});
    elements.push_back(new Trinomial{1,2,3});
    elements.push_back(new Vector{1,2,3});
    
    for(auto e : elements){
        cout << "|"<< e->to_string() << "| = "<< e->norm() << endl;
    }
    
    for(auto e : elements)
        delete e;
    
    return 0;    
}
```

### Result

```
|3| = 3
|3+4i| = 5
|1x^2+2x+3| = 3.74166
|[1 2 3]| = 3.74166

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

- `norm.cpp`
