#ifndef DISTRIBUTOR_H
#define DISTRIBUTOR_H

#include "Square.h"

#include <string>
#include <vector>

using namespace std;

class Distributor 
{

    public:

    vector<Square *> TDistributor;
    std::pair<int, int> toCoordinate(int k) const;

    Distributor(int w, int h);
    ~Distributor();

    int  width()                         const;
    int  height()                        const;
    int  size()                          const;
    int  accessSquare(int i, int j)      const;
    int  getCapaSquare(int i)          ;//, int j
    int  toIndex(int i, int j)           const;

    void display()                       const;
    void buyCan(int number);

    bool isValidCoordinate(int i, int j) const;

    private:
    
    int L;
    int C;
    
};
#endif
