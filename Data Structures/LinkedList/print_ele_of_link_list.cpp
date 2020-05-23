# include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data ;  //data
	node* next;  //pointer
};

void print_list(node* n)
{
	while (n!= NULL){
		cout << n->data <<" ";
		n = n->next;
	}
}

int main(){

	node* head = new node();
	node* second = new node();
	node* third = new node();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	print_list(head);
	cout<<endl;

	return 0;
}
