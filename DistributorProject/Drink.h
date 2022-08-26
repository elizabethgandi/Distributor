#ifndef DRINK_H
#define DRINK_H

#include <string>

using namespace std;

class Drink
{
    public:

    Drink(string na, int nu, float p) ;
    ~Drink();

    void setName(string name) ;
    void setNumber(int number)  ;
    void setPrice (float price) ;
    string getName() const;
    int getNumber() const;
    float getPrice()  const;

    private:

    string name;
    int number;
    float  price;
};
#endif