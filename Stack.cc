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
	head->next = NULL;
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
	//increase number of nodes by 1
	num_elements++;
}

// Pops the top-most value off the stack and returns its value.
int Stack::pop() {
	//pointer to node being removed
	Node* temp = head->next;
	int tempVal = temp->value;
	
	//change the pointer of head
	head->next = head->next->next;
	//change the pointer of node being removed
	temp->next = null;
	
	//decrease number of elements by 1
	num_elements--
	//return value of node removed
	return tempVal;
}

// Returns the value at the top of the stack.  Works similarly to pop(), but
// retains the internal structure of the stack.  That is, it does not remove
// the top-most element.
int Stack::getTopElement() const {
	int topVal = head->next->value;
	return topVal;
}

// Returns the number of elements currently in the stack.
int Stack::size() const {
	return num_elements;
}
