#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> points(n);
    

    cin >> points[0];

    int maxpoint = points[0];
    int minpoint = points[0];
    int ans = 0;

    for(int i = 1; i < n; i++){
        cin >> points[i];

        if(maxpoint < points[i]){
            maxpoint = points[i];
            ans++;
        }
        if(minpoint > points[i]){
            minpoint = points[i];
            ans++;
        }
    }

    cout << ans << endl;

}