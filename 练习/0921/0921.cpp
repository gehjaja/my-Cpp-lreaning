#include<iostream>
using namespace std;
int main(){
	int n;
	cout << " 请输入计算至第几项：";
	cin >> n;
	if (n < 0) {
		cout << "error" << endl;
		return 0;
	}
	unsigned long long a = 0, b = 1, c = 0;

	for (int i = 1;i <= n;i++) {
	c = a + b;
		
	b=a;
	a = c;
	}
cout << c << endl;
return 0;

}