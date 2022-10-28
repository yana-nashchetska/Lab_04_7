#include <iostream>  
#include <iomanip>  
#include <cmath>  

using namespace std;

int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "log(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		n = 0;
		a = (x - 1) / (x + 1);
		S = a;
		do {
			n++;
			R = (pow((x - 1), 2)) / (1. * (pow((x + 1), 2))) * (2. * n - 1) / (2. * n + 1);
			a *= R;
			S += a;
		} while (abs(a) >= eps);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(x) << " |"
			<< setw(10) << setprecision(5) << 2 * S << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}

	cout << "-------------------------------------------------" << endl;

	return 0;
}
