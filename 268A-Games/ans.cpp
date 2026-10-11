#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> h(n), a(n);
    unordered_map<int, int> ampp, hmpp;

    for (int i = 0; i < n; i++){
        cin >> h[i] >> a[i];
        ampp[a[i]]++;
        hmpp[h[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++){
        auto it = ampp.find(h[i]);
        auto it2 = hmpp.find(a[i]);

        if(it != ampp.end() ){
            ans++;
        }
        else if(it2 != hmpp.end()){
            ans++;
        }
    }

    cout << ans;
}