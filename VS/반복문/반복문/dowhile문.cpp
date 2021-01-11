#include <stdio.h>
#include <iostream>
#include "반복문.h"

using namespace std;

int dowhile문1() {
	
	int sum = 0, number = 0;
	do {
		sum = sum + number;
		cout << "정수를 입력하세요 : ";
		cin >> number;
	} while (number != -1); //-1이 아니면 위로 올라가서 수행, -1이면 바로 종료

	cout << sum << endl;
	return 0;
}