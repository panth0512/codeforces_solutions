#include <bits\stdc++.h>

using namespace std;

int main(){

    string s, t;
    int cnt = 0;

    cin >> s >> t;

    reverse(s.begin(), s.end());

    if(s == t){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}