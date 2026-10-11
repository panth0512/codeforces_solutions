#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    
    vector<char> temp;
    
    for(int i = 0; i < s.size(); i+=2){
        temp.push_back(s[i]);
    }
    
    sort(temp.begin(), temp.end());
    
    for(int i = 0; i < s.size(); i++){
        if(i%2 == 0){
            cout << temp[i/2];
        }
        
        else
            cout << "+";
    }
}