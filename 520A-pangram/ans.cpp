#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;

    cin >> s;

    if(n < 26){
        cout << "NO";
        return 0;
    }

    for (char &c : s) {
           
        c = tolower(static_cast<unsigned char>(c));
    }

    unordered_set<int> st;

    for (int i = 0; i < n; i++){

        st.insert(s[i]);
    }

    if(st.size() == 26){
        cout << "YES";
    }

    else{
        cout << "NO";
    }

    return 0;
}