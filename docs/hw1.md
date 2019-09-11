# Assignment 1

## Computation Modeling in Biology

Write a program that simulates the growth of parasite population in an animal over time. Each parasite organism reproduces itself at some time interval. Animals may undergo drug treatment to inhibit the reproduction process, and clear the parasites from their body. However, some of the parasite are resistant to drugs and may survive.

## Problem

- Identify objects that simulation uses from the above description
- Identify objects' properties and responsibilities
- Define C++ class for every object listing all possible members (data and functional) (10 pts)
    - Make sure that the class definition is in the separate header file (*.h), and
    - Implementation of functional members (methods) put in the corresponding implementation file (*.cpp)
    - Use *#include* preprocessor directive to reference the class declarations in the corresponding implementation files
    - Make sure that every class has a **constructor** that initializes parameters using a **member initialized list**
    - All data members must have **private** access
    - Provide for each private data member a public method that allows access its value
        - Naming convention: You can name your data member as you wish, however any methods that provide access to the field have to be named as follows: *get<FieldName\>*
        - E.g. Private field *name* should have a public access method called *getName()*.
- Create a *simulation.cpp* that will have *main()* function (5 pts)
    - Reference all classes in this files using *#include* preprocessor directive
    - Create one instance of each class (object) in the *main()* function
    - In the *main()* function of the *simulation.cpp* create implicitly and initialize objects of each class
    - Use class public access methods to print initial values of objects to the console

- Bonus points (3 pts)
    - program compiles without errors and warnings
    - use proper coding style (see below)

<br/>

## Submission

### Coding Style

In any programming project, matching the existing coding style is important. Having different coding styles intermixed leads to confusion and bugs. Students are required to follow the particular existing coding style that maintains the indentation style in `.cpp` and `.h` files using spaces, not tabs.

In particular, pay close attention to function declarations and how the function name begins the line after the function return type. For helper functions which are limited in scope to a specific file, you must declare the function as "static" in the same file in which it is used.

*Indentation*: The indentation style for your work have to be 2 spaces. Many students are taught to use tabs for indentation, which can make code very hard to read, especially when there are several levels of indentation.

For additional information of C++ coding style see [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).

### Before You Submit

You are required to test that your submission works properly before submission. Make sure that your program compiles without errors. Once you have verified that the submission is correct, you can submit your work.

### Submission

- You need to submit all your class header (*.h) and implementation (*.cpp) files, along with *simulation.cpp* through the corresponding Blackboard assignment submission tool.