/*
 * =====================================================================================
 *
 *       Filename:  house.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/29/2020 02:49:50 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include "house.h"

int House::GetSize() {
    return size;
}

int House::Perimeter(){
    return 0;
}

double House::Area(){
    return 0.0;
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
    border = b;
}

void House::SetFill(char f){
    fill = f;
}

void House::Draw(){}
void House::Summary(){}

