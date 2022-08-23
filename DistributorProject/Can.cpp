#include "Can.h"

#include <iostream>

using namespace std;


///--------------------------------------------
/// Constructor of the class ------------------
///--------------------------------------------

Can::Can(float v)
{
    this->volume = v;
}

///--------------------------------------------
/// Destructor of the class -------------------
///--------------------------------------------

Can::~Can()
{ }

///--------------------------------------------
/// Method which return the volum of the can --
///--------------------------------------------

float Can::getVol() const 
{
    return this->volume;
}