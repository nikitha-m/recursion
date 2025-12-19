#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void insert(stack<int>& s, int temp) {
  if (s.size() == 0 || temp >= s.top()) {
    s.push(temp);
    return;
  }
  int n = s.top();
  s.pop();
  insert(s, temp);
  s.push(n);
  return;
}

void sort(stack<int>& s) {
  if(s.size() == 1) {
    return;
  }
  int temp = s.top();
  s.pop();
  sort(s);
  insert(s, temp);
  return;
}

int main() {
  stack<int> s;
  vector<int> elements = {1, 1, 0, 0, 5, 3};

  for(int val : elements) {
    s.push(val);
  }
  sort(s);
  cout << "After sort" << endl;
  while(!s.empty()) {
    std::cout << s.top() << "\n";
    s.pop();
  }
  return 0;
}