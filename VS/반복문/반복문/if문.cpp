#include <stdio.h>
#include <iostream>
#include "반복문.h"

using namespace std;

int if문1() {
	// if문
	int score;
	cout << "score?";
	cin >> score;
	if (score < 0 || score < 100)
		cout << "Invalid score : " << score << '\n';
	else
		cout << "Valid score : " << score << '\n';



	// 다중 if문
	if (score >= 90)
		cout << "최종 학점은 A학점" << '\n';
	else if (score >= 80)
		cout << "최종 학점은 B학점" << '\n';
	else if (score >= 70)
		cout << "최종 학점은 C학점" << '\n';
	else if (score >= 60)
		cout << "최종 학점은 D학점" << '\n';
	else
		cout << "최종 학점은 F학점" << '\n';

	return 0;
}
