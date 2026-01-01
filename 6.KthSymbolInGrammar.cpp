#include<stdio.h>
#include<iostream> 
#include<string>

using namespace std; 

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 || k==1) {
            return 0;
        }
        std::string s = std::to_string(n);
        int length = pow(2, n-1);
        if (k <= length/2) {
            return kthGrammar(n-1, k);
        }
        else {
            return !kthGrammar(n-1, k-length/2);
        }
    }
};

int main() {
  Solution solution;
  int val = solution.kthGrammar(30, 434991989);
  cout << val << endl;
}