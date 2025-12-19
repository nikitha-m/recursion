#include<iostream>
#include<stack>
#include<cmath>

using namespace std;

void delete_mid(stack<int>& s, int n) {
  if(n == 0) {
    s.pop();
    return;
  }
  int top = s.top();
  s.pop();
  delete_mid(s, n-1); 
  s.push(top);
  return;
}

int main() {
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

  int n = floor(s.size()/2);
  delete_mid(s, n);

  while(!s.empty()) {
    std::cout << s.top() << " ";
    s.pop();
  }
  std::cout << "\n";
  return 0;
}