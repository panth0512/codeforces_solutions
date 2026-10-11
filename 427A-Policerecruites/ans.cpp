#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int officer = 0;
    int crime = 0;

    vector<int> vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i];
        if(vec[i] > 0){
            officer += vec[i];
        }
        else{
            crime++;
            if(officer > 0){
                crime--;
                officer--;
            }
        }
    }

    cout << crime << endl;
    

}