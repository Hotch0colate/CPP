#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* link;
};

Node* top;
Node* Q;

void pushdata(int data)
{

	Node* temp = new Node();

	if (!temp) {
		cout << "\nStack Overflow from pushdata";
		exit(1);
	}

	temp->data = data;

	temp->link = top;

	top = temp;
}

int isEmptyS(){
	return top == NULL;
}

int isEmtptyQ(){
	return Q == NULL;
}

int peek()
{

	// If stack is not empty , return the top element
	if (!isEmptyS())
		return top->data;
	else{
		cout << "exit from peek" << endl;
		exit(1);
	}
}

void pop(struct Node* QS)
{
	Node* temp;
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

Node *reverseList(Node* head)
{
    // Stack to store elements of list
    stack<Node *> stk;
 
    // Push the elements of list to stack
    Node* ptr = head;
    while (ptr->link != NULL) {
        stk.push(ptr);
        ptr = ptr->link;
    }
 
    // Pop from stack and replace
    // current nodes value'
    head = ptr;
    while (!stk.empty()) {
        ptr->link = stk.top();
 
        ptr = ptr->link;
        stk.pop();
    }
     
    ptr->link = NULL;
     
    return head;
}


void enqueue(int data)
{
	pushdata(data);
}

void dequeue(){
	free(Q);
	Q = reverseList(top);
	pop(Q);
	free(top);
	top = reverseList(Q);
	free(Q)
}

void display()
{
    Node* temp;
	free(Q);
	Q = reverseList(top);
    if (Q == NULL) {
        cout << "\nStack Underflow from display";
        exit(1);
    }
    else {
        temp = Q;
        if (temp != NULL) {
            cout << temp->data << "-> ";
            temp = temp->link;
			display();
        }
		cout << temp->data << endl;
    }
}

int main()
{
	enqueue(11);
	enqueue(22);
	enqueue(33);
	enqueue(44);

	display();
	/*
	enqueue(55);
	dequeue();

	display();
*/
	return 0;
}
