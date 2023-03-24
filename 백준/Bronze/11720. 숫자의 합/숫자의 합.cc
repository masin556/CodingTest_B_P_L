#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N = 0;
    string numbers;
    cin >> N >> numbers;
    
    int sum = 0;
    for(int i = 0; i < numbers.length(); i++)
    {
        sum += numbers[i] - '0';
    }
    cout << sum << "\n";
    return 0;
}