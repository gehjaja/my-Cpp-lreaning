#include<iostream>
using namespace std;
int search(char s[], char c);
int main()
{
	char s[100], c;
	int n;
	cout << "输入一个不超过100个字符的字符串:";
	cin.getline(s, 100);
	cout << "输入一个字符:";
	cin >> c;
	n = search(s, c);
	if (n > 0)
		cout << "字符 '" << c << "' 在字符串中第一次出现的位置是: " << n << endl;
	else
		cout << "未找到" << endl;
	system("pause");
	return 0;
}
int search(char s[], char c)
{
	for(int i=0;s[i]!='\0';i++)
		if (s[i] == c)
			return i+1;
	return 0;
}
