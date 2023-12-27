#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    stack<int> stack;

    for (int i = 0; i < n; i++)
    {
        int cmd, x;
        cin >> cmd;

        if (cmd == 1)
        {
            cin >> x;
            stack.push(x);
        }
        else if (cmd == 2)
        {
            cout << (stack.empty() ? -1 : stack.top()) << '\n';
            if (!stack.empty())
                stack.pop();
        }
        else if (cmd == 3)
        {
            cout << stack.size() << '\n';
        }
        else if (cmd == 4)
        {
            cout << stack.empty() << '\n';
        }
        else if (cmd == 5)
        {
            cout << (stack.empty() ? -1 : stack.top()) << '\n';
        }
    }

    return 0;
}