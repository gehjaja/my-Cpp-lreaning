#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double pai{ 0.0 }, i{ 1. }, t;
	int sign{ 1 };
	do
	{
		t = 1 / i;
		pai += sign * t;
		sign *= -1;
		i += 2;
	} while (t > 1e-9);
	cout << setprecision(55) << pai * 4.0 << endl;
	system("pause");
	return 0;
}