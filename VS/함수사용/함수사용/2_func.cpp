// 값에 의한 전달 !!!


#include <stdio.h>
#include <iostream>
#include "함수사용.h"

using namespace std;

//함수 선언
//swap : call by value
void swap(int, int);

int func2() {

	int x, y;
	cout << "두 수를 입력하세요 --> " << endl;
	cin >> x >> y;

	//함수 호출
	swap(x, y);

	cout << "main : x = " << x << ", y = " << y << endl;

	return 0;
}

// 함수 정의
void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << "swap : x = " << x << ", y = " << y << endl;
 }