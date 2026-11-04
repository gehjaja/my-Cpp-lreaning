#include<iostream>
using namespace std;
void myorder(int a[], int n);
int main()
{
	int a[10]{};
	cout << "Enter 10 numbers: ";
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >> a[9];
	myorder(a, 10);
	cout << "排序后：" << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << " " << a[6] << " " << a[7] << " " << a[8] << " " << a[9] << endl;
	system("pause");
	return 0;
}
void myorder(int a[], int n)
{
	int b[10]{}, i, j, linshi;
	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
		if (i != 0)
			for (j = i;j >= 0;j--)
				if(b[j]<b[j-1])
				{
					linshi = b[j];
					b[j] = b[j - 1];
					b[j - 1] = linshi;
				}
	}
	for (i = 0; i < n; i++)
		a[i] = b[i];
}