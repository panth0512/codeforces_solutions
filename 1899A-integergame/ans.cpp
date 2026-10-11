#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int number;
        cin >> number;

        int cnt = 0;

        if(number > 0 && (number - 1)%3 == 0 ){
            cout << "First" << endl;
            cnt++;
        }
        else if((number+1)%3 == 0){
            cout << "First" << endl;
            cnt++;
        }
        else if(cnt > 10){
            cout << "Second" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }
}