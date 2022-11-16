#include <bits/stdc++.h>
using namespace std;


void insert_at_bottom(stack<int>& st, int x)
{

	if (st.size() == 0) {
		st.push(x);
	}
	else {
		int a = st.top();
		st.pop();
		insert_at_bottom(st, x);
		st.push(a);
	}
}

void reverse(stack<int>& st)
{
	if (st.size() > 0) {
		int x = st.top();
		st.pop();
		reverse(st);
		insert_at_bottom(st, x);
	}
	return;
}
void enqueue(stack<int>& st, int data){
	st.push(data);
}
void dequeue(stack<int>& st){
	reverse(st);
	st.pop();
	reverse(st);

}
void display(stack<int>& st){
	if (!st.empty()) {
		cout << " -> " << st.top() << " ";
		st.pop();
		display(st);
	}
}
// Driver Code
int main()
{
	stack<int> st, Q ,nQ;
	enqueue(st,11);
	enqueue(st,22);
	enqueue(st,33);
	enqueue(st,44);
	Q = st;

	cout << "Queue with stack" << endl;
	display(Q);
	cout<<endl;

	dequeue(st);
	nQ = st;
	cout << "Dequeue" << endl;
	display(st);
	cout<<endl;
	
	enqueue(nQ,55);
	cout << "Enqueue" << endl;
	display(nQ);
	cout<<endl;

}
