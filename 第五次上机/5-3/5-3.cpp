#include<iostream>
using namespace std;
int main()
{
	char a[101];
	int n{ 1 },A{0}, B{0}, Amax{0}, Bmax{0}, i, max;
	do {
		cout << "输入一个全部由字符A和字符B组成的字符串" << endl;
		cin.getline(a, 100);
		for ( i = 0; i < 100; i++)
		{
			if (a[i] == '\0')
			{
				n = 0;
				break;
			}
			if (a[i] != 'A' && a[i] != 'B')
			{
				cout << "输入的字符串不符合要求,请重新输入" << endl;
				break;
			}
		}
	} while (n);
	for(i=0;a[i]!='\0';)
	{
		if (a[i] == 'A')
		{
			A = 0;
			while (a[i] != '\0' && a[i] == 'A')
			{
				A++;
				i++;
			}
		}
		if (a[i] == 'B')
		{
			B = 0;
			while (a[i] != '\0' && a[i] == 'B')
			{
				B++;
				i++;
			}
		}
		Amax=A>Amax?A:Amax;
		Bmax=B>Bmax?B:Bmax;
	}
	max = Amax > Bmax ? Amax : Bmax;
	cout  << max << endl;
	system("pause");	
	return 0;
}