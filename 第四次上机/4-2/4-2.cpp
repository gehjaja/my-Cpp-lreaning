#include <iostream>
#include <ctime>
using namespace std;

bool mydif(int a[], int b[]);   

int main()
{
    srand (time(NULL));
    int n, i, j;
    int a[10] = { 0 };  
    int b[10] = { 0 };   

    cout << "请输入希望生成的次数：";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        do {
            
            for (j = 0; j < 10; j++)
            {
                int v, dup;
                do {
                    v = rand() % 10 + 1;         
                    dup = 0;
                    for (int k = 0; k < j; k++)   
                        if (b[k] == v)
                        {
                            dup = 1;
                            break;
                        }
                } while (dup);                   
                b[j] = v;
            }
        } while (!mydif(a, b));                  

        cout << "第" << i << "次：";
        for (j = 0; j < 10; j++)
        {
            cout << b[j] << " ";
            a[j] = b[j];                          
        }
        cout << endl;
    }

    system("pause");
    return 0;
}

bool mydif(int a[], int b[])
{
    for (int i = 0; i < 10; i++)
        if (a[i] != b[i])
            return true;      
    return false;             
}