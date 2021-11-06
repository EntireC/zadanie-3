#include "stdafx.h"
#include <iostream>
using namespace std;

void print_reverse(int x) {
	if (x % 10 == x) cout << x << ' ';
	if (x / 10 == 0) return;
	print_reverse(x / 10);
	cout << x % 10 << ' ';
}

int main()
{
	int x;
	cin >> x;
	print_reverse(x);
	cout << endl;
    return 0;
}
