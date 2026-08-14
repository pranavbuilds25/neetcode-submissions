class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (auto str:strs){
            encoded += to_string(str.size());
            encoded += '#';
            encoded += str;
        }
        cout<<encoded<<endl;
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i = 0;
        while (i < s.size()){
           int j = s.find('#',i);
           int len = stoi(s.substr(i,j-i));
           ans.push_back(s.substr(j+1,len));
           i = j + 1 + len; 
        }
        return ans;
    }
};
