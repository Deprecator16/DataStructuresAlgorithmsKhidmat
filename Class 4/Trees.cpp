class BinaryTreeExampleStackNode
{
public:
	BinaryTreeNode data;
	BinaryTreeExampleStackNode* previous;
};

class BinaryTreeExampleStack
{
public:
	BinaryTreeExampleStackNode* top;
	int size;

	void push(BinaryTreeNode a)
	{
		BinaryTreeExampleStackNode* sn = new BinaryTreeExampleStackNode;
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

		BinaryTreeExampleStackNode* temp = top;
		top = top->previous;
		temp->previous = nullptr;
		delete temp;
		temp = nullptr;
	}

	BinaryTreeNode get()
	{
		return top->data;
	}
};


class BinaryTreeNode
{
public:
	int data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;
};

class BinaryTree
{
public:
	BinaryTreeNode root;

	BinaryTreeNode DepthFirstSearch(int whatToSearch)
	{
		// 1. Add the root to the stack
		// 2. Pop the stack and check if it's what we're searching for
		// 3a. If not, then add the children of the node that was popped off to the stack
		//	4. Go back to 2
	    // 3b. If it is what we're searching, return the node
		BinaryTreeExampleStack stack;

		stack.push(root);

		while (stack.size > 0)
		{
			BinaryTreeNode n = stack.get();
			stack.pop();

			if (n.data == whatToSearch)
			{
				return n;
			}
			else
			{
				stack.push(*n.right);
				stack.push(*n.left);
			}

		}
		
	}

	int BreadthFirstSearch(int whatToSearch)
	{
		// 1. Add the root to the queue
		// 2. Pop the queue and check if it's what we're searching for
		// 3a. If not, then add the children of the node that was popped off to the queue
		//	4. Go back to 2
		// 3b. If it is what we're searching, return the node
	}

	void add(int data)
	{
		if (!root.left)
		{
			BinaryTreeNode* node = new BinaryTreeNode();
			node->data = data;
			root.left = node;
		}
	}
};
