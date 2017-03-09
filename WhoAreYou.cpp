/**  
* Name: WhoAreYou.cpp  
* author: Agata Szulc  
* version 2.0 6/03/2017  
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

string changeVowelToZ (string s)  
{  
  int i;  
  for (i=0; i<s.length(); i++)  
    if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' ||  
        s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')  s[i]='z';  
  return s;  
}  
