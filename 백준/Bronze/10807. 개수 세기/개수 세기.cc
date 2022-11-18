#include <iostream>
using namespace std;

int main(){
  int N,V;
  int a[100];
  int count = 0;
  cin >> N;

  for(int i =0; i < N; i++){
    cin >> a[i];
  }
  cin >> V;

  for(int j=0; j< N; j++){
    if(a[j] == V)
      count++;
  }
  cout << count;

  return 0;
}