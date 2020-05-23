#include <iostream>
using namespace std;

void printArray(int arr[],int size)
{
	for (int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}


void insert(int arr[],int size)
{
	int key , i=1 , j;
	for (i=1;i<size;i++)
	{
		key = arr[i];
		for(j=i-1;j>=0;--j)
		{
			if (arr[j]<key) {break;}
			else
			{
				arr[j+1]=arr[j];
			}
		}
		arr[j+1]=key;
		//printArray(arr,10);

	}
}


int main()
{
	int arr[10] = {1,46,732,565,412,34,23,76,65,12};
	printArray(arr,10);
	insert(arr,10);
	printArray(arr,10);


	return 0;
}