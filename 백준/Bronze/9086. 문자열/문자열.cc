#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n; // string repeat Number
    string str;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> str;
        cout << str[0] << str[str.size() - 1] << endl;
    }
   
    return 0;
}