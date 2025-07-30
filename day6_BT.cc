#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        vector<char> stack;
        unordered_map<char, char> match = {
            {')','('},
            {']','['},
            {'}','{'}
        };

        for(int i=0; i<n; i++){
            if(s[i]=='(' || s[i]=='{'||s[i]=='['){
                stack.push_back(s[i]);
            }else{
                if(stack.empty()) return false;
                if(stack.back()!=match[s[i]]) return false;
                stack.pop_back();
            }

        }

        return stack.empty();

    }
};