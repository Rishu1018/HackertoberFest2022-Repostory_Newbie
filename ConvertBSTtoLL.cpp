#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int data) {
	// base case
	if (root == NULL) {
		root = new node(data);
		return root;
	}
	// recursive case
	if (root->data > data) {
		root-> left = insertInBST(root->left, data);
	}
	else {
		root->right = insertInBST(root->right, data);
	}
	return root;
}

node* buildBST() {
	node* root = NULL;
	int data;
	cin >> data;
	while (data != -1) {
		// Data ko BST mei insert krdo
		root = insertInBST(root, data);
		cin >> data;
	}
	return root;
}

void printRange(node* root, int k1, int k2) {
	// base case
	if (!root) {
		return;
	}

	// recursive case
	if (root->data >= k1 and root->data <= k2) {
		cout << root->data << " ";
	}
	printRange(root->left, k1, k2);
	printRange(root->right, k1, k2);
}

void preorder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}
	// recursive case(Root Left Right)
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	if (!root) {
		return;
	}

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	if (!root) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

void levelOrder(node* root) {

	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		if (x != NULL) {
			cout << x->data << " ";
			if (x->left) q.push(x->left);
			if (x->right) q.push(x->right);
		}
		else {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}
}

///////////////////////////////// KAAM KI BAAT ////////////////////////////
// class LLnode {
// public:
// 	int data;
// 	LLnode* next;
// 	LLnode(int d) {
// 		data = d;
// 		next = NULL;
// 	}
// };

// void insertAtEnd(LLnode* &head, LLnode* &tail, int data) {
// 	if (!head) {
// 		head = tail = new LLnode(data);
// 	}
// 	else {
// 		LLnode* n = new LLnode(data);
// 		tail->next = n;
// 		tail = n;
// 	}
// }

// void BstToLL(node* root, LLnode* &head, LLnode* &tail) {
// 	if (!root) {
// 		return;
// 	}
// 	BstToLL(root->left, head, tail);
// 	insertAtEnd(head, tail, root->data);
// 	BstToLL(root->right, head, tail);
// }

// void printLL(LLnode* head) {
// 	while (head) {
// 		cout << head->data << "->";
// 		head = head->next;
// 	}
// 	cout << "NULL\n";
// }
///////////////////////////////// KAAM KI BAAT ////////////////////////////

class LinkedList {
public:
	node* head;
	node* tail;
};

LinkedList BSTtoLL(node* root) {
	// base case
	if (!root) {
		LinkedList l;
		l.head = l.tail = NULL;
		return l;
	}
	// recursive case
	LinkedList l;
	if (!root->left and !root->right) {
		// Na LST hai na hi RST hai
		l.head = l.tail = root;
		return l;
	}
	else if (root->left and !root->right) {
		// LST hai, RST nahi hai
		LinkedList left = BSTtoLL(root->left);
		left.tail->right = root;
		l.head = left.head;
		l.tail = root;
		return l;
	}
	else if (!root->left and root->right) {
		LinkedList right = BSTtoLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else {
		// Dono LST and RST present hai
		LinkedList left = BSTtoLL(root->left);
		LinkedList right = BSTtoLL(root->right);
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
}

void print(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL\n";
}


int main() {

	node* root = NULL;
	root = buildBST();
	preorder(root);
	cout << '\n';
	inorder(root);
	cout << '\n';
	postorder(root);
	cout << '\n';

	levelOrder(root);
	LinkedList l = BSTtoLL(root);
	print(l.head);
	levelOrder(root);

	// LLnode* head = NULL, *tail = NULL;
	// BstToLL(root, head, tail);
	// printLL(head);


	return 0;
}







