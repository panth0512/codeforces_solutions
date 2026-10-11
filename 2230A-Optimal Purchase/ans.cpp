#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, a, b;
        cin >> n >> a >> b;
        long long ans = 0;
        if(n > 3){
            if(n%3 == 0 && a >= b){
                
                ans = min(a*n, b*n/3);
            }

            else if(n%3 == 0 && a < b){
                ans = min(a*n, b*n/3);
            }

            else if(n%3 != 0 && a >= b){
                if(a >= b/3){
                    ans = b*(n/3) + a*(n%3);
                }
                else{
                    ans = a*(n/3)*3 + a*(n%3);
                }
            }

            else if(n%3 != 0 && a < b){
                if(a >= b/3){
                    ans = b*(n/3) + a*(n%3);
                }
                else{
                    ans = a*(n/3)*3 + a*(n%3);
                }
            }

        }

        else{
            ans = min(a * n, b);
        }

        cout << ans << endl;

        
    }
}
