/*
 * x^y.cpp
 *
 *  Created on: 2013年9月22日
 *      Author: FD3
 */

#include <iostream>
#include "power.h"
using namespace std;

int main(){
	ptype x;
	int y;
	cout<<"递归计算x^y:"<<endl<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	cout<<power(x,y);
}


