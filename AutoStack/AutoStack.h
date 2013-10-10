/*
 * AutoStack.h
 *
 *  Created on: 2013��9��30��
 *      Author: FD3
 */

#ifndef AUTOSTACK_H_
#define AUTOSTACK_H_

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//using std::sleep;

//������,����NULL
//#include <stddef.h>

class Node{
public:
	Node();
	Node(int data);
	int data;
	Node *next;

private:

};


class AutoStack{
public:
	AutoStack();
	void push(int value);
	int pop();
	void goThrough();

private:
	Node head;
	bool isNull();

};





#endif /* AUTOSTACK_H_ */
