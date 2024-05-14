#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << "_" << " ";
            space--;
        }
        int col = 1;
        while (col <= i)
        {
            cout << "*" << " ";
            col = col + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}