#include <stdio.h>

int main() {
	// 1. �� ���ڸ� �Է¹޾Ƽ� �� ���ڵ��� ���� ����ϴ� ���α׷�
	int x, y;
	printf(" �� ���ڸ� �Է��ϼ���. \n");
	scanf_s("%d%d", &x, &y);
	printf("�� �� %d, %d�� ���� %d �Դϴ�. \n", x, y, x + y);

	

	// 2. Ű�� �����Ը� �Է¹޾Ƽ� ü���� ������ ���ϼ���. ü�� (kg)/ Ű^2 ( ���� : m )
	float height, weight;

	printf(" Ű�� �Է��ϼ���.(���� : m) \n");
	scanf_s("%f", &height);

	printf(" �����Ը� �Է��ϼ���.(���� : kg) \n");
	scanf_s("%f", &weight);

	printf("ü���� ������ %f �Դϴ�. \n", weight /(height * height));

	printf(" ");
	printf(" ");

	// 3. ���ĺ��� �Է¹޾Ƽ� �� ���� ���ĺ��� ����ϴ� ���α׷��� ����ϼ���.
	char alphabet;
	printf("���ĺ��� �Է��ϼ��� : \n");
	scanf_s("%c", &alphabet);
	
	char next = alphabet + 1;
	printf("���� ���ĺ��� %c�Դϴ�.\n", next);

	return 0;
}