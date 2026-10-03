// Лабораторна робота № 4.2
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 4.95*x * x;
		if (x <= -3.5)
			B = cos(3 * x) - sin(x);
		else
			if (x <= 1)
				B = atan((x + 3.5) / 5.0);
			else
				B = pow(x, -2) + 4;
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}