#pragma once
#include <iostream>
#include <string>

class StringNode {
private:
	string elem;
	StringNode* next;

	friend class StringLinkedList
};