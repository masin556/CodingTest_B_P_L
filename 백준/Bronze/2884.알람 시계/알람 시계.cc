#include <iostream>
using namespace std;

int main() {
	int hour, min; //변수선언
	cin >> hour >> min; // 시간, 분 입력

	if (min < 45) { // 45분 보다 작을경우 
		min = min + 15; // 입력한 분에 + 15를 해준다
		hour = hour - 1; // 시간 값에서 -1을 빼고 
		if (hour < 0) //만약 위의 내용이 들어오고나서 hour이 0보다 작다면
			hour = 23; //hour에 23 
	}
	else {
		min = min - 45;
	}

	cout << hour << " " << min << endl;
}