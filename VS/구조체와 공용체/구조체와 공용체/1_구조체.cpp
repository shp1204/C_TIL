#include <stdio.h>
#include <iostream>
#include <cstring>
#include "����ü�� ����ü.h"

using namespace std;

int struct1() {
	struct MEMINFO {
		char name[20];
		int salary;
	};

	MEMINFO s1 = { "ȫ����", 4500 };
	MEMINFO s2;

	s2 = s1; // s1�� s2�� ����

	// s2 ������ ������� ���
	cout << "s2.name : " << s2.name << endl;
	cout << "s2.salary : " << s2.salary << endl;
	
	return 0;
}