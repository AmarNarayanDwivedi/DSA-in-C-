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
        while (j <= i)
        {
            int t = i - j + 1;
            cout << t << " ";
            j++;
            t++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
