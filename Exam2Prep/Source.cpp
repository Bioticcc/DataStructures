#include "Header.h"
#include "func.cpp"

int main() {
	//linked list
	
	List L;
	Node* head = nullptr;
	L.insertAtFront(&head, "one");
	L.insertAtFront(&head, "tw0");
	L.insertAtFront(&head, "three");
	cout << "Linked List:\n";
	L.printList(head);

	L.insetAtBack(&head, "four");
	L.insetAtBack(&head, "five");
	L.insetAtBack(&head, "six");
	L.printList(head);

	L.deleteNode(&head);
	L.deleteNode(&head);
	L.deleteNode(&head);
	L.printList(head);

	cout << "BST\n";
	//Bst Tree
	BstTree T;
	BstNode* root = nullptr;
	root = T.insertToTree(root, "one");
	root = T.insertToTree(root, "two");
	root = T.insertToTree(root, "three");
	root = T.insertToTree(root, "four");
	root = T.insertToTree(root, "five");
	T.printTree(root);

	cout << "Queue\n";
	//Queue
	Queue Q;
	Q.enQueue("one");
	Q.enQueue("two");
	Q.enQueue("three");
	Q.enQueue("four");
	Q.printQueue();

	Q.deQueue();
	Q.deQueue();
	Q.printQueue();

	cout << "\n[Stack]\n";
	//Stack
	Stack S;
	S.push("one");
	S.push("two");
	S.push("three");
	S.push("four");
	S.push("five");

	S.printStack();
	
	S.pop();
	S.pop();
	S.pop();
	S.printStack();


	return 1;



}