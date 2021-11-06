#include "stdafx.h"
#include <iostream>
using namespace std;

int decimal = 0;

void convert2decimal(int x, int y) {
	if (x % 10 == x) decimal += x*pow(2, y);
	if (x / 10 == 0) return;
	convert2decimal(x / 10, y + 1);
	decimal += (x % 10)*pow(2, y);
}

int main()
{
	int x;
	cin >> x;
	convert2decimal(x, 0);
	cout << decimal << endl;
	return 0;
}

