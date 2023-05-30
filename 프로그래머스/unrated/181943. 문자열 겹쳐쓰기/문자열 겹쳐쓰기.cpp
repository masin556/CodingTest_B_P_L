#include<iostream>
#include<string>

using namespace std;

string solution(string my_string, string overwrite_string, int s);

int main()
{
	// 테스트 케이스 입력
	string my_string;
	string overwrite_string;
	int s;
    
    // 문자열 입력 getline 사용
	cout << "Enter my_string: ";
	getline(cin, my_string);

	cout << "Enter overwrite_string: ";
	getline(cin, overwrite_string);

	cout << "Enter s: ";
	cin >> s;
    //cin을 사용해서 정수값 또는 기타 숫자 값을 추출할 때 입력 버퍼에 개행문자가 남는다.getline 작업을 방해할 수 있다.
    cin.ignore(); // cin 버퍼 비우기 (입력버퍼 개행 문자'\n'를 버리기 위함)
    
    // 솔루션 함수 호출 or 아래 방법 
    //string answer = solution(my_string, overwrite_string, s);

    // 결과 출력
    //cout << "Result: " << answer << endl;
    cout << "Result: " << solution(my_string, overwrite_string, s); 
	
    return 0;
}

string solution(string my_string, string overwrite_string, int s)
{
	int overwrite_length = overwrite_string.length();

	string result = my_string;
	for (int i = 0; i < overwrite_length; i++) {
		result[s + i] = overwrite_string[i];
	}

	return result;
}