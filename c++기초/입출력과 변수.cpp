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
	float aa = 9.8;
	float bb = 3.14;

	// double : 64bit, 실수 
	// 저장 공간이 늘어나게 되면 표현 가능한 숫자의 개수는 제곱이 된다.
	// float로 저장했을 때 아주 작은 숫자들을 계산하는 과정에서 오차가 발생하는데 오차를 줄이기 위하여 double 사용.
	double aaa = 9.8;
	double bbb = 3.14;



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

	//>> 입출력과 변수 06
	/* sizeof(x) : x의 크기를 알려줌 	*/
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
	
	// 만약 int에 실수를 입력하면?
	int a2 = 3.14;
	double b2 = 10;
	printf("%d %f\n", a2, b2); // 3, 10.000000000

	// 형변환
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;
	printf("%f\n", avg); // 93.666 => 93.7 이 나와야할 것 같은데 93.0000 이 출력된다.
	
	/*
	정수 / 정수 = 정수
	실수 / 실수 = 실수
	실수 / 정수 = 실수
	*/

	// 실수로 나오게 하기 위해서는 ?
	int math2 = 90, korean2 = 95, english2 = 96;
	int sum2 = math2 + korean2 + english2;
	double avg2 = (double)sum2 / 3; // (double)을 앞에 붙여주면 잠시 실수인척하면서 연산한다.
	printf("%f\n", avg2); // 93.6667 이 나옴
	
	// 정수 + 정수 = 정수
	// 정수 + 실수 = 실수
	// 실수 + 실수 = 실수


	//>> 입출력과 변수 07
	// 형식이 같아야함(float, int, double)
	//float x, y;
	//scanf_s("%f%f", &x, &y); // & : 포인터
	//float hap2 = x + y;
	//float cha2 = x - y;
	//float gop2 = x * y;
	//float mok2 = x / y;
	//
	//printf("%f + %f = %f\n", x, y, hap2);
	//printf("%f - %f = %f\n", x, y, cha2);
	//printf("%f * %f = %f\n", x, y, gop2);
	//printf("%f / %f = %f\n", x, y, mok2);
	

	//>> 입출력과 변수 08
	// char : 1byte 정수형, int : 4byte
	//char cc = 67;
	//printf("%c\n", cc); // 숫자를 char에 넣음
	// 아스키코드 표  : 문자와 숫자를 대응시켜주는 표
	char nn;
	printf("숫자 입력 : ");
	scanf_s("%c", &nn);
	printf_s("%c의 ASCII값 : %d\n", nn, nn);
	
	return 0;
}