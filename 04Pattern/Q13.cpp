#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char t = 'A' + i + j - 2;
            cout << t << " ";
            j++;
        }

        cout << endl;
        i++;
    }
    return 0;
}
