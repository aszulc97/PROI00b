/**  
* Name: WhoAreYou.cpp  
* author: Agata Szulc  
* version 1.0 5/03/2017  
*/  
 
#include <string>  
#include "WhoAreYou.h"  
using namespace std;  
  
string addingQuotes(string s)  
{  
  s = "\""+s+"\"";  
  return s;  
} 
 
string fullName(string s1, string s2, string s3)  
{  
  string fullname;  
  s2 = addingQuotes(s2);  
  fullname = s1+" "+s2+" "+s3;  
  return fullname;  
}  
