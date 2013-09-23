#include "Stack.h"

// Initializes an empty Stack.
Stack::Stack() {
	node headNode;
	head->value = 0;
	head->next = headNode;
	num_elements = 0;
}

// Cleans up memory before the Stack's destruction.
Stack::~Stack() {

}

// Pushes value onto the top of the stack.
// will be inserted after head
void Stack::push(int value) {
	//create a new node
	node newNode;
	//insert value
	newNode.value = value;
	
	//update pointers
	newNode.next = head->next;
	head->next = newNode;
	//
	num_elements++;
}

// Pops the top-most value off the stack and returns its value.
int Stack::pop() {
	num_elements--;
	return -1;
}

// Returns the value at the top of the stack.  Works similarly to pop(), but
// retains the internal structure of the stack.  That is, it does not remove
// the top-most element.
int Stack::getTopElement() const {
	return -1;
}

// Returns the number of elements currently in the stack.
int Stack::size() const {
	return num_elements;
}
