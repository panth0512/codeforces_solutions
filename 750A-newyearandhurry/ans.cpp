#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int totaltime = 240;
    int timerem = totaltime - k;
    int ans = 0;
    int question = 1;

    while(ans < n && timerem >= question*5){
        timerem = timerem - question*5;
        ans++;
        question++;
    }

    cout << ans << endl;

}