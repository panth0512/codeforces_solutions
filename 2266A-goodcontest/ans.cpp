#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[4];
        int ans = 0;

        cin >> a[1] >> a[2] >> a[3];
        
        for(int i = 1; i < 4; i++){

            ans += n - a[i] - ans;
        }

        cout << ans << endl;

    }
}