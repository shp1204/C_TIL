#include <stdio.h>

int main() {
	// 1. 두 숫자를 입력받아서 그 숫자들의 합을 출력하는 프로그램
	int x, y;
	printf(" 두 숫자를 입력하세요. \n");
	scanf_s("%d%d", &x, &y);
	printf("두 수 %d, %d의 합은 %d 입니다. \n", x, y, x + y);

	

	// 2. 키와 몸무게를 입력받아서 체질량 지수를 구하세요. 체중 (kg)/ 키^2 ( 단위 : m )
	float height, weight;

	printf(" 키를 입력하세요.(단위 : m) \n");
	scanf_s("%f", &height);

	printf(" 몸무게를 입력하세요.(단위 : kg) \n");
	scanf_s("%f", &weight);

	printf("체질량 지수는 %f 입니다. \n", weight /(height * height));

	printf(" ");
	printf(" ");

	// 3. 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 출력하세요.
	char alphabet;
	printf("알파벳을 입력하세요 : \n");
	scanf_s("%c", &alphabet);
	
	char next = alphabet + 1;
	printf("다음 알파벳은 %c입니다.\n", next);

	return 0;
}