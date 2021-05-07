#include <stdio.h>

int main() {
	//>> 입출력과 변수 01, 02
	printf("Hello, World!\n");



	//>> 입출력과 변수 03
	printf("%d + %d = %d\n", 2, 3, 5);		// 정수 출력

	printf("%f\n", 3.14);					// 3.140000
	printf("%.2f\n", 3.141592);				// 3.141592.2f 소수점 둘째자리까지만 출력(반올림)

	printf("%g\n", 3.141592);				
	printf("%g.3g\n", 3.141592);			// 지수형태로도 출력가능

	printf("%c %c %c\n", 'a', 'b', 'c');	// 문자 1개 : 알파벳, 숫자, 몇몇 기호, 한글 X, 한자 X
	printf("%s\n", "안녕하세요");			// 문자열




	//>> 입출력과 변수 04
	int a;					// 선언
	a = 3;					// 초기화
	printf("%d\n", a);

	a = 5;					// 초기화
	printf("%d\n", a);




	//>> 입출력과 변수 05
	// int : 32bit, 정수 포함
	//int a = 5;
	int b = 3;
	int hap = a + b;
	int namuji = a % b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d %% %d = %d\n", a, b, namuji);		// %를 출력하기 위해서는 %% 를 입력해야한다.

	// float : 32bit, 실수
	float a = 9.8;
	float b = 3.14;

	// double : 64bit, 실수 
	// 저장 공간이 늘어나게 되면 표현 가능한 숫자의 개수는 제곱이 된다.
	// float로 저장했을 때 아주 작은 숫자들을 계산하는 과정에서 오차가 발생하는데 오차를 줄이기 위하여 double 사용.
	double a = 9.8;
	double b = 3.14;



	//>> 입출력과 변수 05
	/*
	
	자료형 - 정수형, 실수형
		1 ) 정수형
			char(1byte) : 문자를 담는데 쓰임
			short(2byte)
			long(4byte) -214483648 ~ +2147483647 : 2^32 개만큼 저장한다.
			long long(8byte)
			int( 시스템에 따라서 자동결정 )

		2 ) 실수형
			float(4byte)
			double(8byte)

	unsigned, signed
		저장하는 과정에서 -값을 사용하기 싫으면 unsigned를 사용하면 됨 

	void : 리턴값이 없는 함수의 자료형
	
	bool : 참, 거짓을 저장 ( = char )

	*/


}