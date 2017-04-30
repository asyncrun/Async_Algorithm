#include "BSTNode.h"
#include "BinarySearchTree.h"
#include <iostream>


BinarySearchTree::BinarySearchTree()
{
	root = nullptr;
}


BinarySearchTree::~BinarySearchTree()
{
	Destroy();
}

bool BinarySearchTree::IsEmpty()const
{
	return root == nullptr;
}

void BinarySearchTree::Insert(int data, BSTNode *node)
{
	  if (data <= node->getData())
	  {
		  if (node->getLeftNode()== nullptr)
		  {
			   node->setLeftNode(new BSTNode(data));
		  }
		  else
		  {
			  Insert(data, node->getLeftNode())	;
		  }
	  }
	  else
	  {
		  if (node->getRightNode() == nullptr)
		  {
			  node->setRightNode(new BSTNode(data));
		  }
		  else
		  {
			  Insert(data, node->getRightNode());
		  }
	  }
}

void BinarySearchTree::Insert(int data)
{
	if (root != nullptr)
	{
		Insert(data, root);
	}
	else
	{
		root = new BSTNode(data);
	}
}

BSTNode *BinarySearchTree::Search(int data, BSTNode *node)
{
	if (node != nullptr)
	{
		if (data == node->getData())
		{
			return node;
		}
		else if (data < node->getData())
		{
			return Search(data, node->getLeftNode());
		}
		else
		{
			return Search(data, node->getRightNode());
		}
	}

	return nullptr;
}

BSTNode *BinarySearchTree::Search(int data)
{
	return Search(data, root);								  
}

void BinarySearchTree::Destroy(BSTNode *node)
{
	if (node != nullptr)
	{
		Destroy(node->getLeftNode());
		Destroy(node->getRightNode());
		delete node;
	}
}

void BinarySearchTree::Destroy()
{
	Destroy(root);
}

void BinarySearchTree::PostOrderPrint()
{
	std::cout << "In PostOrder Print"<< std::endl;
	PostOrder(root);

	std::cout << std::endl;
}

void BinarySearchTree::PostOrder(BSTNode *node)
{
	if (node == nullptr)
	{
		return;
	}

	if (node->getLeftNode() != nullptr)
	{
		PostOrder(node->getLeftNode());
	}

	if (node->getRightNode() != nullptr)
	{
		PostOrder(node->getRightNode());
	} 

	std::cout << " " << node->getData()<< " ";
} 


void BinarySearchTree::PreOrderPrint()
{
	std::cout << "In PreOrder Print"<< std::endl;
	PreOrder(root);

	std::cout << std::endl;
}

void BinarySearchTree::PreOrder(BSTNode *node)
{
	if (node == nullptr)
	{
		return;
	}

	std::cout << " " << node->getData()<< " ";

	if (node->getLeftNode() != nullptr)
	{
		PreOrder(node->getLeftNode());
	}

	if (node->getRightNode() != nullptr)
	{
		PreOrder(node->getRightNode());
	}
} 


void BinarySearchTree::	InOrderPrint()
{
	std::cout << "In Order Print"<< std::endl;
	InOrder(root);

	std::cout << std::endl;
}

void BinarySearchTree::InOrder(BSTNode *node)
{
	if (node == nullptr)
	{
		return;
	}

	if (node->getLeftNode() != nullptr)
	{
		InOrder(node->getLeftNode());
	}

	std::cout << " " << node->getData()<< " ";

	if (node->getRightNode() != nullptr)
	{
		InOrder(node->getRightNode());
	}
}
