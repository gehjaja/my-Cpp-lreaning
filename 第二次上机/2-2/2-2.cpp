/*输出111^111个、十、百位*/
#include<iostream>
using namespace std;
int main()
{
	int x{ 1 };
	for(int i = 1;i <= 111;i++)
		x = (x * 111) % 1000;//不受更高位影响
	int a, b;
	a = x % 100 / 10;
	b = x % 1000 / 100;
	cout << "111的111次方个位：1  十位为："<<a << "  百位为：" << b << endl;//1易得
	system("pause");
	return 1;
}