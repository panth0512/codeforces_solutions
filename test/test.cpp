#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v = {10, 20, 30, 40, 50};


    for (int* ptr = v.data(); ptr != v.data()+ v.size(); ptr++){
        cout << (ptr) << " \n";
    }
    v.clear();

    cout << v[0];
} 