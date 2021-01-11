// 함수 템플릿을 이용한 max 함수 실행 프로그램
// 문자열에 있는 max가 안먹힌다 !!!!!!!!

#include <stdio.h>
#include <iostream>
#include "함수사용.h"

using namespace std;

struct TYPE {
	int no;
	char name[20];
};

//기본 함수 템플릿
template <typename T>
T max(T&x, T&y);

//특수 함수 템플릿
template <>
TYPE max(TYPE& x, TYPE& y);

//일반 함수
char*max(char*x, char*y);

int func7() {
	// 기본 함수 템플릿 선택
	cout << "max(1o, 20) = " << max(10, 20) << endl;
	cout << "max(7.5, 6.8) = " << max(7.5, 6.8) << endl;

	// 일반 함수 템플릿 선택
	//cout << "max(\"hello\", \"hi\") = " << max("hello","hi") << endl;
	
	// 특수 함수 템플릿 선택
	TYPE x = { 10, "kim" };
	TYPE y = { 20, "lee" };
	TYPE z = max(x, y);
	cout << "max(TYPE x, TYPE y) = " << z.no << "," << z.name << endl;

	return 0;
}

//기본 함수 템플릿
template<typename T>
T max(T&x, T&y)
{
	return (x > y) ? x : y;
}

//일반 함수 템플릿
char* max(char* x, char* y) {
	return (strcmp(x, y) > 0) ? x : y;
}


//특수 함수 템플릿
template <>
TYPE max(TYPE& x, TYPE& y) {
	return (x.no > y.no) ? x : y;
}