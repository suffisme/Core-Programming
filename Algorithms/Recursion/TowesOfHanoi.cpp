
#include <iostream>
using namespace std;
enum tower {A='A',B='B',C='C'};

void TowersOfHanoi(int n,tower x,tower y,tower z){
	//Move the top n disks from tower x to tower z
	if (n)
	{
		TowersOfHanoi(n-1,x,z,y);
		cout<<"move top disk from tower "<<char(x) <<" to top of tower "<<char(y)<<endl;
		TowersOfHanoi(n-1,z,y,x);
				
		
	}
} 

int main()
{
	int n;

	cout<<"Enter the no of disk in tower 1 : ";
	cin>>n;
	TowersOfHanoi(n,A,B,C);
	return 0;
}