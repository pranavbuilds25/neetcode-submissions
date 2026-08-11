class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if (n != m) return false;
        unordered_map<char,int>s1;
        unordered_map<char,int>t1;
        for (int i = 0; i < n; i++){
            s1[s[i]] += 1;
        }
        for (int i = 0; i < m; i++){
            t1[t[i]] += 1;
        }
        return s1 == t1;
    }
};
