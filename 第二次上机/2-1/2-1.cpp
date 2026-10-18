/*九九乘法表*/
#include<iostream>
using namespace std;
int main()
{
	int a{ 0 };
	for (int i = 1;i <= 9;i++)
		{
			for (int k = 1;k <= i;k++)
			{
				a = i * k;
				cout << k << 'x' << i << '=' << a << "  ";
			}
			cout << endl;
		}
		system("pause");
		return 0;
}
