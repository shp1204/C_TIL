#include <stdio.h>
#include <iostream>
#include <cstring>
#include "구조체와 공용체.h"

using namespace std;

#define MAX 5

int struct3() {

	struct MEMINFO {
		char name[20];
		int salary;
	};

	MEMINFO person[MAX] = {
		{"김대표", 10000},
		{"이부장", 7500},
		{"홍과장", 6000},
	};

	// 구조체 형의 포인터 변수 PTR 선언
	MEMINFO* ptr;

	// 구조체 배열의 시작주소 대입
	ptr = person;
	int count = 3;

	// 포인터 변수의 연산을 통해 person 배열의 입력을 받음
	for (; count < MAX; count++) {
		cout << "이름은 ? : ";
		cin >> (ptr + count)->name;

		if (strcmp((ptr + count)->name, "end") == 0)
			break;
		cout << "연봉은 ? : ";
		cin >> (ptr + count)->salary;
	}

	// 포인터 변수의 연산을 통해 입력된 내용을 모두 출력
	for (count--; count >= 0; count--)
		cout << (ptr + count)->name << "의 연봉은" << (ptr + count)->salary << "입니다." << endl;
	
	return 0;
}