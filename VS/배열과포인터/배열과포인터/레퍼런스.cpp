#include <iostream>
#include <stdio.h>
#include "배열과포인터.h"
using namespace std;

int refr1() {

	// 변수 선언
	int number;
	int& rnum = number; // 레퍼런스 변수인 rnum의 초기값으로 설정


	rnum = 10;

	// number, rnum의 주소 출력
	cout << "number = " << number << endl;
	cout << "rnum = " << rnum << endl;

	cout << "&number = " << &number << endl;
	cout << "&rnum = " << &rnum << endl;

	// 기본 자료형의 refernce 크기 출력
	cout << "sizeof(char&) = " << sizeof(char&) << endl;
	cout << "sizeof(short&) = " << sizeof(short&) << endl;
	cout << "sizeof(int&) = " << sizeof(int&) << endl;
	cout << "sizeof(double&) = " << sizeof(double&) << endl;

	return 0;
}