#include<iostream>
using namespace std;
int main()
{
	char ln[100]{}, sn[100]{};
	int i{ 0 }, j{ 0 }, n1{ 0 }, n2[100]{ 0 };
	cout << "输入长字符串" << endl;
	cin.getline(ln, 100);
	cout << "输入短字符串" << endl;
	cin.getline(sn, 100);
	for (i = 0;ln[i] != '\0';i++)
	{
		if (ln[i] == sn[0])
		{
			j = 0;
			while (ln[i + j] == sn[j] && sn[j] != '\0')j++;
			if (sn[j] == 0)
			{
				n2[n1] = i;
				n1++;
			}
		}
	}
	cout<< "短字符串在长字符串中出现的次数为：" << n1 << endl;
	cout<< "短字符串在长字符串中出现的位置为：" ;
	for(i=0;i < n1;i++)
		cout << n2[i]+1 << " ";
	cout<<endl;
	system("pause");
	return 0;
}