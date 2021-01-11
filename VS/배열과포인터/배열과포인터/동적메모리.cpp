#include <iostream>
#include <stdio.h>
#include "배열과포인터.h"
using namespace std;

int dynamic1() {
	int size;

	cout << "배열의 크기를 입력하세요 : ";
	cin >> size;

	// size 변수의 크기만큼 int형의 동적 배열을 할당 받음
	int* p = new int[size];
	if (p == NULL) {
		cout << "메모리 할당 실패 : int[" << size << "]" << endl;
		return 1;
	}

	// size 변수의 크기만큼 double형의 동적 배열을 할당 받음
	double* dp = new double[size];
	if (dp == NULL) {
		cout << "메모리 할당 실패 : int[" << size << "]" << endl;
		return 1;
	}

	int i;
	cout << "정수" << size << "개를 입력하세요" << endl;
	for (i = 0; i < size; i++)
		cin >> p[i];

	cout << "실수" << size << "개를 입력하세요" << endl;
	for (i = 0; i < size; i++)
		cin >> dp[i];

	cout << "입력 받은 수는 다음과 같습니다." << endl;
	for (i = 0; i < size; i++) {
		cout << "*(p+" << i << ") = " << *(p + i);
		cout << ", (dp+" << i << ") = " << *(dp + i) << endl;
	}

	delete[] p;
	p = NULL;
	delete[] dp;
	dp = NULL;
	return 0;
}