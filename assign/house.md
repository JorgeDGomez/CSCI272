# Programming Assignment #1
Due: Sun, Feb 16, 11:59 PM

## Objective:
Upon completing this assignment, you should be able to implement a simple class, as well as gain a better understanding of the building and use of classes and objects.

## Task
You are to write a class called House, using filenames `house.h` and `house.cpp`, that will allow creation and handling of House objects, as described below.

### House Dimensions

Each house object should be pictured as follows:

- The base of the house is a square with a given side length. Minimum length is 3, maximum is 37. This will be referred to as the base size of the house.
- The roof of the house is an equilateral triangle
    - Recall that an equilateral triangle is one that has all three sides of equal length
- The roof will always overhang the base by one length unit on each side, so the length of the triangle's side will be 2 more than the length of the square's side
- Any calculations for the object are based on the dimensions described above. The ASCII drawing we will do is an approximation of this
- Example house image, with base size 5:

![house](../img/house.png)

### Class Details

1. The single constructor for the House class should have 3 parameters: an integer size (required), which is the base size of the house; a border character (optional, with a default of `X` - uppercase); and a fill character (optional, with a default of `*`). If the size provided is less than 3, set the size to 3. If the size provided is greater than 37, set the size to 37. The class will need to provide internal storage for any member data that must be kept track of.

2. There should be member functions `GetSize`, `Perimeter`, and `Area`, which will return the house's base size, the perimeter of the house, and the area of the house, respectively. The first 2 should return integer results. The `Area` function should return its result as a double. Note that for `Area`, you'll need to compute the areas of the triangle roof and the square base and combine them.

3. There should be member functions `Grow` and `Shrink`, which will increase or decrease (respectively) the base size of the house by 1, unless this would cause the size to go out of bounds (out of the 3-37 range); in the latter case, `Grow` and `Shrink` should make no change to the size.

4. There should be member functions `SetBorder` and `SetFill`, which each allow a new border or fill character (respectively) to be passed in as a parameter. There is a chart of ASCII characters in an appendix of the textbook. The characters that should be allowed for the border or fill characters are any characters from the `!` (ascii 33) up through the `~` (ascii 126). If an attempt is made to set the border or fill characters to anything outisde the allowable range, the function should set the border or fill back to its original default (the ones listed for the constructor - the border default is `X` and the fill default is `*`).

5. There should be a member function called `Draw` that will display a picture of the house on the screen. You may assume that the cursor is already at the beginning of a line when the function begins, and you should make sure that you leave the cursor on the line following the picture afterwards (i.e. print a newline after the last line of the house). Use the border character to draw the border of the house, and use the fill character to draw the internal characters. Separate the characters on a line in the picture by a single space to make the house look more proportional (to approximate the look of an equilateral triangle and a square). You may not use formatting functions like `setw` to draw the figure. This must be handled with loops. (You will only print out the newline, spaces, the border character, and maybe the fill character on any given line). Note that the bottom of the roof and the top of the base will be on a shared line - the overhang area will be border characters, but everything internal will be fills. See the sample run linked below to see exactly how this should look.

6. Provide a member function called Summary that displays all information about a house: its base size, perimeter, area, and a picture of what it looks like. When displaying the area (decimal data), always show exactly 2 decimal places. Your output should be in the exact same format as mine, see below.

7. I am providing a sample driver program (called [house-driver.cpp](https://github.com/wildart/CSCI272/blob/master/assign/house-driver.cpp)) that uses objects of type House and illustrates sample usage of the member functions. 

8. Your class declaration and definition files must work with my `main` program from the **driver**, as-is (do not change my program to make your code work!). You are encouraged to write your own driver routines to further test the functionality of your class, as well. Most questions about the required behavior of the class can be determined by carefully examining my driver program and the sample execution. Keep in mind, this is just a sample. Your class must meet the requirements listed above in the specification - not just satisfy this driver program. (For instance, I haven't tested every illegal fill character in this driver program - I've just shown a sample). Your class will be tested with a larger set of calls than this driver program represents.

## General Requirements

- No global variables, other than constants!
- All member data of your class must be private
- You will need to use the `<iostream>` library for output.  You may use the `<iomanip>` library for formatting your decimal output to two places, if you wish to use the parameterized stream manipulators, but you may not use `setw()` or other output formatting functions for drawing the actual figure. You may use the `<cmath>` library
- Do not use language or library features that are C++11-only
- When you write source code, it should be readable and well-documented.
- Here are some general notes on style guidelines
- Your `house.h` file should contain the class declaration only.  The `house.cpp` file should contain the member function definitions.

## Driver

[Test Driver](driver.cpp)

### Output Example

[Driver Output](hw1sample.txt)

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

- `house.h`
- `house.cpp`

Make sure your filenames are these exact names, and do not submit the `driver.cpp` file. 