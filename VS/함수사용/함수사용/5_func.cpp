// 인라인 함수를 활용한 square 함수 수행 프로그램

#include <stdio.h>
#include <iostream>
#include "함수사용.h"

using namespace std;

// inline 함수 정의
inline int square(int num) {
	return num * num;
}

int func5() {
	int num;
	cout << "정수 입력 : ";
	cin >> num;

	//inline 함수 호출
	cout << num << "x" << num << " = " << square(num) << endl;
	return 0;

}