#ifndef ASYNC_ALGORITHM_BINARY_SEARCH_TREE_H_
#define ASYNC_ALGORITHM_BINARY_SEARCH_TREE_H_

class BinarySearchTree
{
private:
	BSTNode *root; 
	BSTNode *Search(int data, BSTNode *node);
	void Insert(int data, BSTNode *node);
	void Destroy(BSTNode *node);
	void PreOrder(BSTNode *node);
	void InOrder(BSTNode *node);
	void PostOrder(BSTNode *node);

public:
	BinarySearchTree();
	~BinarySearchTree();

public:
	bool IsEmpty() const;
	void Insert(int data); 	
	BSTNode *Search(int data); 
	void Destroy();

	void PreOrderPrint();
	void InOrderPrint();
	void PostOrderPrint();
};

#endif // ASYNC_ALGORITHM_BINARY_SEARCH_TREE_H_

