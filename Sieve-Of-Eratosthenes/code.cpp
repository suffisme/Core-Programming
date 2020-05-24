#include <bits/stdc++.h> 
using namespace std; 
  
void SieveOfEratosthenes(int n) 
{  
    bool prime[n+1]; 
    //make every element correspond to true considering each no. to be prime in the beginning.
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=n; p++) 
    { 
       //if that no. is prime all its factor must be non prime
        if (prime[p] == true) 
        { 
            //all multiples of i are non prime
            //numbering starting from p^2 because all prime less than p^2 are marked already
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    
    for (int p=2; p<=n; p++) 
       if (prime[p])   //printing if prime[p] is true
          cout << p <<" "; 
} 
  
int main() 
{ 
    long n;
    cin>>n;
    SieveOfEratosthenes(n); 
    return 0; 
}
