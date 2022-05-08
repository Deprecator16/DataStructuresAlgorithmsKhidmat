#include <iostream>
#include <string>

class QueueNode
{
public:
	std::string data;
	QueueNode* next;
};

class Queue
{
public:
	QueueNode* front = nullptr;
	QueueNode* back = nullptr;
	int size;

	void push(std::string s)
	{
		QueueNode* qn = new QueueNode;
		qn->data = s;

		if (front)
			back->next = qn;
		else
			front = qn;

		back = qn;

		size++;
	}

	void pop()
	{
		if (size == 0)
			return;

		QueueNode* temp = front;
		front = front->next;
		temp->next = nullptr;
		delete temp;
		temp = nullptr;

		size--;
	}

	std::string get()
	{
		return front->data;
	}
};








class StackNode
{
public:
	int data;
	StackNode* previous;
};

class Stack
{
public:
	StackNode* top;
	int size;

	void push(int a)
	{
		StackNode* sn = new StackNode;
		sn->data = a;

		if (top)
			sn->previous = top;

		top = sn;

		size++;
	}

	void pop()
	{
		if (size == 0)
			return;

		StackNode* temp = top;
		top = top->previous;
		temp->previous = nullptr;
		delete temp;
		temp = nullptr;
	}

	int get()
	{
		return top->data;
	}
};

int main()
{
	Stack st;
	st.push(7);
	st.push(15);
	st.push(17);

	st.pop();
	st.pop();

	std::cout << st.get() << std::endl;

	Queue qt;
	qt.push("string1");
	qt.push("string2");
	qt.push("Hello");

	qt.pop();
	qt.pop();

	std::cout << qt.get() << std::endl;
}
