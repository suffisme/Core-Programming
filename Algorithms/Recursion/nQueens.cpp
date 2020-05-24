//Programs to place n Queens on n*n chessboard such that no two elinimate each other
// n:max = 10

#include <bits/stdc++.h>
  
using namespace std; 
  
int arr[10], no; 
  
void nQueens(int k, int n); 
bool canPlace(int k, int i); 
void display(int n); 
  
// Function to check queens placement
// this calls the display function when all queens are placed successfulyy
void nQueens(int k, int n){ 
  
    for (int i = 1;i <= n;i++){ 
        if (canPlace(k, i)){ 
            arr[k] = i; 
            if (k == n) 
                display(n); 
            else
                nQueens(k + 1, n); 
        } 
    } 
} 
  
// Helper Function to check if queen can be placed
//It returns false if at that position, placing queen would cut the other
bool canPlace(int k, int i){ 
    for (int j = 1;j <= k - 1;j++){ 
        if (arr[j] == i ||  
            (abs(arr[j] - i) == abs(j - k))) 
           return false; 
    } 
    return true; 
} 
  
// Function to display placed queen 
void display(int n){ 
    breakLine  
    cout << "Arrangement No. " << ++no; 
    breakLine 
  
    for (int i = 1; i <= n; i++){ 
        for (int j = 1; j <= n; j++){ 
            if (arr[i] != j) 
                cout << "0   "; 
            else
                cout << "1   "; 
        } 
        cout <<"\n\n"; 
    } 
  	cout << "\n---------------------------------\n"; 
} 
  
 
int main(){ 
    int n;
    cout<<"Enter The No. of Queens : ";
    cin>>n;
    if(n<=10)     
    	nQueens(1, n);     
    return 0; 
}