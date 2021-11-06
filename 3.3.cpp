#include "stdafx.h"
#include <iostream>
using namespace std;

void factors(int x) {
	int i = 2;
	if (x > 1) {
		for (; (i < x) && (x % i != 0); i++);
		cout << i << ' ';
		factors(x / i);
	}
	return;
}

int main()
{
	int x;
	cin >> x;
	factors(x);
	return 0;
}
