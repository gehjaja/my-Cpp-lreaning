#include<iostream>
using namespace std;
int main(void)
{
	int iScore = 0;
	cout << "Please Enter Score:";
	cin >> iScore;
	if (iScore >= 90)
		cout << "A";
	else if (iScore >= 80)
		cout << "B";
	else if (iScore >= 70)
		cout << "C";
	else if (iScore >= 60)
		cout << "D";
	else
		cout << "E";
	system("pause");
	return 0;
}