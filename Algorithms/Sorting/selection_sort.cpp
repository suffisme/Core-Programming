#include <iostream>
using namespace std;


int main(){
	int arr[9]={10,5,7,3,8,6,4,2,9};
	int temp=0;int* p =&temp;int min_index;
	int size = sizeof(arr)/sizeof(arr[0]);cout<<size<<endl;
	for (int i=0;i<size-1;i++){
		min_index = i;
		for (int j=i;j<size;j++){
			if (arr[j] < arr[min_index]){
					min_index=j;
				}
			else continue;
			}
		*p = arr[i];arr[i]= arr[min_index];arr[min_index]=*p;
	}

	for (int i=0;i<size;i++) cout<<arr[i]<<" ";
	cout<<endl;

	return 0;

}
		

