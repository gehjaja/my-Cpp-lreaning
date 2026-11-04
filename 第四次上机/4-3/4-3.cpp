#include<iostream>
using namespace std;
int main()
{
	int a[10]{}, b[10]{}, c[10]{}, i, j, t;
	cout << "请输入10个正整数：";
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >> a[9];
	for (i = 0;i < 10;i++)
	{
		c[i] = a[i];
		b[i] = 1;
		for (j = i + 1;j < 10;j++)
			if (a[i] != 0)
				if (a[j] == a[i])
				{
					b[i]++;
					a[j] = 0;
				}
	}

	for (i = 0;i < 10;i++)
		if (c[i] != 0)
		{
			for (j = 0;j < b[i];j++)
			{
				cout << c[i] << " ";
			}
		}
	system("pause");
	return 0;
}