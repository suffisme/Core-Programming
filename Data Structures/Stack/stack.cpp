#include <iostream>
using namespace std;

int top =-1;

void push(int stack[],int x,int n)
{
	if (top==n-1) cout<<"Stack Overflow";
	else {
		top = top+1;
		stack[top] = x;
	}
}


bool isEmpty()
{
	if (top == -1) return true ;
	else return false;
}

void pop(){
	if (isEmpty()) cout<<"stack is already empty -- stack underflow";
	else {
		top = top -1;
	} 
}


int size(){
	return top+1;
}


int topelement(int stack[]){
	return stack[ top ];
}

int main(){
	int stack[5];
	int x;
	for (int i=0;i<6;i++){
		cout<<"Enter the element for stack : ";cin>>x;
		push(stack,x,5);
		cout<<"\nThe current size of stack is :"<<size()<<endl;
	}

}