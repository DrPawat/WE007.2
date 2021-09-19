#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int user;
    int temp = 0;
    string ans[7];
    int mod = 10;
    int n[8];
    string r1[] = { "0","I","II","III","VI","V","VI","VII","VIII","IX" };
    string r2[] = { "X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
    string r3[] = { "C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
    string r4[] = { "M","MM","MMM","MV","V","VM","VMM","VMMM","MX"};
    string r5[] = { "X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
    string r6[] = { "C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
    string r7[] = { "M" };
    cout << "Enter Number" << endl;
    cin >> user;

    for (int i = 0; i < 7; i++)
    {
        num = user % mod;
        user = user - num;
        n[6 - i] = num;
        mod = mod * 10;
    }

    for (int i = 0; i < 7; i++)
    {
        if (n[i] > 99999 && n[i] < 1000000)
        {
            temp = n[i] / 100000;
            ans[i] = r6[temp - 1];
        }
        if (n[i] > 9999 && n[i] < 100000)
        {
            temp = n[i] / 10000;
            ans[i] = r5[temp - 1];
        }
        if (n[i] > 999 && n[i] < 10000)
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
    for (int i = 0; i < 7; i++)
    {
        cout << ans[i];
    }
    return 0;
}