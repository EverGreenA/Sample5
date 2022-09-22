#pragma once
#include "StringNode.h"
#include <iostream>
#include <string>

class StringLinkedList {
Public:
	StringLinkedList();
	~StringLinkedList();
	bool empty() const;
	const string& front() const;
	void addFront(const string& e);
	void removeFront();
	void removeFront();
private:
	StringNode* head;
};