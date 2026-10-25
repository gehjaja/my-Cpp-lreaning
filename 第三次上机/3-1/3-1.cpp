#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	for (int i = 1;i <= 1000;i++)
	{
		int a = i;
		while (a % 5==0)//找10，10=2×5，2的倍数的多于5的个数，所以只需要找5的倍数的个数
		{
			a/=5;
			n++;
		}
	}
	cout << n << endl;
	system("pause");
	return 0;
}