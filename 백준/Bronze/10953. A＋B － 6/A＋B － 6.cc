#include <iostream>
#include <vector>
#define STR ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int main()
{
    STR;
    int n;
    char com;
    cin >> n;

    vector<pair<int, int>> points(n);
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> com >> points[i].second;
        a[i] = points[i].first + points[i].second;
    }

    for (const auto &p : a) {
        cout << p << endl;
    }

    return 0;
}