// �Լ� ���ø��� �̿��� max �Լ� ���� ���α׷�
// ���ڿ��� �ִ� max�� �ȸ����� !!!!!!!!

#include <stdio.h>
#include <iostream>
#include "�Լ����.h"

using namespace std;

struct TYPE {
	int no;
	char name[20];
};

//�⺻ �Լ� ���ø�
template <typename T>
T max(T&x, T&y);

//Ư�� �Լ� ���ø�
template <>
TYPE max(TYPE& x, TYPE& y);

//�Ϲ� �Լ�
char*max(char*x, char*y);

int func7() {
	// �⺻ �Լ� ���ø� ����
	cout << "max(1o, 20) = " << max(10, 20) << endl;
	cout << "max(7.5, 6.8) = " << max(7.5, 6.8) << endl;

	// �Ϲ� �Լ� ���ø� ����
	//cout << "max(\"hello\", \"hi\") = " << max("hello","hi") << endl;
	
	// Ư�� �Լ� ���ø� ����
	TYPE x = { 10, "kim" };
	TYPE y = { 20, "lee" };
	TYPE z = max(x, y);
	cout << "max(TYPE x, TYPE y) = " << z.no << "," << z.name << endl;

	return 0;
}

//�⺻ �Լ� ���ø�
template<typename T>
T max(T&x, T&y)
{
	return (x > y) ? x : y;
}

//�Ϲ� �Լ� ���ø�
char* max(char* x, char* y) {
	return (strcmp(x, y) > 0) ? x : y;
}


//Ư�� �Լ� ���ø�
template <>
TYPE max(TYPE& x, TYPE& y) {
	return (x.no > y.no) ? x : y;
}