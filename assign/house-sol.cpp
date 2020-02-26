#include <iostream>
#include <iomanip>
#include <cmath>
#include "house.h"
using namespace std;

int House::GetSize() {
    return size;
}

int House::Perimeter(){
    return size*3 + (size+2)*3;
}

double House::Area(){
    return size*size + size*size*sqrt(3)/4 ;
}

void House::Grow(){
    if (size < 37)
        size++;
}

void House::Shrink(){
    if (size > 3)
        size--;
}

void House::SetBorder(char b){
    if (b >= 33 && b <= 126)
        border = b;
    else
        border = 'X';
}

void House::SetFill(char f){
    if (f >= 33 && f <= 126)
        fill = f;
    else
        fill = '*';
}

void House::Draw(){
    // show roof
    int rsize = size + 2;
    bool reven = rsize % 2 == 0;
    int rmid = reven ? rsize / 2 : rsize / 2 + 1;
    for (int i = 0; i < rsize; ++i){
        for (int j = 1; j <= rsize; ++j){
            if (j == rmid - i)
                cout << border;
            else if (j > rmid -i && j < rmid + (reven ? i+1 : i))
                cout << fill;
            else if (j == rmid + (reven ? i+1 : i))
                cout << border;
            else
                cout << " ";
        }
        cout << endl;
        if (rmid + i - (reven ? 0 : 1) > size)
            break;
    }
    // show floor
    for (int i = 1; i <= size; ++i){
        cout << " ";
        for (int j = 1; j <= size; ++j){
            if (i == size)
                cout << border;
            else
                if (j == 1 || j == size)
                    cout << border;
                else
                    cout << fill;            
        }
        cout << endl;
    }
}

void House::Summary(){
    cout << "base size = " << size << " units" << endl;
    cout << "perimeter = " << Perimeter() << " units" << endl;
    cout << "area = " << setprecision(2) << Area() << " sq. units" << endl;
    Draw();
}

