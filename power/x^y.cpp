/*
 * x^y.cpp
 *
 *  Created on: 2013��9��22��
 *      Author: FD3
 */

#include <iostream>
#include "power.h"
using namespace std;

int main(){
	ptype x;
	int y;
	cout<<"�ݹ����x^y:"<<endl<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	cout<<power(x,y);
}


