#include <iostream>
using namespace std;

int fibbo(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fibbo(n - 1);
}

int main()
{
    cout << fibbo(5) << endl;
    return 0;
}
