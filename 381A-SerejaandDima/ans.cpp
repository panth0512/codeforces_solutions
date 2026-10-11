#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> cards(n);

    int sereja = 0;
    int dima = 0;

    for(int i = 0; i < n; i++){
        cin >> cards[i];
    }

    int j = 0;
    int i = n-1;
    int cnt = 0;

    while(j <= i){
        if(cnt%2 == 0){
            if(cards[i] > cards[j]){
                sereja += cards[i];
                i--;
                cnt++;
            }
            else{
                sereja += cards[j];
                j++;
                cnt++;
            }

        }
        else{
            if(cards[i] > cards[j]){
                dima += cards[i];
                i--;
                cnt++;
            }
            else{
                dima += cards[j];
                j++;
                cnt++;
            }
        }
    }

    cout << sereja << " " << dima << endl;
    
}