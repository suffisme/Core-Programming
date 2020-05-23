#include <bits/stdc++.h> 
using namespace std; 
 
//to check if s2 is substring of s1
bool isSubstr(string s1, string s2) 
{ 
    int Parent = s1.length(); 
    int Subs = s2.length(); 
    for (int i = 0; i <= Parent - Subs; i++) { 
        int j; 
  
        for (j = 0; j < Subs; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == Subs) 
            return true; 
    } 
  
    return false; 
} 

int main() 
{ 
    string s1,s2; 
    getline(cin,s1);
    getline(cin,s2);
    cout<<(bool)isSubstr(s1,s2);
} 
