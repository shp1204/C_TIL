// �ζ��� �Լ��� Ȱ���� square �Լ� ���� ���α׷�

#include <stdio.h>
#include <iostream>
#include "�Լ����.h"

using namespace std;

// inline �Լ� ����
inline int square(int num) {
	return num * num;
}

int func5() {
	int num;
	cout << "���� �Է� : ";
	cin >> num;

	//inline �Լ� ȣ��
	cout << num << "x" << num << " = " << square(num) << endl;
	return 0;

}