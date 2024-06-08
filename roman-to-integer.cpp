const map<char, int> romanMap = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};

class Solution {
public:
    int romanToInt(string s) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int result = 0;
        for(int i = 0; i < s.size(); i++){
            if(i + 1 < s.size() && romanMap.at(s[i]) < romanMap.at(s[i + 1])){
                result -= romanMap.at(s[i]);
            }else{
                result += romanMap.at(s[i]);
            }
        }
        return result;
    }
};