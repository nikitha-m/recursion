#include<iostream>
#include<vector> 

using namespace std;
class Solution {
  vector<vector<int> > v;
  public:
    vector<vector<int> > subsets(vector<int>& nums) {
      vector<int> op;
      generatePowerSet(nums, op);
      return v;
    }
    void generatePowerSet(vector<int>& nums, vector<int>& op) {
      if(nums.size() == 0) {
        v.push_back(op);
        return;
      }
      vector<int> op1 = op;
      vector<int> op2 = op;

      op1.push_back(nums[0]);
      int temp = nums[0];
      nums.erase(nums.begin());
      generatePowerSet(nums, op1);
      generatePowerSet(nums, op2);
      nums.push_back(temp);
      return;
    }
};

int main() {
  vector<int> nums;
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(3);
  
  Solution s;
  vector<vector<int> > res;
  res = s.subsets(nums);
  for(vector<int> a : res) {
  for(int num : a) {
    cout << num << " ";
  }
  cout << endl;
}
  return 0;
}