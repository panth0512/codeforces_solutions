#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for (int i = 0; i < n; i++){
        cin >> A[i] >> B[i];
    }

    int maxcnt = B[0];
    int passcnt = B[0];


    for (int i = 1; i < n; i++){

        passcnt = passcnt - A[i] + B[i];

        maxcnt = max(passcnt ,maxcnt);

    }

    cout << maxcnt;
}