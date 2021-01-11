#include <stdio.h>
#include <iostream>
#include <cstring>
#include "구조체와 공용체.h"

using namespace std;

int common() {
	
	union KEY {
		unsigned int input;
		unsigned char byte[4];
	};

	KEY key;
	key.input = 0xc0a86401;

	int i;

	// 1 byte씩 움직이면서 어떤 것이 저장되어있는지 보여준다
	for (i = 3; i >= 0; i--)
		cout << (int)key.byte[i] << endl;
	return 0;
}