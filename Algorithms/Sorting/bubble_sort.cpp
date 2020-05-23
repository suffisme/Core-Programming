#include <iostream>
using namespace std;

void Bubble(int arr[],int size)
{
	int swap;int temp;
	while(swap>0)
	{	
		swap=0;
		for (int i=0;i<size-1;i++)
		{					
			if (arr[i]>arr[i+1])
			{
				temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = temp;
				swap+=1;
				}
			}
		}

}



int main()
{
	int arr[10] = {32,74,3,6,2,56,35,98,12,54};
	int size = 10;

	for (int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	Bubble(arr,10);

	for (int j=0;j<size;j++)
	{
		cout<<arr[j]<<" ";
	}

	return 0;
}
