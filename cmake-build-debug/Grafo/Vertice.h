//
// Created by rioma on 19/01/23.
//

#ifndef ASDCLION_VERTICE_H
#define ASDCLION_VERTICE_H
#include <limits>
#include <vector>
#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

enum class Color{
    WHITE, GREY, BLACK
};

template <typename T>
class Vertice{
private:
    T value;
    Color colore;
    Vertice<T> *predecessore;
    int distance;

public:
    Vertice(T value);
    T getValue(){return this->value;}
    Color getColor() {return this->colore;}
    int getDistance() {return this->distance;}
    Vertice<T>* getPredecessore() {return this->predecessore;}

    void setValue(T newValue) {this->value = newValue;}
    void setColor (Color newColor) {this->colore = newColor;}
    void setDistance (int newDistance) {this->distance = newDistance;}
    void setPredecessor(Vertice<T> newPredecessor) {this->predecessore = newPredecessor;}
    friend ostream & operator << (ostream &out, const Vertice<T> &vert){
        string c;
        switch (vert.colore) {
            case Color::WHITE: c = "White";
                break;
            case Color::GREY:c = "Grey";
                break;
            case Color::BLACK:c = "Black";
                break;
        }
        out << "Value: " << vert.value << " Color: " << c << " ";
        return out;

    }
};

template <typename T>
Vertice<T> ::Vertice(T value) {
    this->value = value;
    this->color = Color::WHITE;
    this->predecessore = nullptr;
    this->distance = UINT16_MAX;
}

#endif //ASDCLION_VERTICE_H
