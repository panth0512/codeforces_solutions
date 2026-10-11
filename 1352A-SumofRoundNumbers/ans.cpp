#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> ans;
        int cnt = 1;

        while(n > 0){
            int m = n % 10;
            n = n / 10;

            if(m > 0){
                ans.push_back(m * cnt);
                cnt *= 10;
            }
            else{
                cnt *= 10;
            }
            
        }
        cout << ans.size()<< endl;

        for (int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
    }
    return 0;
}