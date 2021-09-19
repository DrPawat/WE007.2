#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int user;
    int temp = 0;
    string ans[4];
    int mod = 10;
    int n[5];
    string r1[] = { "0","I","II","III","VI","V","VI","VII","VIII","IX" };
    string r2[] = { "x","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
    string r3[] = { "C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
    string r4[] = { "M","MM","MMM","MMMM" };

    cout << "Enter Number" << endl;
    cin >> user;

    for (int i = 0; i < 4; i++)
    {
        num = user % mod;
        user = user - num;
        n[3 - i] = num;
        mod = mod * 10;
    }

    for (int i = 0; i < 4; i++)
    {
        if (n[i] > 999)
        {
            temp = n[i] / 1000;
            ans[i] = r4[temp - 1];
        }
        if (n[i] > 99 && n[i] < 1000)
        {
            temp = n[i] / 100;
            ans[i] = r3[temp - 1];
        }
        if (n[i] > 9 && n[i] < 100)
        {
            temp = n[i] / 10;
            ans[i] = r2[temp - 1];
        }
        if (n[i] > 0 && n[i] < 10)
        {
            temp = n[i];
            ans[i] = r1[temp];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << ans[i];
    }
    return 0;
}