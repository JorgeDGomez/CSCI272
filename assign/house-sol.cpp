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
/*
Size: 3
    X 
   X X
  X * X
 X * * X
X X * X X
  X * X
  X X X

Size: 4  
     X 
    X X
   X * X
  X * * X
 X * * * X
X X * * X X
  X * * X
  X * * X
  X X X X
*/
void House::Draw(){
    // show roof
    int rsize = size + 2;
    bool reven = rsize % 2 == 0;
    int rmid = reven ? rsize / 2 : rsize / 2 + 1;
    for (int i = 0; i < rsize-1; ++i){
        // padding
        for (int j = 1; j < rsize-i; ++j)
            cout << " ";
        // roof begins - put border
        cout << border << " ";
        // fill roof
        for (int j = 1; j < i; ++j){
            cout << fill << " ";
        }
        // roof end - put border
        if (i > 0)
            cout << border;
        cout << endl;
    }
    // show floor
    for (int i = 1; i <= size; ++i){
        if (i == 1)
            cout << border << " ";
        else
            cout << "  ";
        for (int j = 1; j <= size; ++j){
            if (i == size)
                cout << border << " ";
            else
                if (j == 1 || j == size)
                    cout << border << " ";
                else
                    cout << fill << " ";            
        }
        if (i == 1)
            cout << border << " ";
        cout << endl;
    }
}

void House::Summary(){
    cout << "base size = " << size << " units" << endl;
    cout << "perimeter = " << Perimeter() << " units" << endl;
    cout << "area = " << setprecision(2) << Area() << " sq. units" << endl;
    cout << "House looks like:" << endl;
    Draw();
}

