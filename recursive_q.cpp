#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* link;
};

Node* top;
Node* Q;

void enqueue(int data)
{

	Node* temp = new Node();

	if (!temp) {
		cout << "\nStack Overflow from enqueue";
		exit(1);
	}

	temp->data = data;

	temp->link = top;

	top = temp;
}

int isEmptyS(){
	return top == NULL;
}

int isEmptyQ(){
	return Q == NULL;
}

int peek()
{
	if (!isEmptyS()){
		return top->data;
	}
	else{
		cout << "exit from peek" << endl;
		exit(1);
	}
}

void pop(Node* QS)
{
	Node* temp;
	// Check for stack underflow
	if (QS == NULL) {
		cout << "\nStack Underflow from pop" << endl;
		exit(1);
	}
	else {
		temp = QS;
		QS = QS->link;
		free(temp);
	}
}

void reversetoQ()
{
    free(Q);
	if(top->link == NULL){
		enqueue(top->data);
		free(top);
	}
	else{
		enqueue(top->data);
		pop(top);
		//recursive
		reversetoQ();
	}
}

void reversetoS()
{
	free(top);
	if(Q->link == NULL){
		enqueue(Q->data);
		free(Q);
	}
	else{
		enqueue(Q->data);
		pop(Q);
		//recursive
		reversetoS();
	}
}

void dequeue(){
	reversetoQ();
	pop(Q);
	reversetoS();
}

void display()
{	
	reversetoQ();

	Node* temp;
	if (Q == NULL) {
		cout << "underflow from Q" << endl;
		exit(1);
	}

	else {
		temp = Q;
		while (temp != NULL) {

			cout << temp->data << "-> ";

			temp = temp->link;
		}
	}
}

// Driver Code
int main()
{

	// Push the elements of stack
	enqueue(11);
	enqueue(22);
	enqueue(33);
	enqueue(44);

	display();

	display();

	// Print top element of stack
	cout << "\nYour are done!!!"<< endl;

	return 0;
}