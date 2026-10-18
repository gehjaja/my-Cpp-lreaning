/*找出1000以内的完全数*/
#include<iostream>
using namespace std;
int main()
{
	int a{ 1 }, sum{ 0 };
	for (int i = 2;i <= 1000;i++)
	{
		a = 1, sum = 0;// 初始化a和sum
		while (a < i)
		{
			if (i % a == 0)// 判断a是否为i的因数
			{
				sum += a;// 将因数累加到sum中
			}
			a++;// 继续判断下一个数
			
		}
		if (sum == i)// 判断sum是否等于i
			cout << i << "  ";// 输出完全数
	}
	system("pause");
	return 0;
}