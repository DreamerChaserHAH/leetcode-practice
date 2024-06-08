#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a = {7, 6, 4, 3, 1};
    int lowestPoint = a[0];
    int maxProfit = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i] < lowestPoint){
            lowestPoint = a[i];
        }else{
            maxProfit = max(maxProfit, a[i] - lowestPoint);
        }
    }
    cout << maxProfit << endl;
    return 0;
}