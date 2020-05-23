#include <iostream>
#include <cstdlib>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
	int n1 = mid-l+1;
	int n2 = r-mid;
	int L[n1],R[n2];
	int i=0,j=0,k;

	for (i=0;i<n1;i++) L[i] = arr[l+i];
	for (j=0;j<n2;j++) R[j] = arr[mid+1+j];

	//Now array has been devided into two temporary arrays
	i=0;j=0;k=l;
	while(i<n1 && j<n2)
	{
		if (L[i]<=R[j])
		{
			arr[k]=L[i];
			i+=1;
		}

		else 
		{
			arr[k]=R[j];
			j+=1;
		}

		k+=1;
	}

	while(i<n1)
	{
		arr[k]=L[i];
		k+=1;
		i+=1;
	}

	while(j<n2)
	{
		arr[k]=R[j];
		k+=1;
		j+=1;
	}

	//Only one array will have excess elements ;that's why only one of above loops will run
}

void mergesort(int arr[],int l,int r)
{
	if (l<r)
	{
		int mid = l+(r-l)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);

		merge(arr,l,mid,r);
	}
}

void printArray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int size;cout<<"Input the size : ";cin>>size;
	cout<<"Enter the elements :";int arr[size];
	for (int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int l=0,r=size-1;
	//cout<<"Enter l :";cin>>l;cout<<"\nEnter r :";cin>>r;

	printArray(arr,size);
	mergesort(arr,l,r);
	cout<<"SORTED array is :";
	printArray(arr,size);

	return 0;
}