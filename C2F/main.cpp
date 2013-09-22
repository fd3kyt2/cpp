/*
 * main.cpp
 *
 *  Created on: 2013年9月21日
 *      Author: FD3
 */

#include <iostream>
using namespace std;

//摄氏转华氏
int cel2fah(int cel){
	return cel*9/5+32;
}

//华氏转摄氏
int fah2cel(int fah){
	return (fah-32)*5/9;
}


int main(){
	int a;
	cout<<"请输入摄氏温度,将转为华氏温度."<<endl;
	cin>>a;
	cout<<cel2fah((int)a)<<endl;
	cout<<"请输入华氏温度,将转为摄氏温度."<<endl;
	cin>>a;
	cout<<fah2cel((int)a)<<endl;
	return 0;
}


