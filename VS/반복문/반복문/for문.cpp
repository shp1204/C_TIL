#include <stdio.h>
#include <iostream>
#include "반복문.h"

using namespace std;

// i변수의 값이 0~9까지 10번 반복하는 프로그램
int for문1() {
	int i, num, sum = 0;
	for (i = 0; i < 10; i++) {
		cout << "숫자는 ? ";
		cin >> num;
		sum = sum + num;
	}
	cout << sum << endl;
	return 0;
}