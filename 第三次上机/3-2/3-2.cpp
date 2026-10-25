#include<iostream>
#include<cmath>
using namespace std;
float f1(float a);//原函数
float f2(float a);//导函数
int main()
{
	float x1,x2=2.;
	do
	{
		x1 = x2;
		x2 = x1- f1(x1) / f2(x1);
	}
	while(fabs(x2 - x1) > 1e-5);
	cout << "The root is: " << x2 << endl;
	system("pause");
	return 0;
}
float f1(float a)
{
	float n;
	n = a * a * a - a - 1;
	return n;
}
float f2(float a)
{
	float n;
	n = 3 * a * a - 1;
	return n;
}