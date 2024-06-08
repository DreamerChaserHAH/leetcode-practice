class Solution {
public:
    int strStr(string haystack, string needle) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        //int index = haystack.find(needle); <- we could technically finish the entire thing with this but
        // we want to implement the find function ourselves
        map<int, int> needleIndexMap = map<int, int>(); //start index and current needle index
        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == needle[0]){
                needleIndexMap[i] = 0;
            }

            std::vector<int> keysToErase;
            for(auto& element: needleIndexMap){
                if(haystack[i] == needle[element.second]){
                    element.second++;
                    if(element.second == needle.size()){
                        return element.first;
                    }
                }else{
                    keysToErase.push_back(element.first);
                }
            }

            for(int key: keysToErase){
                needleIndexMap.erase(key);
            }
        }
        return -1;
    }
};