// reference�� ���� ����
// ȣ���� �Լ��� �޸� ���� ���� -> ȣ��� �Լ����� ȣ���� �޸��� ���� ���� �� ���� ����

#include <stdio.h>
#include <iostream>
#include "�Լ����.h"

using namespace std;

// �Լ� ����
//swap : call by address
void swap(int&, int&);

int func4() {
	int x, y;
	cout << "�� ���� �Է��Ͻʽÿ� --> " << endl;
	cin >> x >> y;

	//�Լ� ȣ��
	swap(x, y);

	cout << "main : x = " << x << ", y = " << y << endl;

	return 0;
}

// �Լ� ����
void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << "swap : x = " << x << ", y =" << y << endl;
}