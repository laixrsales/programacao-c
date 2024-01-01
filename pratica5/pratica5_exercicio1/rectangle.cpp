#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle(){
    _length = 0;
    _width = 0;
}

Rectangle::~Rectangle(){

}

float Rectangle::get_length(){
    return _length;
}

float Rectangle::get_width(){
    return _width;
}

void Rectangle::set_length(float length){
    if (length >= 0 && length <= 20){
        _length = length;
    } else {
        std::cerr << "Valor inválido. O valor deve ser um número de 0 a 20." << std::endl;
    }
}

void Rectangle::set_width(float width){
    if (width >= 0 && width <= 20){
        _width = width;
    } else {
        std::cerr << "Valor inválido. O valor deve ser um número de 0 a 20." << std::endl;
    }
}

float Rectangle::perimeter(){
    return 2*this->_length + 2*this->_width;
}

float Rectangle::area(){
    return this->_length * this->_width;
}
