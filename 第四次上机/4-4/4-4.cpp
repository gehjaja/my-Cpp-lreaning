#include<iostream>
using namespace std;
int main()
{
	int a[17][17],m ,n,i,j;
	cout << "输入一个不超过9的最大数:";
	cin >> n;
	a[n-1][n-1] = n;
	for (i = 0;i < 2*n-1;i++)
		for (j = 0;j < 2 * n-1;j++)
		{
			int d1 = i, d2 = j, d3 = 2 * n - 2 - i, d4 = 2 * n - 2 - j;
			m = d1;
			if (d2 < m)m = d2;
			if (d3 < m)m = d3;
			if (d4 < m)m = d4;
			a[i][j] = m + 1;
		}
	for (i = 0;i < 2 * n - 1;i++)
	{
		for (j = 0;j < 2 * n - 1;j++)
			cout<< a[i][j]<<" ";
		cout << endl;
	}
	system("pause");
	return 0;
}