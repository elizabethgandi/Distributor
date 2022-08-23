#include "Distributor.h"
#include "Square.h"

#include <iostream>
#include <cassert>
#include <vector>
#include <string>

using namespace std;

///--------------------------------------------
/// Constructor of the class ------------------
///--------------------------------------------

Distributor::Distributor(int w, int h)
{
    
    int size = w*h;
    this->L  = h;
    this->C  = w;
    this->TDistributor.resize(size);
    
    float f = 0.0;
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        this->TDistributor[i] = new Square("", j , f);
    }
}

///--------------------------------------------
/// Destructor of the class -------------------
///--------------------------------------------

Distributor::~Distributor(){}

///--------------------------------------------
/// Method which return the width of the distributor 
///--------------------------------------------

int Distributor::width() const
{
    return C;
}

///--------------------------------------------
/// Method which return the height of the distributor 
///--------------------------------------------

int Distributor::height() const
{
    return L;
}

///--------------------------------------------
/// Method which return the size of the distributor 
///--------------------------------------------

int Distributor::size() const
{
    return width()*height();
}

///--------------------------------------------
/// Method which allow to access to a square -- 
///--------------------------------------------

int Distributor::accessSquare(int i, int j) const
{
    assert(isValidCoordinate(i,j));
    return ((i-1)*width()+j)-1;
}

///--------------------------------------------
/// Method which verify if the coordonate are corecte or not 
///--------------------------------------------

bool Distributor::isValidCoordinate(int i, int j) const
{
    return i>0 && i<=this->height() && j>0 && j <=this->width();
}

///--------------------------------------------
/// Method which return the capacity of a queue in the square i
///--------------------------------------------

int Distributor::getCapaSquare(int i)//, int j
{
    cout << " get Capa" << this ->TDistributor[i] ->getsize();
    return this ->TDistributor[i] ->getsize();
}

///--------------------------------------------
/// Method which return a pair (i,j) from a k number 
/// where k is the place number in the distributor
///--------------------------------------------

std::pair<int, int> Distributor::toCoordinate(int k) const
{
     assert(k >= 0 && k < this->size());
     int row    = (k) / this->width() + 1 ;
     int column = (k) % this->width() + 1;

     return std::make_pair(row,column);
}

///--------------------------------------------
/// Method which return the place number k from 
/// coordonates (i,j)
///--------------------------------------------

int Distributor::toIndex(int i, int j) const
{ 
     assert(isValidCoordinate(i,j));
     return ((i-1)*width()+j)-1;
}

///--------------------------------------------
/// Method which allows to buy a can ----------
///--------------------------------------------

void Distributor::buyCan(int number)
{
    std::pair<int, int> p;
    int i = 0;

    while ( i != number )
    { 
        i++;
    }

    p = toCoordinate(i);
    int k = toIndex(p.first,p.second);

    if (number == this ->TDistributor[k] ->getDrinkNumber())
    {
        cout << "\n The drink name is : " << this ->TDistributor[k] -> getDrinkName() <<endl;
        float priceD = this ->TDistributor[k] -> getDrinkPrice();
        this ->TDistributor[k] -> goodPrice(priceD);
        this ->TDistributor[k] -> remove();
    }
}

