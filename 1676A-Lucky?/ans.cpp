#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string ticket;
        cin >> ticket;
        int sum3 = 0;
        int sum6 = 0;
        for(int i = 0; i < 6; i++){
            int j = int(ticket[i]);

            if(i < 3){
                sum3 += j;
            }
            else{
                sum6 += j;
            }
        }
        
        if(sum3 == sum6){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
        }
    }
}