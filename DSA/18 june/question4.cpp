#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        for(int i : nums){
            if(i==0) zero++;
            else if(i==1) one++;
            else if(i==2) two++;
        }
        int index = 0;

        for (int i = 0; i < zero; i++) nums[index++] = 0;
        for (int i = 0; i < one; i++) nums[index++] = 1;
        for (int i = 0; i < two; i++) nums[index++] = 2;
    }
};