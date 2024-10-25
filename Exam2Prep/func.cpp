#include "Header.h"


class Node {

public:
	Node* next;
	string data;
	Node() : next(nullptr), data("none") {}
	Node(string str) : next(nullptr), data(str) {}

};

class List {
public:
	Node* head;
	List() : head() {}

	Node* makeNode(string data) {
		return new Node(data);
	}

	void insertAtFront(Node** head, string data){
		Node* newNode = makeNode(data);
		if (head == nullptr) {
			(*head) = newNode;
		}
		else if (head != nullptr) {
			Node* temp = (*head);
			(*head) = newNode;
			newNode->next = temp;
		}
	}

	void insetAtBack(Node** head, string data) {
		Node* newNode = makeNode(data);
		if (head == nullptr) {
			(*head) = newNode;
		}
		else if (head != nullptr) {
			Node* curr = (*head);
			while (curr->next != nullptr) {
				curr = curr->next;
			}
			curr->next = newNode;
		}
	}

	void printList(Node* head) {
		Node* curr = head;
		while (curr != nullptr) {
			cout << curr->data << std::endl;
			curr = curr->next;
		}
		cout << "------------\n";
	}

	void deleteNode(Node** head) {
		Node* curr = (*head);
		Node* prev = curr;
		while (curr->next != nullptr) {
			prev = curr;
			curr = curr->next;
		}
		prev->next = curr->next;
		delete curr;
	}
};


class BstNode {
public:
	BstNode* Rchi;
	BstNode* Lchi;
	string data;
	BstNode() : Rchi(nullptr), Lchi(nullptr), data("none") {}
	BstNode(string str) : Rchi(nullptr), Lchi(nullptr), data(str) {}
};

class BstTree {
public:
	BstNode* root;

	BstNode* insertToTree(BstNode* root, string data) {
		if (root == nullptr) {
			return new BstNode(data);
		}
		if (data < root->data) {
			root->Lchi = insertToTree(root->Lchi, data);
		}
		if (data > root->data) {
			root->Rchi = insertToTree(root->Rchi, data);
		}
		return root;
	}

	void printTree(BstNode* root) {
		if (!root) return;
		printTree(root->Lchi);
		cout << root->data << std::endl;
		printTree(root->Rchi);
	}

};


class qNode {

public:
	qNode* next;
	string data;
	qNode() : data("none"), next(nullptr) {}
	qNode(string str) : data(str), next(nullptr) {}
};

class Queue {
public:
	qNode* tail;
	qNode* head;
	Queue() : head(nullptr), tail(nullptr) {}
	int enQueue(string data) {
		qNode* newNode = new qNode(data);
		if (tail) {
			tail->next = newNode;
		}
		tail = newNode;
		if (!head) {
			head = tail;
		}
		return 1;
	}

	int deQueue() {
		qNode* temp = head->next;
		delete head;
		head = temp;
		return 1;

	}

	void printQueue() {
		cout << "------------\n";
		qNode* curr = head;
		while (curr != nullptr) {
			cout << curr->data << std::endl;
			curr = curr->next;
		}
		cout << "------------\n";
	}
};

class sNode {
public:
	sNode* next;
	string data;
	sNode() : data("none"), next(nullptr) {}
	sNode(string str) : data(str), next(nullptr) {}
};

class Stack {
public:
	sNode* head;
	sNode* tail;
	int index;
	Stack() : head(nullptr), tail(nullptr), index(0) {}

	int push(string data) {
		sNode* newNode = new sNode(data);
		if (tail) tail->next = newNode;
		tail = newNode;
		if (!head) head = tail; 
		index++;
		return 1;
	}

	void pop() {
		if (!index) {
			delete head;
			index--;
			return;
		}
		if (index == 1) {
			sNode* temp = head;
			head = nullptr;
			tail = nullptr;
			delete temp;
			index--;
			return;
		
		}
	

		sNode* temp = tail;
		sNode* curr = head;
		sNode* prevprev = curr;
		while (curr->next != nullptr) {
			prevprev = curr;
			curr = curr->next;
		}
		prevprev->next = nullptr;
		tail = prevprev;
		delete temp;
		index--;
	}

	void printStack() {
		if (!head) return;
		sNode* curr = head;
		while (curr != nullptr) {
			cout << curr->data << std::endl;
			curr = curr->next;
		}
		cout << "------------\n";
	}
};

template <class T>
class queue1 {
private:
	T* head;
	T* tail;
public:
	queue1() : head(nullptr), tail(nullptr) {}
	T* getHead() { return head; }
	T* getTail() { return tail; }
	void setHead(T* ptr) { head = ptr; }
	void setTail(T* ptr) { head = ptr; }

	T* enQueue(T* head, string data) {
		T* newNode = new T(data);
		if (tail) {
			tail->next = newNode;
		}
		tail = newNode;
		if (!head) {
			head = tail;
		}
		return head;
	}

	void printQueue(T* head) {
		T* curr = head;
		while (curr != nullptr) {
			cout << curr->data << std::endl;
			curr = curr->next;
		}
		cout << "------------\n";
	}
};

template <class S>
class stack1 {
private:
	S* top;
	int index;
public:
	stack1() :top(nullptr), index(0) {}

	S* push(string data) {
		S* newNode = new S(data);
		if (top == nullptr) {
			top = newNode;
			index++;
		}
		else {
			S* temp = top;
			top = newNode;
			newNode->next = temp;
			index++;
		}
		return top;
	}
	
	//overloaded copy constructor:
	stack1& operator=(const stack1& S1) {
		S* curr = S1.top;
		while (curr != nullptr) {
			this->push(curr->data);
			curr = curr->next;
		}
		return *this;
	}
	


	void printStack() {
		S* curr = top;
		while (curr != nullptr) {
			cout << curr->data << std::endl;
			curr = curr->next;
		}
		cout << "------------\n";
	}
};