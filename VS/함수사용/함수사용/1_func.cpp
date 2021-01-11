#include <stdio.h>
#include <iostream>
#include "함수사용.h"

using namespace std;

// 함수 선언
// testfunc : 리턴 값 없음, 정수형 인자 1개
void TestFunc(int);

int func1() {
	cout << "main function start" << endl;

	//함수 호출
	TestFunc(123);

	cout << "main function end" << endl;

	return 0;

}

void TestFunc(int num)
{
	cout << "TestFunc : num = " << num << endl;
}