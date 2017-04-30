#include "BSTNode.h"
#include "BinarySearchTree.h"
#include <iostream>

using namespace std;

static 	BinarySearchTree* test_BST_CreateTree()
{
	return new BinarySearchTree();
}

//Binary Search Tree Insert
static void test_BST_insert(BinarySearchTree* tree)
{
	int dataArray[] = {98, 3, 4, 6, 5, 6, 7, 8, 9, 546, 45, 3};

	int arrayLength =  sizeof(dataArray)/ sizeof(int);

	for (int i = 0; i < arrayLength; i++)
	{
		tree->Insert(dataArray[i]);
	}
}


static void test_BST_PreOrderPrint(BinarySearchTree* tree)
{
	tree->PreOrderPrint();
}

static void test_BST_PostOrderPrint(BinarySearchTree* tree)
{
	tree->PostOrderPrint();
}

static void test_BST_InOrderPrint(BinarySearchTree* tree)
{
	tree->InOrderPrint();
}

static void test_BST_Search(BinarySearchTree* tree, int data)
{
	BSTNode *node = tree->Search(data);
	if (node != nullptr)
	{
		cout << "Search data : " << data << " success" << endl;
	}
	else
	{
		cout << "Search data : " << data << " fails" << endl;
	}
}


static void test_BST()
{
	BinarySearchTree * tree = test_BST_CreateTree();
	test_BST_insert(tree);
	test_BST_Search(tree, 546);	
	test_BST_Search(tree, 12);	
	test_BST_PreOrderPrint(tree); 
	test_BST_InOrderPrint(tree); 
	test_BST_PostOrderPrint(tree);


	delete tree;
}


int main(int argc, char* argv[])
{
	test_BST();

	return 0;
}