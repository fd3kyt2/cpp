/*
 * main.cpp
 *
 *  Created on: 2013年9月30日
 *      Author: FD3
 */

#include "AutoStack.h"
#include <stdlib.h>
#include <windows.h>

int main(){
	AutoStack as;
//	int temp;
//	for(int i=0;i<5;i++){
//		cin>>temp;
//		as.push(temp);
//	}
//	for(int i=0;i<7;i++){
//		cout<<as.pop()<<" ";
//	}

	//调试1
	/*
	as.goThrough();
	as.push(1);
	as.goThrough();
	as.push(2);
	as.goThrough();
	as.push(3);
	as.goThrough();

	cout<<endl<<endl;

	int a=as.pop();
	as.goThrough();
	a=as.pop();
	as.goThrough();
	a=as.pop();
	as.goThrough();
	a=as.pop();
	as.goThrough();
*/

	//调试2
	for(int i=0;i<10;i++){
		as.push(rand()%100);
		system("cls");
		as.goThrough();
		Sleep(500);
	}

	Sleep(500);

	for(int i=0;i<10;i++){
		system("cls");
		cout<<"Pop:"<<as.pop()<<endl;
		as.goThrough();
		Sleep(500);
	}



	system("pause");

}


