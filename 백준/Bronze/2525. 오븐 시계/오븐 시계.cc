#include <iostream>
using namespace std;

void count(int *hour, int *min, int *addmin)
{
    *min += *addmin;
    *hour += *min / 60;
    *min %= 60;
    *hour %= 24;
}

int main()
{
    int hour, min, addmin;
    
    cin >> hour >> min >> addmin;
    count(&hour, &min, &addmin);
    
    cout << hour << " " << min << endl;
    
    return 0;
}