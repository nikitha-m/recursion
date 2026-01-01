#include<stdio.h>
#include<iostream> 
#include<string>

using namespace std; 

class Solution {
public:
    int kthGrammar(int n, int k) {
        string res = "0";
        long long result = std::pow(2, n-1)/2;
        formString(res, 0, result);
        if(result == 0) {
            return 0;
        }
        if(k>result) {
            return res[k-result] - '0';
        }
        else {
            return res[k-1] - '0';
        }
    }

    void formString(string& s, long long pos, long long result) {
        if(s.size() > result) {
            cout << "from return " << pos << endl;
            cout << "from return " << result << endl;
            return;
        }
        if(s[pos] == '0') {
            cout << pos << endl;
            s.insert(pos+1, 1, '1'); 
        } else {
            cout << pos << endl;
            s.insert(pos+1, 1, '0'); 
        }
        return formString(s, pos+2, result); 
    }
};


int main() {
  Solution solution;
  int val = solution.kthGrammar(30, 434991989);
  cout << val << endl;
}