// a program to create a linked list and print out its elements i.e. linked list traversal

# include <iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
};

void printLList(node* n){
	while (n!= NULL){
		cout<<n->data<<" "<<endl;
		n=n->next;
	}
}


int main(){
//	node* head = NULL;
//	node* second = NULL;
//	node* third = NULL;


// head , first and second are pointers that point to their node respectively 
// here we are not giving name to object of node class as we do in python
	node* head = new node();
	node* second = new node();
	node* third = new node();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	cout<<"head is "<< head<<endl;
	
	printLList(head);
	printLList(second);
	printLList(third);

	return 0;
}
