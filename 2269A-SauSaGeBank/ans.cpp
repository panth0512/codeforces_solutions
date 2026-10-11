#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        int ans = 0;
        ans += pow(2,n)/pow(2,(k-1));

        for(int i = 1; i <= k-1; i += 1){
            ans += pow(2,i);
        }

        cout << ans << endl;
    }
}