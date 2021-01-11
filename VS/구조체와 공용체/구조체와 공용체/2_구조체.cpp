#include <stdio.h>
#include <iostream>
#include <cstring>
#include "구조체와 공용체.h"

using namespace std;

#define MAX1 10

int struct2() {
	struct MEMINFO {
		char name[20];
		int salary;
	};

	MEMINFO person[MAX1]={
		{"김대표", 10000},
		{"이부장", 7500},
		{"홍과장", 6000},
	};

	int count = 3, i;

	for (i = count; i < MAX1; i++) {
		cout << "이름은 ? : ";
		cin >> person[i].name;
		if (strcmp(person[i].name, "end") == 0)
			break;
		cout << "연봉은 ? : ";
		cin >> person[i].salary;
		count++;
	}

	for (i = 0; i < count; i++)
		cout << person[i].name << "의 연봉은" << person[i].salary << "입니다." << endl;
	return 0;
}