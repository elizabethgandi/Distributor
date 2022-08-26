#include "Drink.h"

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

///--------------------------------------------
/// Constructor of the class ------------------
///--------------------------------------------

Drink::Drink(string name, int number, float price)
{
    this->name   = name;
    this->number = number;
    this->price  = price;
}

///--------------------------------------------
/// Destructor of the class -------------------
///--------------------------------------------

Drink::~Drink(){}

///--------------------------------------------
/// Getter of the name attribute --------------
///--------------------------------------------

string Drink::getName() const
{
    return this->name;
}

///--------------------------------------------
/// Getter of the number attribute ------------
///--------------------------------------------

int Drink::getNumber() const
{
    return this-> number;
}

///--------------------------------------------
/// Getter of the price attribute -------------
///--------------------------------------------

float Drink::getPrice() const
{
    return this->price;
}

///--------------------------------------------
/// Setter of the name attribute --------------
///--------------------------------------------

void Drink::setName(string name) 
{
    this->name = name;
}

///--------------------------------------------
/// Setter of the number attribute ------------
///--------------------------------------------

void Drink::setNumber(int number)
{  
    this->number = number;
}

///--------------------------------------------
/// Setter of the price attribute -------------
///--------------------------------------------

void Drink::setPrice(float price) 
{
    this->price = price;
}