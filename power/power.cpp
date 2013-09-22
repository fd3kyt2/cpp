/*
 * power.cpp
 *
 *  Created on: 2013年9月22日
 *      Author: FD3
 */

#include "power.h"

//计算x的y次幂
ptype power(ptype x,int y){
	if(y<=1){
		return x;//初始条件
	}
	else{
		return power(x,y-1)*x;//*x,向前推进
	}
}

