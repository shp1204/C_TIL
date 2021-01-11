#include <stdio.h>
#include <iostream>
#include "반복문.h"

using namespace std;

//사용자가 입력한 정수의 합을 구하는 프로그램
int while문1() {
	int number;
	int summ = 0;

	cout << "정수를 입력하세요 : ";
	cin >> number;

	while (number != -1) {

		summ = summ + number;
		cout << "연산을 수행할 정수를 입력하세요 : ";
		cin >> number;

	}
	cout << "결과값 : ";
	cout << summ;
	return 0;
}