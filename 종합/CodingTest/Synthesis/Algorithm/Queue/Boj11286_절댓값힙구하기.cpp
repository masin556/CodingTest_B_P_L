/*시간 복잡도 : O(nlogn)
절댓값 정렬을 위해 우선순위 큐로 정렬기준을 직접 정의
※우선 순위 큐를 그냥 선언하여 사용하기는 쉽지만. 정렬 기준을 새로 적용하여 선언하는 방법은 모르는 경우가 많다.
우선순위 큐의 정렬 기준을 새로 적용하는 방법 */
#include<iostream>
#include<queue>
using namespace std;

struct compare {
	bool operator()(int o1, int o2) {
		int first_abs = abs(o1);
		int second_abs = abs(o2);
		if (first_abs == second_abs) {
			return o1 > o2; //절댓값이 같을 때 음수우선 정렬
		}
		else {
			return first_abs > second_abs;  //절댓값을 기준으로 정렬
		}
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//우선순위 큐 선언 방식 <자료형, 구현체, 비교 함수명>
	priority_queue<int, vector<int>, compare> MyQueue;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int request;
		cin >> request;

		if (request == 0) {
			if (MyQueue.empty()) {
				cout << "0\n";
			}
			else {
				cout << MyQueue.top() << "\n";
				MyQueue.pop();
			}
		}
		else {
			MyQueue.push(request);
		}
	}
}