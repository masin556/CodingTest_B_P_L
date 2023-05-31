#include <string>
using namespace std;

int solution(int a, int b) {
    return max(stoi(to_string(a)+to_string(b)),stoi(to_string(b)+to_string(a)));
}
// max로 둘중 가장 큰 값을 출력하게 하면 된다. to_string으로 정수를 문자열 처리후 더해준다
// 이후 stoi함수로 정수로 바꿔줘 max가 가장 큰 정수 값을 리턴하게 된다. 
