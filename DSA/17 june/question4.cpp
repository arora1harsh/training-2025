#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for (int i:nums){
            sum += i;
        }
        int n=nums.size();
        int s=(n*(n+1))/2;
        return s-sum;
    }
};