#include <stdio.h>
#include <iostream>
#include "�ݺ���.h"

using namespace std;

int if��1() {
	// if��
	int score;
	cout << "score?";
	cin >> score;
	if (score < 0 || score < 100)
		cout << "Invalid score : " << score << '\n';
	else
		cout << "Valid score : " << score << '\n';



	// ���� if��
	if (score >= 90)
		cout << "���� ������ A����" << '\n';
	else if (score >= 80)
		cout << "���� ������ B����" << '\n';
	else if (score >= 70)
		cout << "���� ������ C����" << '\n';
	else if (score >= 60)
		cout << "���� ������ D����" << '\n';
	else
		cout << "���� ������ F����" << '\n';

	return 0;
}
