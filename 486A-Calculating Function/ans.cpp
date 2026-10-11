#include <bits/stdc++.h>

using namespace std;

void f(int n){
    long long sum;
    long long oddsum = ((n+1) / 2)*((n+1) / 2);
    long long evensum = ((n+1)/2)*(((n+1)/2) + 1);

    if(n%2==0){
        sum = evensum - oddsum;
    }

    else{
        sum = oddsum - evensum;
    }
    
    cout << sum;
}

int main(){
    long long n;

    cin >> n;

    f(n);
}