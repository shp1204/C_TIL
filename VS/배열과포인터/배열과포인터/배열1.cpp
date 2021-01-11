#include <iostream>
#include <stdio.h>
#include "배열과포인터.h"
using namespace std;

#define ARRAYMAX 5 //정수형 배열 선언 : 크기는 매크로를 이용하여 5로 선언함

int arr1() {
	int number[ARRAYMAX];
	int i, sum = 0;

	for (i = 0, i < ARRAYMAX; i++;) {
		cout << "정수를 입력하세요 --> ";
		cin >> number[i]; // 다섯 개의 정수를 입력받음
	}
	for (i = 0; i < ARRAYMAX; i++) { // 배열의 원소를 차례대로 연산
		sum += number[i];
	}
	cout << "sum = " << sum;

	return 0;
}