
#ifndef Linked_list_H
#define Linked_list_H

class Linked_list {
private:
	struct Node {
		int data{ 0 };
		Node* next{ nullptr };
	};
	int m_node_count;

	Node* m_head;

public:
	Linked_list();
	~Linked_list();
	int Node_Count() const;
	void Insert_Head(int n);
	void Insert_after(int index, int n);
	void Remove_Head();
	void Remove_After(int index);
	void Clear();
	int Find(int n);
	void Print_List();


};

#endif