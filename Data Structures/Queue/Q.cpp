#include <iostream>
#include <climits>
using namespace std;

class Queue
{
public:
	int front,rear,size;
	unsigned capacity;

	int* arr;
};


Queue* createQ(unsigned capacity)
{
	Queue* queue = new Queue();
	queue->front =queue->size = 0;
	queue->capacity = capacity;
	queue->rear = capacity -1;
	queue->arr = new int [(queue->capacity * sizeof(int))];

	return queue;
}

int isFull(Queue* queue)
{
	return ((queue->size)==(queue->capacity));
}

int isEmpty(Queue* queue)
{
	return ((queue->size==0));
}

void enqueue(Queue* queue,int item)
{
	if (isFull(queue)) 
	{
		cout<<"Queue Overflow";
		return;
	}
	
	queue->rear = (queue->rear++)%queue->capacity;
	queue->arr[queue->rear] = item;
	queue->size ++;
	cout<<item <<" enqueued to queue\n";
}

int dequeue(Queue* queue)
{
	if (isEmpty(queue))
	{
		cout<<"Queue is already empty -- underflow ";
		return INT_MIN;
	}

	int item = queue->arr[queue->front];
	queue->front++;
	queue->size--;

	return item;
}

int front(Queue* queue)
{
	if (isEmpty(queue))
	{
		cout<<"Queue is empty";
		return INT_MIN;
	}

	return queue->arr[queue->front];
}

int rear(Queue* queue)
{
	if (isEmpty(queue))
	{
		cout<<"Queue is empty";
		return INT_MIN;
	}

	return queue->arr[queue->rear];
}

//Driver code

int main()
{
	Queue* queue = createQ(1000);
	int konstant;
	while((cin>>konstant))  enqueue(queue,konstant);

	cout<<dequeue(queue)<<" Dequeued from queue\n";

	cout<<"Front item is "<<front(queue)<<"\n";
	cout<<"Rear item is "<<rear(queue)<<"\n";

	return 0;
}