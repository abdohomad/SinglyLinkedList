#include<iostream>
#include "Node.h"

using namespace std;

int main() {

	Node node;
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();


	head->data = 3;
	head->next = second;
	second->data = 6;
	second->next = third;
	third->data = 9;
	third->next = NULL;

    node.insertAtTheBeginning(&head, 0);
	node.insertAtTheEnd(&head, 12);
	node.searchAnElement(head, 6);
	node.searchAnElement(head, 11);
	node.printlist(head);
	node.printListRecursively(head);

	return 0;
}