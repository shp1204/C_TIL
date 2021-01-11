#include <stdio.h>
#include <iostream>
#include <cstring>
#include "구조체와 공용체.h"

using namespace std;

int struct1() {
	struct MEMINFO {
		char name[20];
		int salary;
	};

	MEMINFO s1 = { "홍영희", 4500 };
	MEMINFO s2;

	s2 = s1; // s1을 s2로 대입

	// s2 변수의 멤버들을 출력
	cout << "s2.name : " << s2.name << endl;
	cout << "s2.salary : " << s2.salary << endl;
	
	return 0;
}