#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>
#include "shapes.h"

int main(){
	string type;
	int num1=0, num2=0;
	
	Shape *p_shape;
	Rectangle R;
	Triangle T;
	Circle C;
	
	cin>>type;
	if(type=="rectangle"){
		cin>>num1>>num2;
		p_shape = &R;
	}
	else if(type=="triangle"){
		cin>>num1>>num2;
		p_shape = &T;
	}else if(type=="circle"){
		cin>>num1;
		p_shape = &C;
	}
	
	p_shape->setWidth(num1);
	p_shape->setHeight(num2);
	cout << p_shape -> area()<<endl;
	
	return 0;
}
