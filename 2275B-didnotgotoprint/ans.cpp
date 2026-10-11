#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        stack<int> st;
        vector<int> ans;

        for(int i = 1; i <= n; i++){
            if(s[i-1] == '1'){
                st.push(i);
            }
            else if(s[i-1] == '2'){
                if(!st.empty()){
                    st.pop();
                    ans.push_back(i);
                }
            }
            
        }

        while(!st.empty()){
            int temp = st.top();
            ans.push_back(temp);
            st.pop();
        }

        sort(ans.begin(), ans.end());

        cout << ans.size() << endl;
        if(ans.size() > 0){
            for(int i = 0; i < ans.size(); i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else    cout << endl;
    }
}