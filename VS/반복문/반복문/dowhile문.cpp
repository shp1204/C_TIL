#include <stdio.h>
#include <iostream>
#include "�ݺ���.h"

using namespace std;

int dowhile��1() {
	
	int sum = 0, number = 0;
	do {
		sum = sum + number;
		cout << "������ �Է��ϼ��� : ";
		cin >> number;
	} while (number != -1); //-1�� �ƴϸ� ���� �ö󰡼� ����, -1�̸� �ٷ� ����

	cout << sum << endl;
	return 0;
}