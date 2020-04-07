# HW 3

## Computation modeling in biology

Write a program that simulates the growth of **parasite population in an animal** over time. Each parasite organism **reproduces itself** at **some time interval**. Animals may **undergo drug treatment** to inhibit the reproduction process, and clear the parasites from their body. However, some of the parasite are **resistant to drugs** and **may survive**.

## Rubric

- Use provided declaration of the `Animal` and `Parasite` classes and extend them with new functionality: [animal.h](animal.h), [parasite.h](parasite.h).
- Implement *has-a* relationship between Animal and Parasite class: `Animal` has `Parasite`s (10 pts)
    - Implement corresponding relation collection of `Parasite` objects in `Animal` class
        - You could use `std::vector` as a data structure for a collection of objects
    - Implement an appropriate *constructor* logic for `Animal` class that would initialize correspondent `Parasite` objects during the initialization of `Animal` object with arbitrary values for survival and reproduction rates.
    - Implement an appropriate *destructor* logic  for `Animal` class that would destroy correspondent `Parasite` objects during the destruction of `Animal` object.
- Add a friend function `<<` to both classes to allow print objects to the output stream (5 pts)
- Overload an operator `[]` in Animal class to get access to particular Parasite object. Make sure to check existence of the object. (5 pts)

- There are additonal methods that `Animal` and `Parasite` classes need to implement for the simulation:
    - Each parasite can reproduce and survive.
        - Implement `survive` method. The parasite survives if its survivial rate is large then the animal immunity (5 pts).
        - Implement `reproduce` method. Each parasite can create its exact copy if the reproduction rate is higher then some arbitrary number in unit range, [0.0,1.0] (5 pts). (*Hint: Use `rand` function to generate a random numbers*).
    - An animal has to take durgs, and be able add and remove parasites. 
        - Each animal has to take drugs, whenever the `takeDrugs` is called the immunity of the animal increased by 10 persent (5 pts).
        - Function `addParasite` adds a new parasite object into the collection of animal parasites (5 pts).
        - Function `destroyParasites` remove several parasices from the animal parasite collection (5 pts).

The simulation is provided to you in file [simulation.cpp](simulation.cpp).

- Bonus points (5 pts)
    - program compiles without errors and warnings
    - use proper coding style (see below)

## Program Output Example
```
>./sim
Parasite is born with 95.4664% reproduction rate, and 18.9821% resistance
Parasite is born with 15.7586% reproduction rate, and 82.8199% resistance
Parasite is born with 83.9186% reproduction rate, and 53.3313% resistance
Parasite is born with 13.7885% reproduction rate, and 68.5999% resistance
Parasite is born with 51.0179% reproduction rate, and 49.4728% resistance
Animal object is created
Begin simulation: 
This animal has immunity rate: 30%, and 5 parasites
Step 1: 
Parasite 0 is dead: This parasite has reporoduction rate: 95.4664%, and resistance rate: 18.9821
Parasite 1 cannot reproduce
Parasite is born with 83.9186% reproduction rate, and 53.3313% resistance
Parasite 3 cannot reproduce
Parasite is born with 51.0179% reproduction rate, and 49.4728% resistance
Animal takes drugs
This animal has immunity rate: 40%, and 6 parasites
Step 2: 
Parasite 0 cannot reproduce
Parasite is born with 83.9186% reproduction rate, and 53.3313% resistance
Parasite 2 cannot reproduce
Parasite is born with 51.0179% reproduction rate, and 49.4728% resistance
Parasite 4 cannot reproduce
Parasite is born with 51.0179% reproduction rate, and 49.4728% resistance
Animal takes drugs
This animal has immunity rate: 50%, and 9 parasites
Step 3: 
Parasite is born with 15.7586% reproduction rate, and 82.8199% resistance
Parasite is born with 83.9186% reproduction rate, and 53.3313% resistance
Parasite 2 cannot reproduce
Parasite 3 is dead: This parasite has reporoduction rate: 51.0179%, and resistance rate: 49.4728
Parasite is born with 83.9186% reproduction rate, and 53.3313% resistance
Parasite 5 is dead: This parasite has reporoduction rate: 51.0179%, and resistance rate: 49.4728
Parasite is born with 83.9186% reproduction rate, and 53.3313% resistance
Parasite 7 is dead: This parasite has reporoduction rate: 51.0179%, and resistance rate: 49.4728
Parasite 8 is dead: This parasite has reporoduction rate: 51.0179%, and resistance rate: 49.4728
Animal takes drugs
This animal has immunity rate: 60%, and 9 parasites
Step 4: 
Parasite 0 cannot reproduce
Parasite 1 is dead: This parasite has reporoduction rate: 83.9186%, and resistance rate: 53.3313
Parasite 2 cannot reproduce
Parasite 3 is dead: This parasite has reporoduction rate: 83.9186%, and resistance rate: 53.3313
Parasite 4 is dead: This parasite has reporoduction rate: 83.9186%, and resistance rate: 53.3313
Parasite is born with 15.7586% reproduction rate, and 82.8199% resistance
Parasite 6 is dead: This parasite has reporoduction rate: 83.9186%, and resistance rate: 53.3313
Parasite 7 is dead: This parasite has reporoduction rate: 83.9186%, and resistance rate: 53.3313
Parasite 8 is dead: This parasite has reporoduction rate: 83.9186%, and resistance rate: 53.3313
Animal takes drugs
This animal has immunity rate: 70%, and 4 parasites
Step 5: 
Parasite 0 cannot reproduce
Parasite 1 is dead: This parasite has reporoduction rate: 13.7885%, and resistance rate: 68.5999
Parasite 2 cannot reproduce
Parasite 3 cannot reproduce
Animal takes drugs
This animal has immunity rate: 80%, and 3 parasites
Step 6: 
Parasite 0 cannot reproduce
Parasite 1 cannot reproduce
Parasite is born with 15.7586% reproduction rate, and 82.8199% resistance
Animal takes drugs
This animal has immunity rate: 90%, and 4 parasites
Step 7: 
Parasite 0 is dead: This parasite has reporoduction rate: 15.7586%, and resistance rate: 82.8199
Parasite 1 is dead: This parasite has reporoduction rate: 15.7586%, and resistance rate: 82.8199
Parasite 2 is dead: This parasite has reporoduction rate: 15.7586%, and resistance rate: 82.8199
Parasite 3 is dead: This parasite has reporoduction rate: 15.7586%, and resistance rate: 82.8199
Animal takes drugs
End simulation: 
This animal has immunity rate: 100%, and 0 parasites
Animal object is deleted
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

For HW #3, submit the following files:

- `animal.cpp`, `animal.h`, `parasite.cpp`, `parasite.h`