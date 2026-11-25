#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int n, total, i, j, t{0};
	cout << "请输入阶数：";
	cin >> n;
	total = n * n;
	int* p=new int[total];
	for (i = 0;i < total;i++)  *(p + i) = i + 1;
	srand((unsigned)time(NULL));
	for (i = total - 1;i > 0;i--)
	{
		t=*(p+i);
		j = rand() % (i + 1);
		*(p + i) = *(p + j);
		*(p + j) = t;
	}
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
			cout << *(p + n * i + j) << '\t';
		cout << endl;
	}
	delete[]p;
	p = nullptr;
	system("pause");
	return 0;
}