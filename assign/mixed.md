# HW 2

## Task
Create a class called `Mixed`. Objects of type `Mixed` will store and manage rational numbers in a mixed number format (integer part and a fraction part). The class, along with the required operator overloads, should be written in the files `mixed.h` and `mixed.cpp`.

## Details and Requirements


1. Finish **Lab 2** by creating a `Mixed` class definition with constructor functions and some methods.

2. The `Mixed` class should have public member functions `Evaluate()`, `ToFraction()`, and `Simplify()`. The `Evaluate()` function should return a double, the others don't return anything. These functions have no parameters. The names must match the ones here exactly. They should do the following:

    - `Evaluate` function should return the decimal equivalent of the mixed number.
    - `Simplify` function should simplify the mixed number representation to lowest terms. This means that the fraction part should be reduced to lowest terms, and the fraction part should not be an improper fraction (i.e. disregarding any negative signs, the numerator is smaller than the denominator).
    - `ToFraction` function should convert the mixed number into fraction form. (This means that the integer part is zero, and the fraction portion may be an improper fraction).

3. Create an overload of the extraction operator `>>` for reading mixed numbers from an input stream. The input format for a `Mixed` number object will be:

    integer numerator/denominator 

    i.e. the integer part, a space, and the fraction part (in numerator/denominator form), where the integer, numerator, and denominator parts are all of type int. You may assume that this will always be the format that is entered (i.e. your function does not have to handle entry of incorrect types that would violate this format). However, this function should check the values that come in. In the case of an incorrect entry, just set the `Mixed` object to represent the number 0, as a default. An incorrect entry occurs if a denominator value of 0 is entered, or if an improper placement of a negative sign is used. Valid entry of a negative number should follow this rule - if the integer part is non-zero, the negative sign is entered on the integer part; if the integer part is 0, the negative sign is entered on the numerator part (and therefore the negative sign should never be in the denominator). Examples:

    Valid inputs:     2 7/3 , -5 2/7  , 4 0/7  , 0 2/5  , 0 -8/3 

    Invalid inputs:   2 4/0 , -2 -4/5 , 3 -6/3 , 0 2/-3 

4. Create an overload of the insertion operator `<<` for output of `Mixed` numbers. This should output the mixed number in the same format as above, with the following exceptions: If the object represents a 0, then just display a 0. Otherwise: If the integer part is 0, do not display it. If the fraction part equals 0, do not display it. For negative numbers, the minus sign is always displayed to the left.

    Examples:   0  ,  2  ,  -5  ,  3/4  ,  -6/7  ,  -2 4/5  ,  7 2/3 

5. Create overloads for all 6 of the comparison operators ( < , > , <= , >= , == , != ). Each of these operations should test two objects of type `Mixed` and return an indication of true or false. You are testing the `Mixed` numbers for order and/or equality based on the usual meaning of order and equality for numbers. (These functions should not do comparisons by converting the `Mixed` numbers to decimals -- this could produce round-off errors and may not be completely accurate).
    - Hint: You can define most of the operation through a combination of `==` and `<`.
 
6. Create operator overloads for the 4 standard arithmetic operations ( + , - , * , / ) , to perform addition, subtraction, multiplication, and division of two mixed numbers. Each of these operators will perform its task on two Mixed objects as operands and will return a Mixed object as a result - using the usual meaning of arithmetic operations on rational numbers. Also, each of these operators should return their result in simplified form. (e.g. return 3 2/3 instead of 3 10/15, for example).

    - Use function `__gcd` (you need to add `#include <algorithm>`) for calculation of the greatest common divisor) for simplification of the fractions. For subtraction and division, you can use inverse rules to simplify your code, see [Inverse of rational number](https://en.wikipedia.org/wiki/Rational_number#Inverse). 

    - In the division operator, if the second operand is 0, this would yield an invalid result. Since we have to return something from the operator, return 0 as a default (even though there is no valid answer in this case). Example:

            Mixed m(1, 2, 3);  // value is 1 2/3
            Mixed z;           // value is 0
            Mixed r = m / z;   // r is 0 (even though this is not good math)


7. Create overloads for the increment and decrement operators (++ and --). You need to handle both the pre- and post- forms (pre-increment, post-increment, pre-decrement, post-decrement). These operators should have their usual meaning -- increment will add 1 to the Mixed value, decrement will subtract 1. Example:

        Mixed m1(1, 2, 3);		//  1 2/3
        Mixed m2(2, 1, 2);		//  2 1/2
        cout << m1++;			//  prints 1 2/3, m1 is now 2 2/3
        cout << ++m1;			//  prints 3 2/3, m1 is now 3 2/3
        cout << m2--;			//  prints 2 1/2, m2 is now 1 1/2
        cout << --m2;			//  prints 1/2  , m2 is now 0 1/2


## Driver Program

The [sample driver](https://github.com/wildart/CSCI272/blob/master/assign/mixed-driver-full.cpp) program that is provided can be found below.
Note, this is not a comprehensive set of tests. It is just a some code to get you started, illustrating some sample calls.

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

For HW #2, submit the following files:

- `mixed.cpp` & `mixed.h`
