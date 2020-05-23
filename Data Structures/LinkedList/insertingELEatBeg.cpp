#include <iostream>
using namespace std;

class node{
public:
  int data;
  node* next;
};

void push(node** head_ref, int new_data)
{
    node* new_node = new node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printLList(node* n){
    while(n!=0){
      cout << n->data<<" ";
      n=n->next;
    }
}

int main(){
  node* head = new node();
  node* second = new node();
  node* third = new node();

  head->data = 4;
  head->next = second;

  second->data = 5;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  printLList(head);
  cout<<endl;
  push(&head,66);
  cout<<endl;
  printLList(head);

  return 0;


}
