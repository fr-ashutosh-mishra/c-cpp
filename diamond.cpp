#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < s; k++)
        {
            cout << "*";
        }

        cout << endl;
        s += 2;
    }

    s -= 4;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < s; k++)
        {
            cout << "*";
        }

        cout << endl;
        s -= 2;
    }

    return 0;
}