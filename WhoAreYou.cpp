/**  
* Name: WhoAreYou.cpp  
* author: Agata Szulc  
* version 1.1 6/03/2017  
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
  s3 = addingQuotes(s3);  
  fullname = s1+" "+s2+" "+s3;  
  return fullname;  
}  
