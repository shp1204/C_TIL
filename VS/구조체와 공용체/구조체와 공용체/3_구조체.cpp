#include <stdio.h>
#include <iostream>
#include <cstring>
#include "����ü�� ����ü.h"

using namespace std;

#define MAX 5

int struct3() {

	struct MEMINFO {
		char name[20];
		int salary;
	};

	MEMINFO person[MAX] = {
		{"���ǥ", 10000},
		{"�̺���", 7500},
		{"ȫ����", 6000},
	};

	// ����ü ���� ������ ���� PTR ����
	MEMINFO* ptr;

	// ����ü �迭�� �����ּ� ����
	ptr = person;
	int count = 3;

	// ������ ������ ������ ���� person �迭�� �Է��� ����
	for (; count < MAX; count++) {
		cout << "�̸��� ? : ";
		cin >> (ptr + count)->name;

		if (strcmp((ptr + count)->name, "end") == 0)
			break;
		cout << "������ ? : ";
		cin >> (ptr + count)->salary;
	}

	// ������ ������ ������ ���� �Էµ� ������ ��� ���
	for (count--; count >= 0; count--)
		cout << (ptr + count)->name << "�� ������" << (ptr + count)->salary << "�Դϴ�." << endl;
	
	return 0;
}