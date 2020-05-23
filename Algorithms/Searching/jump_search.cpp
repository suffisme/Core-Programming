#include <iostream>
#include <cmath>

using namespace std;

int jump(int arr[],int size,int x){
	int m = sqrt(size);
	
        int k=0;int t = k*m;
	while (arr[k*m]<=x) k+=1;
	cout<<k<<endl;
	for (t=k*m;t<=k*(m+1);t++){
		if (arr[t] == x) return t;
		else continue;
	}

	return -1;
}


int main(){
	int x;cin>>x;cout<<endl;
	int arr[] = {2,3,21,45,67,98};
	int size = sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<size;i++) cout<<arr[i]<<" ";cout<<endl;

	int result = jump(arr,size,x);

	if (result != -1) cout<<"Element found at "<<result<<endl;
	else cout<<"Element not found"<<endl;

	return 0;
}
