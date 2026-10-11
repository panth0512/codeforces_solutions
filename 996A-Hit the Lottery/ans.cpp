#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int noofbills = 0;

    noofbills += n / 100;
    n = n % 100; 

    noofbills += n / 20;
    n = n % 20;

    noofbills += n / 10;
    n = n % 10;

    noofbills += n / 5;
    n = n % 5;

    noofbills += n / 1;

    cout << noofbills << endl;

    return 0;
}