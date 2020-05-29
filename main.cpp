#include <iostream>
#include "bigint.h"
using namespace std;

int main()
{
	freopen("inputcpp.txt", "r", stdin);
	freopen("outputcpp.txt", "w", stdout);
	bigint a, b;
	cin >> a.n >> b.n;
	bigint c(a+b);
	cout << c;
	return 0;
}