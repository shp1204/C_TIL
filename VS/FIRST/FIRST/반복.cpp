#include <iostream>
using namespace std;
int main2()
{
	int score;
	cout << "score?";
	cin >> score;
	if (score < 0 || score < 100)
		cout << "Invalid score" << score << '\n';
	else
		cout << "Valid score" << score << '\n';
	
	return 0;
}