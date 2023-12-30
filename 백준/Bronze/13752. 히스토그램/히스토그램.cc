#include <iostream>
using namespace std;

int main()
{
    int n, k;
    string str = "="; // testcase
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;

        for (int j = 0; j < k; j++) {
            cout << str;
        }
        cout << '\n';
    }

    return 0;
}