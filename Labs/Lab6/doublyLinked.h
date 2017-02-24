struct DLink {	//doubly linked node
	int value;
	DLink* prev;
	DLink* next;
	DLink(const int& v, DLink* p = 0, DLink* n = 0)
		:value(v), prev(p), next(n) {}
};

class DoublyLinkedList {
public:
	DoublyLinkedList(){ head = NULL; tail = NULL; }
	void insert(DLink* n, DLink* p); // Insert element n before p
	void add(DLink* p, DLink* n); // Insert element n after p
	void erase(DLink* p); // delete element p
	DLink* find(const int& s); // find value s in list, return node pointer
	DLink* advance(int n); // advance to nth element, return node pointer
	void append(DLink *p); // append node to end of list
	void print_all(DLink* head); // print all nodes, given head

	DLink* getHead() { return head; }
	DLink* setHead(DLink *p) { head = p; }

private:
	DLink* head;
	DLink* tail; int size;  //one or the other is sufficient
};
