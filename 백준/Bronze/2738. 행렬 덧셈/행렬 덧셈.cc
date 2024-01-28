#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    int arr[101][101], arr2[101][101];
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr2[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] + arr2[i][j] << " "; 
        }
        cout << "\n";
    }
    return 0;
}