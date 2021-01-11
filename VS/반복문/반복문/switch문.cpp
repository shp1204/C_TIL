#include <stdio.h>
#include <iostream>
#include "반복문.h"

using namespace std;

int switch문1() {

	int score;
	cout << "score?";
	cin >> score;
	if (score < 0 || score>100)
		cout << "Invalid Score" << score << endl;
	else
		switch (score / 10) {
			case 10:
			case 9: cout << "A학점" << '\n';
				break;
			case 8: cout << "B학점" << '\n';
				break;
			case 7: cout << "C학점" << '\n';
				break;
			case 6: cout << "D학점" << '\n';
				break;
			default: cout << "F학점" << '\n';
				break;
		}

	return 0;
}