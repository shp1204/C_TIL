#include <stdio.h>
#include <iostream>
#include "�ݺ���.h"

using namespace std;

int switch��1() {

	int score;
	cout << "score?";
	cin >> score;
	if (score < 0 || score>100)
		cout << "Invalid Score" << score << endl;
	else
		switch (score / 10) {
			case 10:
			case 9: cout << "A����" << '\n';
				break;
			case 8: cout << "B����" << '\n';
				break;
			case 7: cout << "C����" << '\n';
				break;
			case 6: cout << "D����" << '\n';
				break;
			default: cout << "F����" << '\n';
				break;
		}

	return 0;
}