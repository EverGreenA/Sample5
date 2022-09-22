#include "StringLinkedList.h"
#include <iostream>
#include <string>

void StringLinkedList::removeFront() {
	StringNode* old = head;
	head = old->next;
	delete old;
}