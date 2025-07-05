#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int price=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(price>prices[i]){
                price=prices[i];
            }
            else if(prices[i]-price>profit){
                profit=prices[i]-price;
            }
        }
        return profit;
    }
};