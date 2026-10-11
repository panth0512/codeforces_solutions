#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_set<char> st;

    char ch;
    char alfa;

        while(cin >> ch){

            if(isalpha(ch)){
                st.insert(ch);
            }

            if(ch == '}'){
                break;
            }
        }

    cout << st.size();
}