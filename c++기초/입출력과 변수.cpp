#include <stdio.h>

int main() {
	//>> ����°� ���� 01, 02
	printf("Hello, World!\n");



	//>> ����°� ���� 03
	printf("%d + %d = %d\n", 2, 3, 5);		// ���� ���

	printf("%f\n", 3.14);					// 3.140000
	printf("%.2f\n", 3.141592);				// 3.141592.2f �Ҽ��� ��°�ڸ������� ���(�ݿø�)

	printf("%g\n", 3.141592);				
	printf("%g.3g\n", 3.141592);			// �������·ε� ��°���

	printf("%c %c %c\n", 'a', 'b', 'c');	// ���� 1�� : ���ĺ�, ����, ��� ��ȣ, �ѱ� X, ���� X
	printf("%s\n", "�ȳ��ϼ���");			// ���ڿ�




	//>> ����°� ���� 04
	int a;					// ����
	a = 3;					// �ʱ�ȭ
	printf("%d\n", a);

	a = 5;					// �ʱ�ȭ
	printf("%d\n", a);




	//>> ����°� ���� 05
	// int : 32bit, ���� ����
	//int a = 5;
	int b = 3;
	int hap = a + b;
	int namuji = a % b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d %% %d = %d\n", a, b, namuji);		// %�� ����ϱ� ���ؼ��� %% �� �Է��ؾ��Ѵ�.

	// float : 32bit, �Ǽ�
	float aa = 9.8;
	float bb = 3.14;

	// double : 64bit, �Ǽ� 
	// ���� ������ �þ�� �Ǹ� ǥ�� ������ ������ ������ ������ �ȴ�.
	// float�� �������� �� ���� ���� ���ڵ��� ����ϴ� �������� ������ �߻��ϴµ� ������ ���̱� ���Ͽ� double ���.
	double aaa = 9.8;
	double bbb = 3.14;



	//>> ����°� ���� 05
	/*
	
	�ڷ��� - ������, �Ǽ���
		1 ) ������
			char(1byte) : ���ڸ� ��µ� ����
			short(2byte)
			long(4byte) -214483648 ~ +2147483647 : 2^32 ����ŭ �����Ѵ�.
			long long(8byte)
			int( �ý��ۿ� ���� �ڵ����� )

		2 ) �Ǽ���
			float(4byte)
			double(8byte)

	unsigned, signed
		�����ϴ� �������� -���� ����ϱ� ������ unsigned�� ����ϸ� �� 

	void : ���ϰ��� ���� �Լ��� �ڷ���
	
	bool : ��, ������ ���� ( = char )

	*/

	//>> ����°� ���� 06
	/* sizeof(x) : x�� ũ�⸦ �˷��� 	*/
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
	
	// ���� int�� �Ǽ��� �Է��ϸ�?
	int a2 = 3.14;
	double b2 = 10;
	printf("%d %f\n", a2, b2); // 3, 10.000000000

	// ����ȯ
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;
	printf("%f\n", avg); // 93.666 => 93.7 �� ���;��� �� ������ 93.0000 �� ��µȴ�.
	
	/*
	���� / ���� = ����
	�Ǽ� / �Ǽ� = �Ǽ�
	�Ǽ� / ���� = �Ǽ�
	*/

	// �Ǽ��� ������ �ϱ� ���ؼ��� ?
	int math2 = 90, korean2 = 95, english2 = 96;
	int sum2 = math2 + korean2 + english2;
	double avg2 = (double)sum2 / 3; // (double)�� �տ� �ٿ��ָ� ��� �Ǽ���ô�ϸ鼭 �����Ѵ�.
	printf("%f\n", avg2); // 93.6667 �� ����
	
	// ���� + ���� = ����
	// ���� + �Ǽ� = �Ǽ�
	// �Ǽ� + �Ǽ� = �Ǽ�


	//>> ����°� ���� 07
	// ������ ���ƾ���(float, int, double)
	//float x, y;
	//scanf_s("%f%f", &x, &y); // & : ������
	//float hap2 = x + y;
	//float cha2 = x - y;
	//float gop2 = x * y;
	//float mok2 = x / y;
	//
	//printf("%f + %f = %f\n", x, y, hap2);
	//printf("%f - %f = %f\n", x, y, cha2);
	//printf("%f * %f = %f\n", x, y, gop2);
	//printf("%f / %f = %f\n", x, y, mok2);
	

	//>> ����°� ���� 08
	// char : 1byte ������, int : 4byte
	//char cc = 67;
	//printf("%c\n", cc); // ���ڸ� char�� ����
	// �ƽ�Ű�ڵ� ǥ  : ���ڿ� ���ڸ� ���������ִ� ǥ
	char nn;
	printf("���� �Է� : ");
	scanf_s("%c", &nn);
	printf_s("%c�� ASCII�� : %d\n", nn, nn);
	
	return 0;
}