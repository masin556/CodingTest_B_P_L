#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(char w : str){
        cout << w << endl;
    }
    //for(int i = 0; i < str.size(); i++)
    //{
    //   cout << str[i] << endl;
    //}
    return 0;
}