/*
 * power.cpp
 *
 *  Created on: 2013��9��22��
 *      Author: FD3
 */

#include "power.h"

//����x��y����
ptype power(ptype x,int y){
	if(y<=1){
		return x;//��ʼ����
	}
	else{
		return power(x,y-1)*x;//*x,��ǰ�ƽ�
	}
}

