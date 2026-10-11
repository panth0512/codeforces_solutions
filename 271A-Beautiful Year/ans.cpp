#include <bits\stdc++.h>

using namespace std;

int main(){
    int y, ans = 0;

    cin >> y;

    do{
        y++;
        int temp = y;
        int y1, y2, y3, y4;
        
        y1 = temp % 10;
        temp = temp / 10;

        y2 = temp % 10;
        temp = temp / 10;

        y3 = temp % 10;
        temp = temp / 10;

        y4 = temp % 10;

        if(set<int>{y1, y2, y3, y4}.size() == 4){
            ans = y;
        }

    } while (ans == 0);

    cout << ans;
}