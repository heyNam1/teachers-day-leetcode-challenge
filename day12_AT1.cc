#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_set<char> hey;

    for(int i=0; i<s.length(); i++){
        hey.insert(s[i]);
    }

    if(hey.size()%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}