#include <bits/stdc++.h>
using namespace std;
void print2(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= (2 * i + 1) / 2)
                ch++;
            else
                ch--;
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print(int n)

{
    int k = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= k; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
        k -= 2;
    }
}
int main()

{
    int n;
    cin >> n;
    print2(n);

    return 0;
}