/*
 * main.cpp
 *
 *  Created on: 2013��9��21��
 *      Author: FD3
 */

#include <iostream>
using namespace std;

//����ת����
int cel2fah(int cel){
	return cel*9/5+32;
}

//����ת����
int fah2cel(int fah){
	return (fah-32)*5/9;
}


int main(){
	int a;
	cout<<"�����������¶�,��תΪ�����¶�."<<endl;
	cin>>a;
	cout<<cel2fah((int)a)<<endl;
	cout<<"�����뻪���¶�,��תΪ�����¶�."<<endl;
	cin>>a;
	cout<<fah2cel((int)a)<<endl;
	return 0;
}


