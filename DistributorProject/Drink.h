#ifndef DRINK_H
#define DRINK_H

#include <string>

using namespace std;

class Drink
{

    public:

    Drink(string na, int nu, float p) ;
    ~Drink();

    void setNa(string name) ;
    void setNu(int number)  ;
    void setP (float price) ;

    string getNa() const;

    int    getNu() const;
    
    float  getP()  const;

    private:

    string name;
    int number;
    float  price;
};
#endif