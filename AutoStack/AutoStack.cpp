/*
 * AutoStack.cpp
 *
 *  Created on: 2013��9��30��
 *      Author: FD3
 */


#include "AutoStack.h"


Node::Node(int newData){
	data=newData;
	next=0;
}

Node::Node(){
		Node(0);
	}

AutoStack::AutoStack(){
//	Node *n=new Node();
	this->head=Node();
//	TODO ��ô����?
}

bool AutoStack::isNull(){
	return 0==head.next;
}


void AutoStack::push(int value){
	if(isNull()){
		head.next=new Node(value);
	}else{
		Node* p=head.next;
		head.next=new Node(value);
		head.next->next=p;
	}

//		��ʵ������μ���
//		Node* p=head.next;	//�ձ�ΪNULL
//		head.next=new Node(value);
//		head.next->next=p;
//	}
}


int AutoStack::pop(){
	int result;
	if(isNull()){
		cout<<"Popping empty stack!"<<endl;
		result=-1;
	}else{
		Node* firstNode=head.next;
		result=firstNode->data;
		head.next=firstNode->next;
//		firstNode->~Node();
	}
	return result;
}


void AutoStack::goThrough(){
	Node* nodePtr=0;

	if(isNull()){
		cout<<"Going through empty stack!"<<endl;
	}else{
		nodePtr=head.next;
		while(nodePtr){
			cout<<(nodePtr->data)<<" ";
			nodePtr=nodePtr->next;
		}
	}
	cout<<endl;
}
