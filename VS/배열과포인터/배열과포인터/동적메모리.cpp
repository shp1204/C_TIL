#include <iostream>
#include <stdio.h>
#include "�迭��������.h"
using namespace std;

int dynamic1() {
	int size;

	cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
	cin >> size;

	// size ������ ũ�⸸ŭ int���� ���� �迭�� �Ҵ� ����
	int* p = new int[size];
	if (p == NULL) {
		cout << "�޸� �Ҵ� ���� : int[" << size << "]" << endl;
		return 1;
	}

	// size ������ ũ�⸸ŭ double���� ���� �迭�� �Ҵ� ����
	double* dp = new double[size];
	if (dp == NULL) {
		cout << "�޸� �Ҵ� ���� : int[" << size << "]" << endl;
		return 1;
	}

	int i;
	cout << "����" << size << "���� �Է��ϼ���" << endl;
	for (i = 0; i < size; i++)
		cin >> p[i];

	cout << "�Ǽ�" << size << "���� �Է��ϼ���" << endl;
	for (i = 0; i < size; i++)
		cin >> dp[i];

	cout << "�Է� ���� ���� ������ �����ϴ�." << endl;
	for (i = 0; i < size; i++) {
		cout << "*(p+" << i << ") = " << *(p + i);
		cout << ", (dp+" << i << ") = " << *(dp + i) << endl;
	}

	delete[] p;
	p = NULL;
	delete[] dp;
	dp = NULL;
	return 0;
}