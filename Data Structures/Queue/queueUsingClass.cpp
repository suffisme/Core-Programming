#include <iostream>
using namespace std;

int queue[100],n=100,front = -1,rear =-1;

void enqueue()
{
	if (rear == n-1) cout<<"Queue overflow"<<endl;

	else
	{
		int item;
		if (front == -1) front =0;  //When the queue was empty
		cin>>item;
		rear++;
		queue[rear] = item;
	}
}



void dequeue()
{
	if (front ==-1 || front > rear)
	{
		cout<<"Queue UNDERflow";
		return ;
	}

	else
	{
		cout<<"Element deleted from queue is :"<<queue[front]<<"\n";
		front++;
	}
}


void display()
{
	if (front ==-1) cout<<"Queue is empty"<<endl;
	else
	{
		cout<<"Queue  elements are :";
		for (int i=front;i<=rear;i++) cout<<queue[i]<<" ";

		cout<<"\n";
	}
}


int main()
{

	for (int i=0;i<8;i++)
	{
		enqueue();
	}

	display();

	dequeue();

	display();

	return 0;
}