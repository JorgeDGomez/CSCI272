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

    Note that this last constructor will act as a "conversion constructor", allowing automatic type conversions from type int to type Mixed.

3. The Mixed class should have public member functions Evaluate(), ToFraction(), and Simplify(). The Evaluate() function should return a double, the others don't return anything. These functions have no parameters. The names must match the ones here exactly. They should do the following:

    The Evaluate function should return the decimal equivalent of the mixed number.
    The Simplify function should simplify the mixed number representation to lowest terms. This means that the fraction part should be reduced to lowest terms, and the fraction part should not be an improper fraction (i.e. disregarding any negative signs, the numerator is smaller than the denominator).
    The ToFraction function should convert the mixed number into fraction form. (This means that the integer part is zero, and the fraction portion may be an improper fraction).


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
