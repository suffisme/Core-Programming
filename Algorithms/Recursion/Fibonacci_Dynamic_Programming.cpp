#include<iostream>
using namespace std;
long long dp[101];
int f1(int n)
{
	if(dp[n]!=-1)
		return dp[n];
	if(n==0 || n==1) return 1;
	else return dp[n]=f1(n-1)+f1(n-2);
}     
int main()
{
	for(int i=0;i<101;i++)
		dp[i]=-1;
	for(int i=0;i<50;i++)
	cout<<i<<" "<<f1(i)<<endl;
} 