// reference에 의한 전달
// 호출한 함수의 메모리 정보 공유 -> 호출된 함수에서 호출한 메모리의 직접 참조 및 변경 가능

#include <stdio.h>
#include <iostream>
#include "함수사용.h"

using namespace std;

// 함수 선언
//swap : call by address
void swap(int&, int&);

int func4() {
	int x, y;
	cout << "두 수를 입려하십시오 --> " << endl;
	cin >> x >> y;

	//함수 호출
	swap(x, y);

	cout << "main : x = " << x << ", y = " << y << endl;

	return 0;
}

// 함수 정의
void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << "swap : x = " << x << ", y =" << y << endl;
}