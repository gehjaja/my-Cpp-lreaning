#include <iostream>
using namespace std;
bool huiwen(unsigned n);
int main()
{
    unsigned n;
	for(n=1000;n<=2000;n++)
		if(huiwen(n))
			cout<<n<<endl;
	system("pause");
	return 0;
}
bool huiwen(unsigned n)
{
	unsigned fanzhuan{ 0 },yuan=n,qushu;
	do 
	{
		qushu = n % 10;
		fanzhuan = qushu + fanzhuan * 10;
		n /= 10;
	} while (n >0);
	if (fanzhuan == yuan)
		return true;
	else
		return false;
}
