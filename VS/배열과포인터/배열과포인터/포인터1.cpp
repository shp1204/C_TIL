#include <iostream>
#include <stdio.h>
#include "�迭��������.h"
using namespace std;

#define MAX 5

int pointer1() {
	int num[MAX], * p;
	double dnum[MAX], * dp;
	int i;

	// p : num �迭�� ù ��° ����
	// dp : dnum �迭�� ù ��° ����
	p = num;
	dp = dnum;

	// ������ ���� p�� �迭ó�� ÷�ڸ� �̿��Ͽ� �Է¹���
	cout << "���� 5���� �Է��ϼ���." << endl;
	for (i = 0; i < MAX; i++)
		cin >> p[i];

	// ������ ���� dp�� �迭ó�� ÷�ڸ� �̿��Ͽ� �Է¹���
	cout << "�Ǽ� 5���� �Է��ϼ���." << endl;
	for (i = 0; i < MAX; i++)
		cin >> dp[i];

	// �� �迭�� ���Ҹ� ���
	cout << "�Է¹��� ���� ������ �����ϴ�. " << endl;
	for (i = 0; i < MAX; i++) {
		cout << "*(p+" << i << ") = " << *(p + i);
		cout << ", *(dp+" << i << ") = " << *(dp + i) << endl;
	}

	return 0;

}