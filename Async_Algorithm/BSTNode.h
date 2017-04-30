#ifndef ASYNC_ALGORITHM_BSTNODE_H_
#define ASYNC_ALGORITHM_BSTNODE_H_

//Binary Search Tree Node
class BSTNode
{
private:
	int data;
	BSTNode *leftNode;
	BSTNode *rightNode;

public:
	BSTNode ():data(0), leftNode(nullptr), rightNode(nullptr){}
	BSTNode(int data):data(data), leftNode(nullptr), rightNode(nullptr){}

	~BSTNode()
	{
		leftNode = nullptr;
		rightNode = nullptr;
	}

	inline int getData()
	{
		return data;
	}

	inline void setData(int data)
	{
		data = data;
	}

	inline BSTNode *getLeftNode()
	{
		return leftNode;
	}

	inline BSTNode *getRightNode()
	{
		return rightNode;
	}

	inline void setLeftNode(BSTNode *node)
	{
		leftNode = node;
	}

	inline void setRightNode(BSTNode *node)
	{
		rightNode = node;
	}
};


#endif // ASYNC_ALGORITHM_BSTNODE_H_