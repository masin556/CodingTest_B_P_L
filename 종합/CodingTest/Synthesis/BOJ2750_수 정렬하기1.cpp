#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	/*이 부분은 현재 인덱스 j 위치에 있는 원소와 그 다음 위치에 있는 원소를 비교하여,
	만약 현재 원소가 다음 원소보다 크다면 위치를 바꾸는 작업을 하는 부분입니다.
	이렇게 하면 큰 원소가 뒤로 이동하게 되면서 정렬을 진행하게 됩니다.
	위 코드에서 사용된 temp 변수는 두 원소의 위치를 바꿀 때 임시로 값을 저장하는 역할을 합니다.
	먼저 현재 원소의 값을 temp에 저장한 다음에, 현재 원소의 위치에 다음 원소의 값을 대입하고,
	다음 원소의 위치에 temp에 저장된 값을 대입하는 것으로써 위치가 바뀐 원소들을 정렬하는 과정을 수행하게 됩니다.*/

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			//현재 배열 A값보다 한 칸 오른쪽 배열값이 더 작으면 두 수 위치 교체
			if (A[j] > A[j + 1]) // 현재 위치의 데이터 값보다 다음 값이 크다면 위치를 교체
			{
				//bubble sort
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << A[i] << endl;
	}

	return 0;
}