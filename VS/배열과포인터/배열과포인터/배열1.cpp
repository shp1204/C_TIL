#include <iostream>
#include <stdio.h>
#include "�迭��������.h"
using namespace std;

#define ARRAYMAX 5 //������ �迭 ���� : ũ��� ��ũ�θ� �̿��Ͽ� 5�� ������

int arr1() {
	int number[ARRAYMAX];
	int i, sum = 0;

	for (i = 0, i < ARRAYMAX; i++;) {
		cout << "������ �Է��ϼ��� --> ";
		cin >> number[i]; // �ټ� ���� ������ �Է¹���
	}
	for (i = 0; i < ARRAYMAX; i++) { // �迭�� ���Ҹ� ���ʴ�� ����
		sum += number[i];
	}
	cout << "sum = " << sum;

	return 0;
}