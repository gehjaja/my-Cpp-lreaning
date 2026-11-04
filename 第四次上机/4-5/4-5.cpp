#include<iostream>
using namespace std;
void spiral(int a[10][10],int n,int b,int c) 
{
	int D_hang[4] = { 0,1,0,-1 },D_lie[4] = { -1,0,1,0 };
	int i, j, k{1},d{(1+b)%4},bu{0};
	switch (b)
	{
	case 0: i = 0;		j = 0;	    break;
	case 1: i = n - 1;	j = 0;	    break;
	case 2: i = n - 1;	j = n - 1;	break;
	default:i = 0;		j = n - 1;	break;
	}
	if (c == 1)
	{
		bu = 2;
		d = (d + c) % 4;
	}
	for (k;k < n * n + 1;k++)
	{
		a[i][j] = k;
		int nr= i + D_hang[d], nc = j + D_lie[d];
		if (nr < 0 || nr >= n || nc < 0 || nc >= n || a[nr][nc] != 0)
		{
			d= (d + 1+bu) % 4;
			nr = i + D_hang[d];
			nc = j + D_lie[d];
			if (nr < 0 || nr >= n || nc < 0 || nc >= n || a[nr][nc] != 0)
				break;
		}
		i = nr;
		j = nc;
	}
}
int main()
{
	int a[10][10]{}, i, j, b, c, n;
	do {
		cout << "输入螺旋边长（1~10）:";
		cin >> n;
		if (n < 1 || n > 10)
			cout << "边长必须在 1~10 之间，请重新输入。" << endl;
	} while (n < 1 || n > 10);
	do {
		cout << "请输入起始位置和旋转方向：" << endl;
		cout << "（0：左上角，1：左下角，2：右下角，3：右上角）  （0：逆时针，1：顺时针）" << endl;
		cin >> b >> c;
		if (b < 0 || b > 3 || c < 0 || c > 1)
			cout << "输入无效，请重新输入。" << endl;
	} while (b < 0 || b > 3 || c < 0 || c > 1);
	spiral(a, n, b, c);
	cout << "螺旋为：" << endl;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}