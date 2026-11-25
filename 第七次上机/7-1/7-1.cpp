#include<iostream>
using namespace std;
int main()
{
	int n{ 0 }, m{ 0 }, i{ 0 }, left, id{ 0 }, out_num{ 0 };
	cout << "请输入人数：";
	cin >> n;
	cout << "请输入报数的倍数：";
	cin >> m;
	int* p = new int[n];
	for (i = 0;i < n;i++)
		*(p + i) = 1;
	left = n;
	cout << "开始报数：" << endl;
	while (left > 1)
	{
		if (*(p + id) == 1)
		{
			out_num++;
			if (out_num%m == 0)
			{
				left--;
				*(p + id) = 0;
				cout << "第" << id + 1 << "号出圈，报数：" << out_num << endl;
			}
		}
		id = (id + 1) % n;
	}
	for (int i = 0; i < n; i++)
		if (p[i] == 1) 
		{
			cout << "剩下的是第" << i + 1 << "号" << endl;
			break; 
		}
	delete[] p;
	p = nullptr;
	system("pause");
	return 0;
}