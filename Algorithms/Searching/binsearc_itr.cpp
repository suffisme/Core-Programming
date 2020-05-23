# include <iostream>
# include <iomanip>

using namespace std;

int binarysearch(int arr[],int size,int n)
{
	int i;
	int begin = 0;end = size;int e=end-1;
	
	for (i=begin;i<=e;i++){
		
		int mid = begin + (end-begin)/2;
		if (arr[mid] == n) {return arr[mid];break;}
		else if (arr[mid]<n){
			begin=mid+1;
			}

		else {
			end = mid-1;
		}
	}

	return -1;	

}

int main(){
	int n;cin>>n;	
	int arr[9]={2,3,4,5,6,7,8,9,10};	
	int size=sizeof(arr)/sizeof(arr[0]);

	for (int i=0;i<size;i++) cout<<arr[i]<<" ";
	cout<<endl;

	int z = binarysearch(arr,size,n);
	if (z==n) cout<<"It's equal"; else cout<<"not equal";

 	return 0;
}
