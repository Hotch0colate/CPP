
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int coeff, power;
	Node* next;
};

Node* create_node(int coeff, int power, Node* start)
{
	Node* newnode = new Node;
	newnode->coeff = coeff;
	newnode->power = power;
	newnode->next = NULL;

	if (start == NULL)
		return newnode;

	Node* ptr = start;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = newnode;

	return start;
}

void printList(struct Node* ptr)
{
	while (ptr->next != NULL) {
		cout << ptr->coeff << "x^" << ptr->power ;
		if( ptr->next!=NULL && ptr->next->coeff >=0)
			cout << "+";

		ptr = ptr->next;
	}
	cout << ptr->coeff << "\n";
}

void removeDuplicates(Node* start)
{
	Node *ptr1, *ptr2, *dup;
	ptr1 = start;

	
	while (ptr1 != NULL && ptr1->next != NULL) {
		ptr2 = ptr1;

		while (ptr2->next != NULL) {

			if (ptr1->power == ptr2->next->power) {

				ptr1->coeff = ptr1->coeff + ptr2->next->coeff;
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;

				delete (dup);
			}
			else
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}

Node* multiply(Node* poly1, Node* poly2,Node* polymul)
{
	Node *ptr1, *ptr2;
	ptr1 = poly1;
	ptr2 = poly2;
	while (ptr1 != NULL) {
		while (ptr2 != NULL) {
			int coeff, power;
			coeff = ptr1->coeff * ptr2->coeff;
			power = ptr1->power + ptr2->power;
			polymul = create_node(coeff, power,polymul);
			ptr2 = ptr2->next;
		}
		ptr2 = poly2;
		ptr1 = ptr1->next;
	}
	removeDuplicates(polymul);
	return polymul;
}

Node* polyadd(struct Node* poly1, struct Node* poly2, struct Node* polysum)
{
	while (poly1->next && poly2->next) {
		if (poly1->power > poly2->power) {
			polysum->power = poly1->power;
			polysum->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		else if (poly1->power < poly2->power) {
			polysum->power = poly2->power;
			polysum->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
		else {
			polysum->power = poly1->power;
			polysum->coeff = poly1->coeff + poly2->coeff;
			poly1 = poly1->next;
			poly2 = poly2->next;
		}
		polysum->next = (struct Node*)malloc(sizeof(struct Node));
		polysum = polysum->next;
		polysum->next = NULL;
	}
	while (poly1->next || poly2->next) {
		if (poly1->next) {
			polysum->power = poly1->power;
			polysum->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		if (poly2->next) {
			polysum->power = poly2->power;
			polysum->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
		polysum->next= (struct Node*)malloc(sizeof(struct Node));
		polysum = polysum->next;
		polysum->next = NULL;
	}
    return polysum;
}

int main()
{

	Node *poly1 = NULL, *poly2 = NULL,*polysum =  NULL, *polymul = NULL;

    
	poly1 = create_node(5, 2, poly1);
	poly1 = create_node(4, 1, poly1);
	poly1 = create_node(2, 0, poly1);
    
	poly2 = create_node(-5, 1, poly2);
	poly2 = create_node(-5, 0, poly2);

	cout << "1st Polynomial: ";
	printList(poly1);
	cout << "2nd Polynomial: ";
	printList(poly2);
    polysum = polyadd(poly1, poly2, polysum);
	polymul = multiply(poly1, poly2, polymul);
	cout << "Resultant Polynomial Added : "<<endl;
	printList(polysum);
    cout << "Resultant Polynomial Multi : "<<endl;
    printList(polymul);
	return 0;
}
