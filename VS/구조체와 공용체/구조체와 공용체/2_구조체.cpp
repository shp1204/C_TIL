#include <stdio.h>
#include <iostream>
#include <cstring>
#include "����ü�� ����ü.h"

using namespace std;

#define MAX1 10

int struct2() {
	struct MEMINFO {
		char name[20];
		int salary;
	};

	MEMINFO person[MAX1]={
		{"���ǥ", 10000},
		{"�̺���", 7500},
		{"ȫ����", 6000},
	};

	int count = 3, i;

	for (i = count; i < MAX1; i++) {
		cout << "�̸��� ? : ";
		cin >> person[i].name;
		if (strcmp(person[i].name, "end") == 0)
			break;
		cout << "������ ? : ";
		cin >> person[i].salary;
		count++;
	}

	for (i = 0; i < count; i++)
		cout << person[i].name << "�� ������" << person[i].salary << "�Դϴ�." << endl;
	return 0;
}