#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double z1;
	double z2;

	cout << "x = "; cin >> x;
	z1 = 1 - 1. / 4 * pow(sin(2 * x), 2) + cos(2 * x);
	z2 = pow(cos(x), 2) + pow(cos(x), 4);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}