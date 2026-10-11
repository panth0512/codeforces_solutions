#include <bits\stdc++.h>

using namespace std;

int main(){

    int n, h, cnt = 0;
    vector<int> a;

    cin >> n >> h;

    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < n; i++){
        if(a[i] > h){
            cnt += 2;
        }
        else{
            cnt++;
        }
    }

    cout << cnt;
}