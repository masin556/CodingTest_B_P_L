#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int n;
    cin >> s >> n;
    cout << s[n - 1] << endl;
    return 0;
}