#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout << "Please enter the number of integers:";
	cin >> n;
	cout << "Please enter " << n << " integers:";
	vector<int>a(n);
	for (int i= 0; i < n; i++) {
		cin >> a[i];
	}
	int Max = a[0],pos=0;
	for (int i = 1;i < n;i++) {
		if(a[i] >Max){Max=a[i];pos = i;}

	}
	cout<<Max<<"   the"<<pos+1<< endl;
	system("pause");
	return 0;
}