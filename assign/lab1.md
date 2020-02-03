# Lab 1

## Computation modeling in biology

Write a program that simulates the growth of **parasite population in an animal** over time. Each parasite organism **reproduces itself** at **some time interval**. Animals may **undergo drug treatment** to inhibit the reproduction process, and clear the parasites from their body. However, some of the parasite are **resistant to drugs** and **may survive**.

## Rubric

- Identify objects that simulation uses from the above description
- Identify objects' properties and responsibilities
- Define C++ class for every object listing all possible members (data and functional) (10 pts)
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

### Parasite Class: Declaration
- Update a **Parasite** class declaration in [lab1.cpp](lab1.cpp) file.
- Include into the class definition all parasite properties:,
    - a reproduction rate as `float` field `reproductionRate`
    - a drug resistance as `float` field `resistance`
- Provide to encapsulated fields access functional members: `getReproductionRate` and `getResistance`
- Add functional members corresponding to parasite responsibilities:
    - For *reproducibility*, add method `reproduce` that returns an object of the parasite if it successfully reproduced
    - For *survival*, add method `survive` that returns `true` value if the parasite survived to the next iteration of the simulation, `false` otherwise.
    - Both above responsibilities depend on an immunity of the animal to parasites, thus the animal `immunity` becomes a parameter to both methods.

### Animal Class: Declaration

- Write a **Animal** class declaration in [lab1.cpp](lab1.cpp) file.
- Similarly to **Parasite** class, include into the class definition all animal properties:
    - an immunity rate as `float` field `immunity` 
    - a number of parasites in the animal as `unsigned int` field `numParasiteCells`
- Provide to encapsulated fields access functional members: `getImmunity` and `getParasiteNumber`
- Add functional members corresponding to parasite responsibilities:
    - For *taking drug*, add method `takeDrug` that returns nothing, this method will adjust the immunity of the animal
    - Add a default constructor definition for initialization of the `Animal` class object

### Parasite Class: Implementation

Implement `Parasite` class functional members (methods) in [lab1.cpp](lab1.cpp) file:

- The default constructor is already provided to the class

### Animal Class: Implementation

Implement `Animal` class functional members (methods)  in [lab1.cpp](lab1.cpp) file:

- The default constructor is already provided to the class

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
