#include<iostream>
#define PI 3.14159
using namespace std;
int main()
{
	double s,radius;
	cout << "Enter radius: ";
	cin >> radius;
	s = PI * radius * radius;
	cout<<"S="<<s<<endl;
	cout << '/n';
	system("pause");

	return 0;
}