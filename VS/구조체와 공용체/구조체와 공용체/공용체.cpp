#include <stdio.h>
#include <iostream>
#include <cstring>
#include "����ü�� ����ü.h"

using namespace std;

int common() {
	
	union KEY {
		unsigned int input;
		unsigned char byte[4];
	};

	KEY key;
	key.input = 0xc0a86401;

	int i;

	// 1 byte�� �����̸鼭 � ���� ����Ǿ��ִ��� �����ش�
	for (i = 3; i >= 0; i--)
		cout << (int)key.byte[i] << endl;
	return 0;
}