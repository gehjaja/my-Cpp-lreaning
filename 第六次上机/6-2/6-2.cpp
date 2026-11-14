#include<iostream>
using namespace std;
int mylen(char* p)
{
    int len{ 0 };
    while (p[len] != '\0')
        len++;
    return len;
}
void mysort(char *p[], int n)
{
    char* t;
    for(int i=0;i<n-1;i++)
        for (int j = i+1;j < n;j++)
            if (mylen(p[i]) >= mylen(p[j]))
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
}
int main()
{
    char ch[8][11]{ 0 };
    char* p[8]{ 0 };
    int i{ 0 }, n = 0;
    cout<<"输入不超过7个字符串,每个字符串不超过9个字符"<<endl;
    cout<<"以回车符分割输入,输入0并回车表示结束输入"<<endl;
    for (i = 0; i < 7; i++)
    {
        cin.getline(ch[i], 10);
        if (ch[i][0] == '0' && ch[i][1] == '\0')
            break;
        if (ch[i][0] == '\0')
        {
            i--; 
            continue;
        }
        p[n] = ch[i];
        n++;
    }
    mysort(p, n);
    cout << "共输入以下字符串（排序后）:" << endl;
    for(i=0; i<n; i++)
        cout<<p[i]<<endl;
    system("pause");
    return 0;
}
