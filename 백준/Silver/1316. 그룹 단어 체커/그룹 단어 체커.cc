#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool bisGroup(const string& word)
{
    vector<bool> bVisited(26, false);
    
    for(int i = 0; i < word.length(); i++)
    {
        char curChar = word[i];
        
        if (bVisited[curChar - 'a'/*97*/] && word[i - 1] != curChar )
        {
            return false;
        }
        
        bVisited[curChar - 'a'] = true; //현재 문자를 방문했다면
    }
    return true; //그룹 단어
}

int main()
{
    int n;
    cin >> n;
    
    int cnt = 0;
    
    for (int i=0; i < n; i++)
    {
        string word;
        cin >> word;
        
        if (bisGroup(word))
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}