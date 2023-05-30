class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        //문자열의 길이를 알아본다.
        int len1 = word1.length(); 
        int len2 = word2.length();
        int i = 0;

        // 두 문자열 중 어느 하나라도 남아있을 때 까지 반복한다.
        while(i < len1 || i < len2){
            // word1의 문자를 추가
            if(i < len1)
                merged += word1[i];

            // word2의 문자를 추가 
            if(i < len2)
                merged += word2[i];

            i++;
        }
        return merged;
    }
};