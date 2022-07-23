#include "Node.h"
#include <cstddef>
#include <iostream>

void Node::insertAtTheBeginning(Node** head, int data)
{
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}

void Node::insertAtTheEnd(Node** head, int data)
{
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = nullptr;

	if (*head == nullptr) {
		*head = newNode;
		return;
	}
	Node* last = *head;
	while (last->next != nullptr)
	{
		last = last->next;
	}

	last->next = newNode;
}

bool Node::searchAnElement(Node* head, int key)
{
	Node* current = head;
	while (current != nullptr)
	{
		if (current->data == key) {	
			std::cout << "the element: " << "" << key << " " << " is exist " << std::endl;
			return true;
		}
		current = current->next;
	}
	
	std::cout << "the element: " << "" << key << " " << " does not  excist" << std::endl;

	return false;
}

void Node::printlist(Node* n)
{
	while (n != nullptr)
	{
		std::cout << n->data << "    ";
		n = n->next;
	}

	std::cout << std::endl;
}

void Node::printListRecursively(Node* head)
{
	if (head == nullptr)
		return;
	printListRecursively(head->next);
	std::cout << head->data << "    ";
}
