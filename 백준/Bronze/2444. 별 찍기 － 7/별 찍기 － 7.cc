#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n; 
    //위
    for(int i = 1; i <= n; i++)
    {
        //별 공백
        cout << string(n - i, ' ');
        cout << string(2 * i - 1, '*') << endl;
    }
    
    //아래
    for(int i = 1; i < n; i++)
    {
        cout << string(i, ' ');
        cout << string(2 * (n - i) - 1, '*') << endl;
    }
    return 0;
}