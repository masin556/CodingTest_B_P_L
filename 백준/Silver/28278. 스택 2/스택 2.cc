#include <iostream>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  stack<int> st;
  while (n--) {
    int cmd, x;
    cin >> cmd;

    switch (cmd) {
      case 1:
        cin >> x;
        st.push(x);
        break;
      case 2:
        cout << (st.empty() ? -1 : st.top()) << '\n';
        if (!st.empty()) st.pop();
        break;
      case 3:
        cout << st.size() << '\n';
        break;
      case 4:
        cout << st.empty() << '\n';
        break;
      case 5:
        cout << (st.empty() ? -1 : st.top()) << '\n';
        break;
    }
  }

  return 0;
}