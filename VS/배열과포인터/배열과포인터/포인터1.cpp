#include <iostream>
#include <stdio.h>
#include "배열과포인터.h"
using namespace std;

#define MAX 5

int pointer1() {
	int num[MAX], * p;
	double dnum[MAX], * dp;
	int i;

	// p : num 배열의 첫 번째 원소
	// dp : dnum 배열의 첫 번째 원소
	p = num;
	dp = dnum;

	// 포인터 변수 p를 배열처럼 첨자를 이용하여 입력받음
	cout << "정수 5개를 입력하세요." << endl;
	for (i = 0; i < MAX; i++)
		cin >> p[i];

	// 포인터 변수 dp를 배열처럼 첨자를 이용하여 입력받음
	cout << "실수 5개를 입력하세요." << endl;
	for (i = 0; i < MAX; i++)
		cin >> dp[i];

	// 각 배열의 원소를 출력
	cout << "입력받은 수는 다음과 같습니다. " << endl;
	for (i = 0; i < MAX; i++) {
		cout << "*(p+" << i << ") = " << *(p + i);
		cout << ", *(dp+" << i << ") = " << *(dp + i) << endl;
	}

	return 0;

}