#include <iostream>

using namespace std;

int main(){
    int t;  
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);

        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(i > 1){
                sum += a[i-1];
                a[i] = max(a[i], max(a[i]-sum , a[i]+sum));
            }
        }

        int max = *max_element(a.begin(), a.end());

        cout << max << endl;
    }
}