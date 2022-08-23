#ifndef SQUARE_H
#define SQUARE_H

#include "Drink.h"
#include "Can.h"

#include <queue>
#include <string>

using namespace std;

class Square 
{
    public: 

    bool  nbBusy;
    Drink drink;
    int   nbOcc;
    std::queue<Can> FCan; 

    Square(string na, int nu, float p);
    ~Square();

    void   add(Can value, int nb);
    void   remove();
    void   emptySquare();
    void   goodPrice(float p);

    void setDrinkName(string name);
    void setDrinkNumber(int num);
    void setDrinkPrice(float p);


    int    first();
    int    getsize();

    int    getDrinkNumber();

    string getDrinkName();
    
    float  getDrinkPrice();
    
    
    bool   isEmpty();
    bool   isFull();
    bool   restDrink();

    private:

};
#endif