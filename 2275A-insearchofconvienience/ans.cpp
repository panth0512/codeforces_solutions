#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x0, y0, r;

        cin >> x0 >> y0 >> r;

        int x = x0 + r;
        int y = y0;

        cout << x << " " << y << endl;
    }
}