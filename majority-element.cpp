class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        //implemented using moore's voting algorithm
        int majorityElement = nums[0];
        int count = 0;
        for(auto &number: nums){
            if(count == 0){
                majorityElement = number;
            }
            if(number == majorityElement){
                count++;
            }else{
                count--;
            }
        }
        return majorityElement;
    }
};