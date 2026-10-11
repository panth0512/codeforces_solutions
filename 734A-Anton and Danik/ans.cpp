#include <bits\stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    int Anton = 0, Danik = 0;

    cin >> n;
    cin >> s;

    for (int i = 0; i < s.size(); i++){

        if(s[i] == 'A'){
            Anton++;

        }

        else{
            Danik++;
        }
    }

    if(Anton > Danik){
        cout << "Anton";
    }

    else if(Danik > Anton){
        cout << "Danik";
    }

    else {
        cout << "Friendship";
    }

}
