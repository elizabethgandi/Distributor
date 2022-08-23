#include "Drink.h"

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

///--------------------------------------------
/// Constructor of the class ------------------
///--------------------------------------------

Drink::Drink(string na, int nu, float p)
{
    this->name   = na;
    this->number = nu;
    this->price  = p;
}

///--------------------------------------------
/// Destructor of the class -------------------
///--------------------------------------------

Drink::~Drink(){}

///--------------------------------------------
/// Guetter of the name attribut --------------
///--------------------------------------------

string Drink::getNa() const
{
    return this->name;
}

///--------------------------------------------
/// Guetter of the number attribut ------------
///--------------------------------------------

int Drink::getNu() const
{
    return this-> number;
}

///--------------------------------------------
/// Guetter of the price attribut -------------
///--------------------------------------------

float Drink::getP() const
{
    return this->price;
}

///--------------------------------------------
/// Setter of the name attribut ---------------
///--------------------------------------------

void Drink::setNa(string name) 
{
    this->name = name;
}

///--------------------------------------------
/// Setter of the number attribut -------------
///--------------------------------------------

void Drink::setNu(int number)
{  
    this->number = number;
}

///--------------------------------------------
/// Setter of the price attribut --------------
///--------------------------------------------

void Drink::setP(float price) 
{
    this->price = price;
}