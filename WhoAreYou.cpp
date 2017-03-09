/**  
* Name: WhoAreYou.cpp  
* author: Agata Szulc  
* version 3.0 6/03/2017  
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

string reverseString(string s) 
{ 
  reverse(s.begin(),s.end()); 
  return s; 
} 
