#include<iostream>
#include<stack>
#include<vector> 

using namespace std;

void insert(stack<int>& s, int temp) { 
  if(s.size() == 0) {
    s.push(temp);
    return;
  }
  int n = s.top();
  s.pop();
  insert(s, temp);
  s.push(n);
}

void reverse(stack<int>& s) {
  if (s.size() == 1) {
    return;
  }
  int temp = s.top();
  s.pop();
  reverse(s);
  insert(s, temp);
}
int main() {
  stack<int> s;
  s.push(1);
  s.push(1);
  s.push(0);
  s.push(0);
  s.push(5);
  s.push(3);
  while(!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << "\n" << endl;

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(6);

  reverse(s);
  while(!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  return 0;
}
