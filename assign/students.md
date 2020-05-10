# HW 5

## Objective
To gain experience with base and derived classes, virtual functions, using applications of polymorphism, and memory management. Also, to gain practice with file I/O.

## Task
You will design a set of classes for storing student information, along with a main program that will read student information from a file, store the data, compute final grades, and then print a summary report to an output file.

## Details

1. Design a set of classes that store student grade information. All classes and their implementions will be stored in `students.hpp` file.  There should be one base class to store common data, and three derived classes that divide the set of students into three categories: *English students*, *History students*, and *Math students*.
    - All data stored in these classes should be **private** or **protected**.
    - Any access to class data from outside should **encapsulated**, and accessed through public member functions.
    - The base class should allocate storage for the following data (and only this data):
        - student's first name (you may assume 20 characters or less)
        - student's last name (you may assume 20 characters or less)
        - which course the student is in (English, History, or Math)

2. Each class should have a function that will compute and return the student's **final average**, based on the stored grades. All grades are based on a 100 point scale. Here are the grades that need storing for each subject, along with the breakdown for computing each final grade:
    - English: Attendance = 10%, Project = 30%, Midterm = 30%, Final Exam = 30%
    - History: Term Paper = 25%, Midterm = 35%, Final Exam = 40%
    - Math: There are 5 quizzes, to be averaged into one Quiz Average (which can be a decimal number). Final grade computed as follows:
        - Quiz Average = 15%, Test 1 = 25%, Test 2 = 25%, Final Exam = 35%
 
3. Write a main program (in a separate file `report.cpp`) that does the following (in this order):

    1. Ask the user for input and output file names. This is the only input and output that should be done from keyboard and to the screen. All other input and output will be to and from files. (See the sample run below).

    2. Read the student data from the input file and store it using a collection of appropriate type. You should use just one collection for all students, not a separate collections for each subject. You will need to allocate this collection elements dynamically, since the size is stored in the input file.  Each student's data should be stored in a separate object. Any dynamically allocated space should be cleaned up appropriately with delete when you are finished with it.

    3. Print a summary report to the output file, as specified below.  You'll need to use the function that computes the final average when you do this, since the final averages will be included in this summary report. 

4. File formats

    - **Input File**: The first line of the input file will contain the number of students listed in the file. This will tell you how big a list you need.  After the first lines, every set of two lines constitutes a student entry. The first line of a student entry is the name, in the format lastName, firstName. Note that a name could include spaces -- the comma will delineate last name from first name. The second line will contain the subject ("English", "History", or "Math"), followed by a list of grades (all integers), all separated by spaces. The order of the grades for each class type is as follows:

        - English -- Attendance, Project, Midterm, Final Exam
        - History -- Term Paper, Midterm, Final Exam
        - Math -- Quiz 1, Quiz 2, Quiz 3, Quiz 4, Quiz 5, Test 1, Test 2, Final Exam

    - **Output File**: The output file that you print should list each student's name (firstName lastName - no extra punctuation between), Final Exam grade, final average (printed to 2 decimal places), and letter grade (based on 10 point scale, i.e. 90-100 A, 80-89 B, etc). Output should be separated by subject, with an appropriate heading before each section, and each student's information listed on a separate line, in an organized fashion. See example below.

## Requirements

- No global variables, other than constants!
- All member data of your classes must be private or protected
- Use the `const `qualifier on member functions wherever it is appropriate.
- The code for this program should be error free. Test with compiler commands before submitting
- You may use any of the standard libraries that have been discussed in class (`iostream`, `iomanip`, `fstream`, as well as C libraries, like `cstring`, `cctype`, etc). You may also use the `string` class library if you wish.
- You **may not use any of the other STL** (Standard Template Libraries) besides `string`.

##  Extra Credit

- Within each subject in the output file, list the students in alphabetic order, sorted by last name. Do not change the given case (upper/lower case) of the names that were read from the input file when you print the output file, and do not change the output file format. Just print the records in order by last name. This sort needs to be true alphabetical (not just the "lexicographical" sort). 

## Sample [Input File](studentdata.txt)

```
6
Bunny, Bugs
Math 90 86 80 95 100 99 96 93
Schmuckatelli, Joe
History 88 75 90
Dipwart, Marvin
English 95 76 72 88
Crack Corn, Jimmy
Math 44 58 23 76 50 59 77 68
Kirk, James T.
English 40 100 68 88
Lewinsky, Monica
History 60 72 78
```

## Sample Output File

```
Student Grade Summary 
--------------------- 

ENGLISH CLASS 

Student                                   Final   Final   Letter 
Name                                      Exam    Avg     Grade 
---------------------------------------------------------------- 
Marvin Dipwart                            88      80.30   B 
James T. Kirk                             88      80.80   B 
  

HISTORY CLASS 

Student                                   Final   Final   Letter 
Name                                      Exam    Avg     Grade 
---------------------------------------------------------------- 
Joe Schmuckatelli                         90      84.25   B 
Monica Lewinsky                           78      71.40   C 
  

MATH CLASS 

Student                                   Final   Final   Letter 
Name                                      Exam    Avg     Grade 
---------------------------------------------------------------- 
Bugs Bunny                                93      94.83   A 
Jimmy Crack Corn                          68      65.33   D 
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

For HW #5, submit the following files:

- `report.cpp`, `students.hpp`
