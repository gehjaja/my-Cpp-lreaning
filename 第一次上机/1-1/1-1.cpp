#include<iostream>
using namespace std;
int main(void)
{ 
	float x, y;
	cout << "input x=";
	cin >> x;
	if (x > 0)
		y = 1;
	else if (x == 0)
		y = 0;
	else
		y = -1;
	cout << "x=" << x << " y=" << y << endl;
	system("pause");
	return 0;
}