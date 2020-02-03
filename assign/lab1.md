# Lab 1

## Computation modeling in biology

Write a program that simulates the growth of **parasite population in an animal** over time. Each parasite organism **reproduces itself** at **some time interval**. Animals may **undergo drug treatment** to inhibit the reproduction process, and clear the parasites from their body. However, some of the parasite are **resistant to drugs** and **may survive**.

## Rubric

- Identify objects that simulation uses from the above description
- Identify objects' properties and responsibilities
- Define C++ class for every object listing all possible members (data and functional) (10 pts)
    - Make sure that every class has a **constructor** that initializes parameters using a **member initialized list**
    - All data members must have **private** access
    - Provide for each private data member a public method that allows access its value
        - Naming convention: You can name your data member as you wish, however any methods that provide access to the field have to be named as follows: *get<FieldName\>*
        - E.g. Private field *name* should have a public access method called *getName()*.
- Create a [lab1.cpp](lab1.cpp) that will have *main()* function (5 pts)
    - Create one instance of each class (object) in the *main()* function
    - In the *main()* function of the [lab1.cpp](lab1.cpp) create implicitly and initialize objects of each class
    - Use class public access methods to print initial values of objects to the console

- Bonus points (3 pts)
    - program compiles without errors and warnings
    - use proper coding style (see below)

### Animal Class: Declaration

- Write a **Animal** class declaration in [lab1.cpp](lab1.cpp) file.
-  Similarly to **Parasite** class, include into the class definition all animal properties:
    - an immunity rate as `float` field `immunity` 
    - a number of parasites in the animal as `unsigned int` field `numParasiteCells`
- Provide to encapsulated fields access functional members: `getImmunity` and `getParasiteNumber`
- Add functional members corresponding to parasite responsibilities:
    - For *taking drug*, add method `takeDrug` that returns nothing, this method will adjust the immunity of the animal
    - Add a default constructor definition for initialization of the `Animal` class object

### Parasite Class: Implementation

Implement `Parasite` class functional members (methods) in [lab1.cpp](lab1.cpp) file:

- First, define default constructor which will set encapsulated fields to specified values

### Animal Class: Implementation

Implement `Animal` class functional members (methods)  in [lab1.cpp](lab1.cpp) file:

- First, define default constructor which will set encapsulated fields to specified values

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

For HW #1, submit the following files:

- `lab1.cpp`
