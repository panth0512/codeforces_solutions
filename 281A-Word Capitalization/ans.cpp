#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    
    do{
        cin >> s;
    }while(s.size() == 0 || s.size() > 10000);
    
    s[0] = toupper(s[0]);
    
    cout << s;
}