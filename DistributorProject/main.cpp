#include <iostream>
#include "Distributor.h"
#include "Drink.h"
#include "Can.h"
#include "Square.h"
#include <string>
#include <queue>
using namespace std;

int main (void){

  cout <<"Welcome to the distributor"<<endl;

  // Static construction of a distributor -----------------------------
  int w = 3;
  int h = 2;

  Distributor Dcreated(w, h);

  // Creation of can -----------------------------------------------

  Can canette(0.33);
  Can pint(0.50);

  // Creation of square -----------------------------------------------
  int nu;
  bool buy =  false;
  int price = 0;

  nu = 1;
  Square c1( "coca", nu, 0.50);
  c1.add(canette, 7);

  Dcreated.TDistributor[nu]->setDrinkName  ( c1.getDrinkName  () );
  Dcreated.TDistributor[nu]->setDrinkNumber( c1.getDrinkNumber() );
  Dcreated.TDistributor[nu]->setDrinkPrice ( c1.getDrinkPrice () );

  // coca added 
  //----------------------------------------------------------

  nu = 2;
  Square c2( "sprite", nu, 0.90);
  c2.add(canette, 4);

  Dcreated.TDistributor[nu]->setDrinkName  ( c2.getDrinkName  () );
  Dcreated.TDistributor[nu]->setDrinkNumber( c2.getDrinkNumber() );
  Dcreated.TDistributor[nu]->setDrinkPrice ( c2.getDrinkPrice () ); 

  //sprite added 
  //----------------------------------------------------------

  nu = 3;
  Square c3( "water", nu, 1.50);
  c3.add(pint, 2);
  Dcreated.TDistributor[nu]->setDrinkName  ( c3.getDrinkName  () );
  Dcreated.TDistributor[nu]->setDrinkNumber( c3.getDrinkNumber() );
  Dcreated.TDistributor[nu]->setDrinkPrice ( c3.getDrinkPrice () );  

  //water added 
  //----------------------------------------------------------

  nu = 4;
  Square c4( "biere", 4, 5.50);
  c4.add(pint, 2);

  Dcreated.TDistributor[nu]->setDrinkName  ( c4.getDrinkName  () );
  Dcreated.TDistributor[nu]->setDrinkNumber( c4.getDrinkNumber() );
  Dcreated.TDistributor[nu]->setDrinkPrice ( c4.getDrinkPrice () );  

  //biere added 
  //----------------------------------------------------------

  nu = 5;
  Square c5( "monster", 5, 8.50);
  c5.add(canette, 8);

  Dcreated.TDistributor[nu]->setDrinkName  ( c5.getDrinkName  () );
  Dcreated.TDistributor[nu]->setDrinkNumber( c5.getDrinkNumber() );
  Dcreated.TDistributor[nu]->setDrinkPrice ( c5.getDrinkPrice () );  

  //monster added \n\n"; 
  //----------------------------------------------------------

//  For buy a can ---------------------------------------------------------

  int k, answer;
  cout << endl;
  cout << " If you want to buy something, enter 1, else enter 0 "<<endl;
  cin  >> answer;
  
  if ( answer == 1)
  {
    cout << "\n Enter " << c1.getDrinkNumber() <<" for "<<  c1.getDrinkName() <<endl;
    cout << " Enter " << c2.getDrinkNumber() <<" for "<<  c2.getDrinkName() <<endl;
    cout << " Enter " << c3.getDrinkNumber() <<" for "<<  c3.getDrinkName() <<endl;
    cout << " Enter " << c4.getDrinkNumber() <<" for "<<  c4.getDrinkName() <<endl;
    cout << " Enter " << c5.getDrinkNumber() <<" for "<<  c5.getDrinkName() <<endl; 

    cout << "\n Enter de number of the drink you want "<<endl;
    cin >> k;
    Dcreated.buyCan(k);
    buy = true;
  }
  else 
  {
    cout << " Have a nice day \n"<<endl;
  }


//  For count the total number of can or the total price -------------------
  
  int i = c1.getsize();
  int j = c2.getsize();
  int a = c3.getsize();
  int c = c4.getsize();
  int d = c5.getsize();

  int alpha = i*c1.getDrinkNumber();
  int beta  = j*c2.getDrinkNumber();
  int delta = a*c3.getDrinkNumber();
  int gamma = c*c4.getDrinkNumber();
  int mu    = d*c5.getDrinkNumber();

  int rep;
  cout << "\n Do you want to know the total price of the distributor (1) or the total number of drink (2) ?" << endl;
  cout << " If you want to quite enter 0" << endl;
  cin >> rep;
  
  if (rep == 1)
  {  
    int tot = 0;
    tot = alpha + beta + delta + gamma + mu;
    cout << " The total price of the distributor is " <<tot<<endl;
  }
  else if (rep == 2)
  {
    int t = 0;
    t = i + j + a +c +d ;

    if (buy == true)
      t = t - 1 ;

    cout << " The total number of drink is " <<t<<endl;
  }

  cout << "\n End " <<endl;
}