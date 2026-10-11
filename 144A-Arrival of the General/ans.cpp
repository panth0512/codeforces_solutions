#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int maxi = INT_MIN;
    int maxiidx = 0;
    int mini = INT_MAX;
    int miniidx = 0;
    int steps = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        if (a > maxi) {
            maxi = a;
            maxiidx = i;
        }
        if (a <= mini) {
            mini = a;
            miniidx = i;
        }
    }
    
    steps = (n - 1 - miniidx) + maxiidx;

    if(maxiidx > miniidx){
       
        steps--;
    }


    cout << steps;

}