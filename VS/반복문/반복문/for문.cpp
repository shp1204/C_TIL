#include <stdio.h>
#include <iostream>
#include "�ݺ���.h"

using namespace std;

// i������ ���� 0~9���� 10�� �ݺ��ϴ� ���α׷�
int for��1() {
	int i, num, sum = 0;
	for (i = 0; i < 10; i++) {
		cout << "���ڴ� ? ";
		cin >> num;
		sum = sum + num;
	}
	cout << sum << endl;
	return 0;
}