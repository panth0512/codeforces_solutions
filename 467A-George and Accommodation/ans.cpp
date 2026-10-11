#include <bits/stdc++.h>

using namespace std;

int main(){

    int rooms, cnt = 0;
    cin >> rooms;

    vector<int> p(rooms);
    vector<int> q(rooms);

    for (int i = 0; i < rooms; i++){
        cin >> p[i] >> q[i];
    }

    for (int i = 0; i < rooms; i++)
    {

        if ((q[i] - p[i]) >= 2)
        {

            cnt++;
        }
    }

    cout << cnt;
}