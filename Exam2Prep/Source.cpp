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

	//Queue Via TEMPLATE:
	queue1<qNode> Q1;
	qNode* head1 = nullptr;
	head1 = Q1.enQueue(head1, "one");
	head1 = Q1.enQueue(head1, "two");
	head1 = Q1.enQueue(head1, "three");
	head1 = Q1.enQueue(head1, "four");
	head1 = Q1.enQueue(head1, "five");

	Q1.printQueue(head1);


	//Stack Via TEMPLATE:
	stack1<sNode> S1;
	//sNode* head2 = nullptr;
	cout << "\nSTACK1:\n";
	S1.push("one");
	S1.push("two");
	S1.push("three");
	S1.push("four");
	S1.printStack();
	cout << "\nSTACK2:\n";
	stack1<sNode> S2;
	S2 = S1;
	S2.printStack();










	return 1;
}