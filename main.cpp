#include <iostream>
#include <cmath>
#include <string>

using namespace std;
void myFunction ( int lino, int rullis, int plat, int gar){

  int sum, summa1 ; 
  sum = lino * plat;
  cout << " Izmaksas izklājot platumā :\n" <<sum;

  int summ, summa2 ;
  summ = lino * gar;
  cout << " Izmaksas izklājot garumā :\n" <<summ;

  int summm, summa3 ;
  summm = lino * ( plat * gar );
  cout << " Izmaksas izklājot pa visu telpu :\n" <<summm;
}


int main() {
int lino, sum ;
cout << "Ievadi cik maksā linolejs EUR/m² :\n";
cin >> lino;

int rullis;
cout << " Ievadi linoleja ruļļa platumu metros :\n";
cin >> rullis;

int plat;
cout << " Ievadi telpas platumu metros :\n";
cin >> plat;

int gar;
cout << " Ievadi telpas garumu metros :\n";
cin >> gar;

myFunction ( lino, rullis, plat, gar);
} 