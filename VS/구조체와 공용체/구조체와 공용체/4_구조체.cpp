#include <stdio.h>
#include <iostream>
#include <cstring>
#include "����ü�� ����ü.h"

using namespace std;

int struct4() {
	struct MEMINFO {
		char name[20];
		int salary;
	};

	int size;
	cout << "�迭�� ũ���?";
	cin >> size;

	MEMINFO* ptr = new MEMINFO[size];
	
	int i, count = 0;
	for (i = 0; i < size; i++) {
		cout << "�̸��� ? : ";
		cin >> (ptr + i)->name;

		if (strcmp((ptr + i)->name, "end") == 0)
			break;
		cout << "������ ? : ";
		cin >> (ptr + i)->salary;
	}

	count = i;
	for (i = 0; i < count; i++)
		cout << (ptr + i)->name << "�� ������" << (ptr + i)->salary << "�Դϴ�." << endl;
	delete[] ptr;
	return 0;
}