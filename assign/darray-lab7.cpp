#include <iostream>
#include <array>
#include <memory>
#include <stdexcept>
using namespace std;

template <typename T, unsigned int N>
class BoundedDynamicArray {
private:
    int count{0};
    array<unique_ptr<T>, N> elements;
public:
    void push_back(T* v){
        if (count < N)
            elements[count++] = unique_ptr<T>(v);
        else
            throw out_of_range("Array is full");
    }
    T& operator[](unsigned int i){
        if (i >= N)
            throw out_of_range("Invalid index");
        return *elements[i];
    };
};

class Resourse{
    static int count;
    int id{0};
    int used{0};
public:
    Resourse() { id = (count++)+1; }
    void use() { used++; cout << "Use resourse " << id << " was used " << used << " times" << endl; }
    ~Resourse() { used = 0; cout << "Delete resourse " << id <<  endl; }
};

int Resourse::count = 0;

int main() {
    const int ArraySize = 3;
    BoundedDynamicArray<Resourse, ArraySize> arr;
    arr.push_back( new Resourse() );
    arr[0].use();
    try {
        arr.push_back( new Resourse() );
        arr[1].use();
        arr.push_back( new Resourse() );
        arr.push_back( new Resourse() );
    } catch (out_of_range& ex){
        cout << "Problem: ";
        cout << ex.what() << endl;
    }
    arr[1].use();
    arr[2].use();

    return 0;
}

