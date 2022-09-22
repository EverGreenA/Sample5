#include "StringLinkedList.h"
#include <iostream>
#include <string>

void StringLinkedList::addFront(const string& e) {
	StringNode* v = new StringNode;
	v->elem = e;
	v->next = head;
	head = v;
}