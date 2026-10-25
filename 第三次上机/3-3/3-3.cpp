#include<iostream>
#include<iomanip>
using namespace std;
double mycos(double x);
int main()
{
	cout << setprecision(10) << mycos(.523) << "\n" << mycos(1.047) << "\n";
	system("pause");
	return 0;
}
double mycos(double x)
{
	double sum{ 1 }, n{ 1 };
	int i1 = 1, i2 = 2, t;//分母
	while (n >= 1e-9 || n <= -1e-9)//运算精度
	{
		t = i1 * i2;
		n*= -1 * x * x / t;
		sum += n;
		i1 += 2;
		i2 += 2;
		
	}
	return sum;
}