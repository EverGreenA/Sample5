#include "StringLinkedList.h"
#include <iostream>
#include <string>

StringLinkedList::StringLinkedList()
	: head(NULL) { }
StringLinkedList::~StringLinkedList()
{
	while (!empty()) removeFront();
}

bool StringLinedList::empty() const
{
	return head == NULL;
}
const string& StringLinkedList::front() const
{
	return head->elem;
}