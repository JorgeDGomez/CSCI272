# Lab 2

## Task
Create a class called `Mixed`. Objects of type `Mixed` will store and manage rational numbers in a mixed number format (integer part and a fraction part). The class, along with the required operator overloads, should be written in the files `mixed.h` and `mixed.cpp`.

## Details and Requirements

1. Your class must allow for storage of rational numbers in a mixed number format. Remember that a mixed number consists of an integer part and a fraction part (like 3 1/2 -- "three and one-half"). The `Mixed` class must allow for both positive and negative mixed number values. A zero in the denominator of the fraction part constitutes an illegal number and should not be allowed. You should create appropriate member data in your class. **All member data must be private**.

2. There should be two constructors. One constructor should take in three parameters, representing the integer part, the numerator, and the denominator (in that order), used to initialize the object. If the mixed number is to be a negative number, the negative should be passed on the first non-zero parameter, but on no others. If the data passed in is invalid (negatives not fitting the rule, or 0 denominator), then simply set the object to represent the value 0. Examples of declarations of objects:

        Mixed m1(3, 4, 5);    // sets object to 3 4/5 
        Mixed m2(-4, 1, 2);   // sets object to -4 1/2 
        Mixed m3(0, -3, 5);   // sets object to -3/5 (integer part is 0). 
        Mixed m4(-1, -2, 4);  // bad parameter combination.  Set object to 0.

    The other constructor should expect a single int parameter with a default value of 0 (so that it also acts as a default constructor). This constructor allows an integer to be passed in and represented as a Mixed object. This means that there is no fractional part. Example declarations:

        Mixed m5(4);  // sets object to 4 (i.e. 4 and no fractional part). 
        Mixed m6;     // sets object to 0 (default)

    Note that this last constructor will act as a "conversion constructor", allowing automatic type conversions from type int to type `Mixed`.

3. The `Mixed` class should have public member function `Print()`. This function should output to the console the mixed number in the same format as above, with the following exceptions: If the object represents a 0, then just display a 0. Otherwise: If the integer part is 0, do not display it. If the fraction part equals 0, do not display it. For negative numbers, the minus sign is always displayed to the left.

    Examples:   0  ,  2  ,  -5  ,  3/4  ,  -6/7  ,  -2 4/5  ,  7 2/3 

## Driver Program

The sample driver program that is provided can be found below.
Note, this is not a comprehensive set of tests. It is just a some code to get you started, illustrating some sample calls.


```c++
#include <iostrem>
#include "mixed.h"
using namesapce std;

int main(){
    Mixed m1(3, 4, 5);    // sets object to 3 4/5
    m1.Print(); // prints 3 4/5
    Mixed m2(-4, 1, 2);   // sets object to -4 1/2
    m2.Print(); // prints -4 1/2
    Mixed m3(0, -3, 5);   // sets object to -3/5 (integer part is 0).
    m3.Print(); // prints -3/5
    Mixed m4(-1, -2, 4);  // bad parameter combination.  Set object to 0.
    m4.Print(); // prints 0
    Mixed m4a(1, -2, -4); // bad parameter combination.  Set object to 0.
    m4a.Print(); // prints 0
    Mixed m5(4);
    m5.Print(); // prints: 4
    Mixed m6;
    m6.Print(); // prints 0
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

For Lab #2, submit the following files:

- `mixed.cpp` & `mixed.h`
