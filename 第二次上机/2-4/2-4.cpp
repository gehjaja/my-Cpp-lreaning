/*计算母牛数*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	unsigned long long  f1=1,f2 =0, f3 = 0, f4more = 0;/*fi为出生第i个年头的母牛数量*/
	cout << "Enter year: ";
	cin >> n;
	if (n > 0)
		for (int i = 1; i <= n; i++)
		{
			if (i == 1)cout << f1 << " ";
			else
			{
				f4more += f3;
				f3 = f2;
				f2 = f1;
				f1 = f4more;
				cout << f1+f2+f3+f4more << " ";
			}
		}
	else cout << "error";
	system("pause");
	return 0;
}
