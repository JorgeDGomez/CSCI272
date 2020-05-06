# Lab 7

## Problem

Create a **dynamic** array class. That allows handling of shared resources.

## Rubric

Write a program that accomplishes each of the following:

- Write a class `BoundedDynamicArray` that dynamically grow up to a specified bound.
- Implement method `push_back` that add element to array. This method should throw an exception if you'll try to add more elements then the size of the array.
- Implement operator `[]` to access elements of the array.
- You **must not implement** the destructor `BoundedDynamicArray` class.
- Your code have to be compiled without errors and the test driver must be executed without error.


## Test Driver

Add the below test driver code to your `darray.cpp` file.

```c++
#include <iostream>
#include <array>
#include <memory>
#include <stdexcept>
using namespace std;

template <typename T, unsigned int N>
class BoundedDynamicArray {
private:
    // put your data members here
public:
    void push_back(T* v);
    T& operator[](unsigned int i);
};

class Resource{
    static int count;
    int id{0};
    int used{0};
public:
    Resource() { id = (count++)+1; }
    void use() { used++; cout << "Use resource " << id << " was used " << used << " times" << endl; }
    ~Resource() { used = 0; cout << "Delete resource " << id <<  endl; }
};

int Resourse::count = 0;

int main() {
    const int ArraySize = 3;
    BoundedDynamicArray<Resource, ArraySize> arr;
    arr.push_back( new Resource() );
    arr[0].use();
    try {
        arr.push_back( new Resource() );
        arr[1].use();
        arr.push_back( new Resource() );
        arr.push_back( new Resource() );
    } catch (out_of_range& ex){
        cout << "Problem: ";
        cout << ex.what() << endl;
    }
    arr[1].use();
    arr[2].use();

    return 0;
}
```

### Test Output
```
Use resource 1 was used 1 times
Use resource 2 was used 1 times
Problem: Array is full
Use resource 2 was used 2 times
Use resource 3 was used 1 times
Delete resource 3
Delete resource 2
Delete resource 1
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

For Lab #7, submit the following files:

- `darray.cpp`
