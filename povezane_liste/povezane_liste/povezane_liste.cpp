// povezane_liste.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

struct Node {
	int value;
	Node *next;
};

void insertElementFront(Node *&head, int value) 
{
	Node *temp = new Node;
	temp->value = value;
	temp->next = head;
	head = temp;
}

void insertElementEnd(Node *&head, int value)
{
	Node *n = new Node;
	n->value = value;
	n->next = nullptr;

	Node *temp = head;

	if (temp == nullptr)
	{
		temp = n;
		head = temp;
	}
	else
	{
		temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = n;
	}
}

void displayList(Node *temp)
{
	if (temp == NULL) 
	{
		cout << "Lista je prazna!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			cout << temp->value << "\t";
			temp = temp->next;
		}
		cout << endl;

	}
}

void deleteHead(Node *&head)
{
	Node *temp = head;

	if (temp != 0)
	{
		head = temp->next;
		delete temp;
	}
}

void deleteTail(Node *head)
{
	Node *temp = head;
	if (head->next == nullptr)
	{
		head = nullptr;
		delete temp;
	}
	else
	{
		Node *prev = nullptr;
		while (temp->next != nullptr)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = nullptr;
		delete temp;
	}
}

int brojElementa(Node *head, int value)
{

}


int main()
{
	Node *head = nullptr;
	Node *tail = nullptr;

	insertElementEnd(head, 1);
	insertElementEnd(head, 2);
	insertElementEnd(head, 3);
	brojElementa(head, );

	return 0;
}
