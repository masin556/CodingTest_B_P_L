#include <iostream>

using namespace std;

int main()
{

    // game loop
    while (1) {
        string enemy1; // name of enemy 1
        cin >> enemy1; cin.ignore();
        int dist1; // distance to enemy 1
        cin >> dist1; cin.ignore();
        string enemy2; // name of enemy 2
        cin >> enemy2; cin.ignore();
        int dist2; // distance to enemy 2
        cin >> dist2; cin.ignore();

        /* 거리가 가까운 적부터 처치 할 수 있도록 dist 1이 enemy1 이니까.해당 dist1이 크다면 enemy*/
        if (dist1 < dist2) {
            cout << enemy1 << endl;
        }
        else {
            cout << enemy2 << endl;
        }
        // Enter the code here
    }
}