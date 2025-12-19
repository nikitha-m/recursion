#include<iostream>

using namespace std;

vector<int> insert(vector<int>& nums, int temp) {
  if (nums.size() == 0 || nums.back() <= temp) {
    nums.push_back(temp);
    return nums;
  }
  int n = nums.back();
  nums.pop_back();
  insert(nums, temp);
  nums.push_back(n);
  return nums;
}
vector<int> sort(vector<int>& nums) {
  if (nums.size() == 1) {
    return nums;
  }
  int temp = nums.back();
  nums.pop_back();
  sort(nums);
  insert(nums, temp);
  return nums;
}
int main() {
  std::vector<int> nums;
  nums.push_back(1);
  nums.push_back(1);
  nums.push_back(0);
  nums.push_back(0);
  nums.push_back(5);
  nums.push_back(3);

  sort(nums);
  for (int i=0; i<nums.size(); i++) {
    cout << nums[i] << endl;
  }
  return 0;
}