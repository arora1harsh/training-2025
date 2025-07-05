#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int findSingle(vector<int> &arr) {
        int single=0;
        for(int i : arr){
            single^=i;
        }
        return single;
    }
};