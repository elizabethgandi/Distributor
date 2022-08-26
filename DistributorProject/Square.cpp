#include "Square.h"
#include "Drink.h"
#include "Can.h"

#include <iostream>
#include <cassert>
#include <queue>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

///--------------------------------------------
/// Constructor of the class ------------------
///--------------------------------------------

Square::Square(string na, int nu, float p) : drink( na, nu, p) 
{ }

///--------------------------------------------
/// Destructor of the class -------------------
///--------------------------------------------

Square::~Square(){}

///--------------------------------------------
/// Method which add can in the square --------
///--------------------------------------------

void Square::add(Can value, int nb) 
{
    for (int i = 0; i < nb ; i++)
        this->FCan.push(value); 
}

///--------------------------------------------
/// Method which remove can in the square -----
///--------------------------------------------

void Square::remove()
{}

///--------------------------------------------
/// Getter of the name attribute -------------
///--------------------------------------------

string Square::getDrinkName()
{
    return drink.getName();
}

///--------------------------------------------
/// Setter of the name attribute --------------
///--------------------------------------------

void Square::setDrinkName(string n)
{ 
    drink.setName(n);
}

///--------------------------------------------
/// Getter of the number attribute ------------
///--------------------------------------------

int Square::getDrinkNumber()
{
    return drink.getNumber();
}   

///--------------------------------------------
/// Setter of the number attribute ------------
///--------------------------------------------

void Square::setDrinkNumber(int num)
{
    drink.setNumber(num);
}

///--------------------------------------------
/// Guetter of the price attribut -------------
///--------------------------------------------

float Square::getDrinkPrice()
{  
    return drink.getPrice();
}

///--------------------------------------------
/// Setter of the price attribut ---------------
///--------------------------------------------

void Square::setDrinkPrice(float p)
{
    drink.setPrice(p);
}

///--------------------------------------------
/// Method which empties the square -----------
///--------------------------------------------

void Square::emptySquare()
{    
    while(!this->FCan.empty())
        this->FCan.pop();
}

///--------------------------------------------
/// Method which return the size of the queue -
///--------------------------------------------

int Square::getsize()
{
    int total = 0;
    while(!this->FCan.empty())
    {
        total ++;
        this->FCan.pop();
    }
    return total;
}

///--------------------------------------------
/// Method which return if the queue is empty -
///--------------------------------------------

bool Square::isEmpty()
{
    int tot = getsize();
    if (tot == 0)
    {
        return true; // return 1 if yess
    }
    else
    {
        return false; // return 0 else
    }
}

///--------------------------------------------
/// Method which return if the queue is full --
///--------------------------------------------

bool Square::isFull()
{
    return isEmpty() == false;
}

///--------------------------------------------
/// Method which calcul the amount remaining to paid 
///--------------------------------------------

void Square::goodPrice(float p)
{
    double PI = p;
    double PC;
    double P;

    cout << " The begining price : "<< PI << endl;
    cout << " Enter the money, please"<<endl;
    cin >> PC;

    while (round(PI * 1000.0) / 1000.0 != round(PC * 1000.0) / 1000.0)
    {
        cout << "\n Rest : "<< PI - PC << endl;
        cout << " If you want to continute, please pay the rest "<< endl;
        cin>>P;
        PC = PC + P;
    }
    cout << "\n Thank you " << endl;
}

///--------------------------------------------
/// Method return if there is a drink or not in the queue
///--------------------------------------------

bool Square::restDrink()
{
    if (getsize() == 0) 
    {
        cout << "There is not this drink anymore"<<endl;
        return false;
    }
    cout << "At least one drink left "<<endl;
    return true;
}