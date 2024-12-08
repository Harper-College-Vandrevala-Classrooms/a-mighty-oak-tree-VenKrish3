/*
 * Oak.hpp
 *
 *  Created on: Dec 8, 2024
 *      Author: Turbo
 */

#ifndef NODE_HPP_
#define NODE_HPP_

class Node
{
private:
	Node *left;
	const Squirrel Value; //@suppress("Type cannot be resolved")
	Node *right;

	Node *root;

public:
	Node(Squirrel name) : Value(name) // @suppress("Type cannot be resolved")
	{
		root = &this;
		this->left = nullptr;
		this->right = nullptr;
	}
	void set_left(Node leftNode)
	{
		this->left = leftNode;
	}
	void set_right(Node rightNode)
	{
		this->right = rightNode;
	}

	Node left()
	{
		return this->*left;
	}
	Node right()
	{
		return this->*right;
	}
};



#endif /* OAK_HPP_ */
