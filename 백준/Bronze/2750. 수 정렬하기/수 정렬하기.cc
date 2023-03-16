#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int arr[1000];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	//입력 받은 정렬
	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}