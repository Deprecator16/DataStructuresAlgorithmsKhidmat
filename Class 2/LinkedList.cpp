class LinkedListNode
{
public:
	int data;
	LinkedListNode* next = nullptr;
};

class LinkedList
{
public:
	int size;
	LinkedListNode* front = nullptr;
	LinkedListNode* back = nullptr;

	void add(int d, int position)
	{
		// For you to complete: Implement position, ability to add at any point in the list
		LinkedListNode* node = new LinkedListNode;
		node->data = d;

		if (back)
		{
			back->next = node;
			back = node;
		}
		else
		{
			front = node;
			back = node;
		}

		size++;
	}

	void remove(int position)
	{
		// For you to complete

		size--;
	}

	int get(int position)
	{
		LinkedListNode* n = front;

		for (int i = 0; i < position; i++)
		{
			n = n->next;
		}

		return n->data;
	}

};