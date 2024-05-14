#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    char t = 'A';

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {

            cout << t << " ";
            j++;
        }
        t++;
        cout << endl;
        i++;
    }
    return 0;
}
