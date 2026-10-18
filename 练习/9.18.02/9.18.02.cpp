#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "ENter anumber:";
	cin >> n;
	long long sum = 0;
	for(int i=0;i<=n;i++)
	{
		sum += i;
	}
	cout << sum << endl;
	system("pause");
		return 0;

}
