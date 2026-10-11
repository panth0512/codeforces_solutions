#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    cout << "I hate ";

    int cnt = 2;
    
    while(n-1){

        if(cnt%2 == 0){
            cout << "that I love ";
        }

        else{
            cout << "that I hate ";
        }
       
        n--;
        cnt++;
    }

    cout << "it";
}