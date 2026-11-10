#include<iostream>
using namespace std;
void str_insert(char s1[], int n, char s2[]);
int mystrlen(char s[])
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}
int main()
{
	char s1[100]{}, s2[50]{};
	int n;
	cout << "输入字符串s1:"<<endl;
	cin.getline(s1, 100);
	cout << "输入字符串s2:"<<endl;
	cin.getline(s2, 50);
	cout << "输入插入位置n(1始):"<<endl;
	cin >> n;
	str_insert(s1, n, s2);
	cout << s1 << endl;
	system("pause");
	return 0;
}
void str_insert(char s1[], int n, char s2[])
{
	int i{ 0 }, j = mystrlen(s2), k{ 0 };
	if (n <= mystrlen(s1))
	{
		for (i = mystrlen(s1)+1; i >= n; i--)
		{
			s1[i + j - 1] = s1[i - 1];
		}
		for (i = n - 1; i < n + j - 1; i++)
		{
			s1[i] = s2[k];
			k++;
		}
	}
	else
	{
		for (i = mystrlen(s1);i < mystrlen(s1)+j;i++)
		{
			s1[i] = s2[k];
			k++;
		}
	}
}