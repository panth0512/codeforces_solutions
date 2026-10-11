#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int nooffaces = 0;
    while(n){
        
        string s;
        cin >> s;

        if(s == "Tetrahedron"){
            nooffaces += 4;
        }
        else if(s == "Cube"){
            nooffaces += 6;
        }
        else if(s == "Octahedron"){
            nooffaces += 8;
        }
        else if(s == "Dodecahedron"){
            nooffaces += 12;
        }
        else if(s == "Icosahedron"){
            nooffaces += 20;
        }

        n--;
    }

    cout << nooffaces;

}