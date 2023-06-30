#include<iostream>
#include<vector>
#include<algorithm>
#pragma region ������ ���� ����3 ����
/*
���� ����
���� �迭 arr�� 2���� ���� �迭 queries�� �־����ϴ�. queries�� ���Ҵ� ���� �ϳ��� query�� ��Ÿ����, [i, j] ���Դϴ�.
�� query���� ������� arr[i]�� ���� arr[j]�� ���� ���� �ٲߴϴ�.
�� ��Ģ�� ���� queries�� ó���� ������ arr�� return �ϴ� solution �Լ��� �ϼ��� �ּ���.

���ѻ���
1 �� arr�� ���� �� 1,000
0 �� arr�� ���� �� 1,000,000
1 �� queries�� ���� �� 1,000
0 �� i < j < arr�� ����

����� ��
arr	queries	result
[0, 1, 2, 3, 4]	[[0, 3],[1, 2],[1, 4]]	[3, 4, 1, 0, 2]

����� �� ����
����� �� #1

�� ������ ���� arr�� ������ ���� ���մϴ�.
arr
[0, 1, 2, 3, 4]
[3, 1, 2, 0, 4]
[3, 2, 1, 0, 4]
[3, 4, 1, 0, 2]
���� [3, 4, 1, 0, 2]�� return �մϴ�.
*/

#pragma endregion
using namespace std;

vector<int> solution(vector<int>, vector<vector<int>>);

int main()
{
	int arrSize;
	cin >> arrSize;

	vector<int> arr(arrSize);
	for(int i = 0; i < arrSize; i++)
	{
		cin >> arr[i];
	}

	int queryCount;
	cin >> queryCount;

	vector<vector<int>> queries(queryCount, vector<int>(2));
	for(int i = 0; i < queryCount; i++)
	{
		cin >> queries[i][0] >> queries[i][1];
	}

	vector<int> result = solution(arr, queries);

	for (int num : result)
	{
		cout << num << "";
	}
	cout << endl;
	return 0;
}


vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
	
	for(vector<int>& q : queries)
	{
		swap(arr[q[0]], arr[q[1]]);
	}
	return arr;
}