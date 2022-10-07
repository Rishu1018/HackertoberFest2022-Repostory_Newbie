#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

class Node
{
	public:
	int key;
	Node* next;
	void printRandom(Node*);
	void push(Node**, int);
	
};

void Node::printRandom(Node *head)
{
	if (head == NULL)
	return;

	srand(time(NULL));

	int result = head->key;
	Node *current = head;
	int n;
	for (n = 2; current != NULL; n++)
	{
		if (rand() % n == 0)
		result = current->key;
		current = current->next;
	}

	cout<<"Randomly selected key is \n"<< result;
}

Node* newNode(int new_key)
{
	Node* new_node = (Node*) malloc(sizeof( Node));

	new_node->key = new_key;
	new_node->next = NULL;

	return new_node;
}

void Node:: push(Node** head_ref, int new_key)
{
	Node* new_node = new Node;

	new_node->key = new_key;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
int main()
{
	Node n1;
	Node *head = NULL;
	n1.push(&head, 5);
	n1.push(&head, 20);
	n1.push(&head, 4);
	n1.push(&head, 3);
	n1.push(&head, 30);

	n1.printRandom(head);

	return 0;
}
