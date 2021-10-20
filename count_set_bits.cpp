#include <iostream>
using namespace std;

int count(int n)
{
    int c = 0;
    while (n)
    {
        c++;
        n &= (n - 1);
    }
    return c;
}

int main()
{

    int n;
    cout << "Enter your number: ";
    cin >> n;

    // For builtin popcount
    // cout << __builtin_popcount(n);

    cout << count(n); // manual

    return 0;
}