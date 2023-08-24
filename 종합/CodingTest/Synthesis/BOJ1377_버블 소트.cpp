#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N;
	cin >> N;

	vector<pair<int,int>> A(N);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i].first; //�迭 A ����
		A[i].second = i;
	}

	//�迭 A����
	sort(A.begin(), A.end()); //�迭 A���� �ð� ���⵵: O(nlogn)
	int Max = 0;

	for (int i = 0; i < N; i++)
	{
		//���� �� index - ���� �� index�� ����� �� �� �ִ��� ã�� �����Ѵ�.
		if (Max < A[i].second - i) {
			Max = A[i].second - i;
		}
	}
	cout << Max + 1;
}