#pragma once
class Node
{
public:
	int data;
	Node* next;
	void insertAtTheBeginning(Node** head, int data);
	void insertAtTheEnd(Node** head, int data);
	bool searchAnElement(Node* head, int data);
	void printlist(Node* n);
};

