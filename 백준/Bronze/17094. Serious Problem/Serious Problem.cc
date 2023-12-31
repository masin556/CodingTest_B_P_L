#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s; // 문자열 길이
    cin >> s;

    string str;
    cin >> str;

    int count_2 = 0, count_e = 0;

    for (int i = 0; i < s; i++) {
        if (str[i] == '2') {
            count_2++;
        }
        else if (str[i] == 'e') {
            count_e++;
        }
    }

    if (count_2 > count_e) {
        cout << '2' << '\n';
    }
    else if (count_2 < count_e) {
        cout << 'e' << '\n';
    }
    else {
        cout << "yee" << '\n';
    }

    return 0;
}