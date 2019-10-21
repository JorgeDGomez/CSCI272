# Assignment 2

## Computation Modeling in Biology

Write a program that simulates the growth of parasite population in an animal over time. Each parasite organism reproduces itself at some time interval. Animals may undergo drug treatment to inhibit the reproduction process, and clear the parasites from their body. However, some of the parasite are resistant to drugs and may survive.

## Problem

- Use your program from the previous assignment to extend it with new functionality
- Implement *has-a* relationship between Animal and Parasite class: `Animal` has `Parasite`s (10 pts)
    - Implement corresponding relation collection of `Parasite` objects in `Animal` class
        - You could use `std::vector` as a data structure for a collection of objects
    - Implement an appropriate *constructor* logic for `Animal` class that would initialize correspondent `Parasite` objects during the initialization of `Animal` object.
    - Implement an appropriate *destructor* logic  for `Animal` class that would destroy correspondent `Parasite` objects during the destruction of `Animal` object.
- Add a friend function `<<` to both classes to allow print objects to the output stream (5 pts)
- Overload an operator `[]` in Animal class to get access to particular Parasite object. Make sure to check existence of the object. (5 pts)
 
- In your *simulation.cpp* file (5 pts)
    - Create an object of `Animal` class.
    - Print all its `Parasite` objects of the screen using overridden `[]` and friend `<<` operations.

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
