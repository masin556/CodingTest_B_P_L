#include <iostream>
using namespace std;

int main() {
    int arr[100]; 
    int result = 0; 
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    } 
    result += arr[2] + arr[4] + arr[9];
    cout << result;

    return 0;
}