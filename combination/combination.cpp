/*
 * combination.c
 *
 *  Created on: 2013Äê9ÔÂ22ÈÕ
 *      Author: FD3
 */

//#include <iostream>
#include "combination.h"

//using namespace std;

intm combination(intm n,intm r){
	intm result=1;
	r=(r>n-r)?r:(n-r);//C10,2=C10,8
	result=arrange(n,r)/arrange(r,r);//Cn,m=(An,m)/(Am,m)
	return result;
}

intm arrange(intm n,intm r){
	intm result=1;
	for(intm i=0;i<r;i++){
		result*=(n-i);
	}
	return result;
}
