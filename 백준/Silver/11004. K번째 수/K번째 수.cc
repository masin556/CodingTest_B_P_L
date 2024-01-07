#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void fn_K(vector<int> a) {


}
    int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    cout << a[k - 1] << " ";

	return 0;
}