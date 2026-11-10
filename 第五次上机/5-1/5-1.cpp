#include<iostream>
#include<ctime>
using namespace std;
int mark(int a[8][8],int b[8][8]);
int main()//取数
{
	srand((unsigned)time(NULL));
	int a[8][8]{}, i{ 0 }, j{ 0 }, k = { 0 }, n{ 0 };
	int b[8][8]{};
	while (k < 20)
	{
		i= rand() % 8;
		j= rand() % 8;
		if (a[i][j] == 0)
		{
			a[i][j] = 1;
			k++;
		}
	}
	cout<< "随机生成的数组为：" << endl;
	for ( i = 0; i < 8; i++)
	{
		for ( j = 0; j < 8; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	n=mark(a,b);
	cout << "构成相邻关系的个数：" << n << endl;
	cout << "位置如下：" << endl;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			cout << (b[i][j] == 1 ? "■ " : "□ ");
		cout << endl;
	}
	system("pause");
	return 0;
}
int mark(int a[8][8],int b[8][8])
{
	int i{ 0 }, j{ 0 }, k{ 0 }, t{ 0 }, n{ 0 };
	for (i = 0;i < 8;i++)
	{
		j = 0;
		while (j < 8)
		{
				if (a[i][j] == 1)
				{
					k = j;
					while (k < 8 && a[i][k] == 1) 
						k++;
					if (k - j >= 3)
						for (t = j; t < k; t++) 
							b[i][t] = 1;
					j = k;
				}
				else j++;
		}
	}
	for (j = 0;j < 8;j++)
	{
		i = 0;
		while (i < 8)
		{
				if (a[i][j] == 1)
				{
					k = i;
					while (k < 8 && a[k][j] == 1) 
						k++;
					if (k - i >= 3)
						for (t = i; t < k; t++) 
							b[t][j] = 1;
					i = k;
				}
				else i++;
		}
	}
	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			if (b[i][j] == 1) n++;
	return n;
}