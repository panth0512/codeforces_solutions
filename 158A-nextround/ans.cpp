#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, k;
    cin >> n >> k;
    int ans = 0;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] >= a[k-1] && a[i] > 0){
            ans++;
        }

        else{
            break;
        }
    }

    cout << ans << endl;
}  
    
