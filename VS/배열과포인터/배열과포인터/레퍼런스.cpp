#include <iostream>
#include <stdio.h>
#include "�迭��������.h"
using namespace std;

int refr1() {

	// ���� ����
	int number;
	int& rnum = number; // ���۷��� ������ rnum�� �ʱⰪ���� ����


	rnum = 10;

	// number, rnum�� �ּ� ���
	cout << "number = " << number << endl;
	cout << "rnum = " << rnum << endl;

	cout << "&number = " << &number << endl;
	cout << "&rnum = " << &rnum << endl;

	// �⺻ �ڷ����� refernce ũ�� ���
	cout << "sizeof(char&) = " << sizeof(char&) << endl;
	cout << "sizeof(short&) = " << sizeof(short&) << endl;
	cout << "sizeof(int&) = " << sizeof(int&) << endl;
	cout << "sizeof(double&) = " << sizeof(double&) << endl;

	return 0;
}