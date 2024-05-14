#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {
            int t = n - j + 1;
            cout << t;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
