#include <stdio.h>
#include <iostream>
#include "�Լ����.h"

using namespace std;

// �Լ� ����
// testfunc : ���� �� ����, ������ ���� 1��
void TestFunc(int);

int func1() {
	cout << "main function start" << endl;

	//�Լ� ȣ��
	TestFunc(123);

	cout << "main function end" << endl;

	return 0;

}

void TestFunc(int num)
{
	cout << "TestFunc : num = " << num << endl;
}