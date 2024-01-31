#include <iostream>
#include <algorithm>
using namespace std;

int rev (int* n)
{
    string str = to_string (*n);
    reverse (str.begin(), str.end());
    return atoi (str.c_str());
}

int main()
{
    int n, m, k;
    cin >> n >> m;

    k = max (rev (&n), rev (&m));

    cout << k << " ";
    return 0;
}