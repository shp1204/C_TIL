#include <iostream>
#include <stdio.h>
#include "�迭��������.h"
using namespace std;

#define ROWMAX 5 //�л� ��
#define COLMAX 3

int arr2() {

	// ���� ���̺� ����
	int score[ROWMAX][COLMAX] = {
		{78, 65, 80},
		{93, 88, 95},
		{85, 97, 94},
		{66, 79, 82},
		{84, 87, 88}
	};

	int i, j, sum;
	float avg[ROWMAX];

	for (i = 0; i < ROWMAX; i++) { // ��
		sum = 0;
		for (j = 0; j < COLMAX; j++) // ��
			sum += score[i][j];
			avg[i] = sum / 3.0;
	}

	for (i = 0; i < ROWMAX; i++)
		cout << avg[i] << endl;
	return 0;
}