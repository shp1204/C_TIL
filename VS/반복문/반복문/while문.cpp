#include <stdio.h>
#include <iostream>
#include "�ݺ���.h"

using namespace std;

//����ڰ� �Է��� ������ ���� ���ϴ� ���α׷�
int while��1() {
	int number;
	int summ = 0;

	cout << "������ �Է��ϼ��� : ";
	cin >> number;

	while (number != -1) {

		summ = summ + number;
		cout << "������ ������ ������ �Է��ϼ��� : ";
		cin >> number;

	}
	cout << "����� : ";
	cout << summ;
	return 0;
}