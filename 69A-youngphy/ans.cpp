#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[3] = {0};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            int coordinate;
            cin >> coordinate;
            arr[j] += coordinate;
        }
    }
    
    int x = arr[0];
    int y = arr[1];
    int z = arr[2];

    if(x || y || z)
        cout << "NO";
    else
        cout << "YES";
}