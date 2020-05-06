#include <iostream>
#include "bigint.h"
using namespace std;

float fac(float n)
{
	if(n < 3)
		return n;
	else
		return n * fac(n-1);
}

int main()
{
	freopen("inputcpp.txt", "r", stdin);
	freopen("outputcpp.txt", "w", stdout);
	float a;
	cin >> a;
	cout << fac(a);
	return 0;
}