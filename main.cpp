/**  
* Name: main.cpp 
* author: Agata Szulc  
* version 2.0 6/03/2017  
*/  
 
#include <iostream>  
#include "WhoAreYou.h"  
  
using namespace std;  
  
int main()  
{  
  string name, surname, pseudonym;  
  
  cout << "Write name:" <<endl;  
  cin >> name;  
  cout << "Write surname:" <<endl;  
  cin >> surname;  
  cout << "Write pseudonym:" <<endl;  
  cin >> pseudonym;  
  cout << "Output:" <<endl;  
  cout << changeVowelToZ(fullName(name, pseudonym, surname)) <<endl;    
  
  return 0;  
}  
