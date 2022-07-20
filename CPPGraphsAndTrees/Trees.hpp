#include <iostream>

#ifndef TREES_hPP
#define TREES_HPP
#endif
struct AVLNode {
	struct AVLNode* left;
	struct AVLNode* right;
	int data;
	int height;
};
struct BSTNode {
	BSTNode* left;
	BSTNode* right;
	int data;
};
class BinarySearchTree {
public:
	BinarySearchTree();
	BSTNode* insert(BSTNode*, int);
	BSTNode* del(BSTNode*, int);
	BSTNode* balance(BSTNode*, int);
	void display(BSTNode*, int);
	void preorder(BSTNode*);
	void postorder(BSTNode*);
	void inorder(BSTNode*);
};
class AVLTree {
public:
	AVLTree();
	AVLNode* rightleft_rotation(BSTNode*);
	AVLNode* leftleft_rotation(BSTNode*);
	AVLNode* leftright_rotation(BSTNode*);
	AVLNode* rightright_rotation(BSTNode*);
	void display(AVLNode*);
	void preorder(AVLNode*);
	void inorder(AVLNode*);
	void postorder(AVLNode*);
};

