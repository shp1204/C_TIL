#include <stdio.h>
#include <iostream>
#include <cstring>
#include "구조체와 공용체.h"

using namespace std;

int struct4() {
	struct MEMINFO {
		char name[20];
		int salary;
	};

	int size;
	cout << "배열의 크기는?";
	cin >> size;

	MEMINFO* ptr = new MEMINFO[size];
	
	int i, count = 0;
	for (i = 0; i < size; i++) {
		cout << "이름은 ? : ";
		cin >> (ptr + i)->name;

		if (strcmp((ptr + i)->name, "end") == 0)
			break;
		cout << "연봉은 ? : ";
		cin >> (ptr + i)->salary;
	}

	count = i;
	for (i = 0; i < count; i++)
		cout << (ptr + i)->name << "의 연봉은" << (ptr + i)->salary << "입니다." << endl;
	delete[] ptr;
	return 0;
}