#include <iostream>
#include <stdio.h>
#include "배열과포인터.h"
using namespace std;

int add1(int x, int y);
int substract1(int x, int y);

int func1() {
	int (*calc)(int, int); //calc 함수 포인터 변수 선언

	calc = add1;
	cout << calc(64, 178) << endl;
	
	calc = substract1;
	cout << calc(153, 98) << endl;
	return 0;

}

int add1(int x, int y) {
	return x + y;
}

int substract1(int x, int y) {
	return x - y;
}
