#include<iostream>
using namespace std;
int main() {
	int a,b;
	cout << "商品价格：";
	cin >> a;
	cout << "实收金额：";
	cin >> b;
	int c = b - a;
	int _100, _50, _20, _10, _5, _1;
	_100 = c / 100;
	_50 = (c % 100 / 50);
	_20 = (c % 50 / 20);
	_10 = (c % 50 % 20 / 10);
	_5 = (c % 10 / 5);
	_1 = (c % 5);
	cout << "找零：" << c << "元\n";
	cout << "100元：" << _100 << "张\n";
	cout << "50元：" << _50 << "张\n";
	cout << "20元：" << _20 << "张\n";
	cout << "10元：" << _10 << "张\n";
	cout << "5元：" << _5 << "张\n";
	cout << "1元：" << _1 << "张\n";
	system("pause");
	return 0;
}