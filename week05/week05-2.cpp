///week05-2.cpp 學習計畫Built-in Function 第二題
///LeetCode 709. To Lower Case 大寫變小寫
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){
            s[i] = tolower(s[i]);
        }
        return s;
    }
};
