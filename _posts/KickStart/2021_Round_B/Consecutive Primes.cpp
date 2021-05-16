#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

bool isPrime(int x){
    for(int i = 2 ; i <= sqrt(x); i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

void solve(ll number){
    int maxRes = 6;
    int p1 = 2;
    int p2 = 3;
    for(int i = 6; i < number; i+=6){
        p1 = p2;
        if(isPrime(i-1)){
            p2 = i-1;
            if(p1 * p2 <= number){
                maxRes = p1 * p2;
            }
            else{
                break;
            }
        }
        p1 = p2;
        if(isPrime(i+1)){
            p2 = i+1;
            if(p1 * p2 <= number){
                maxRes = p1 * p2;
            }
            else{
                break;
            }
        }
    }
    cout << maxRes;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int i = 1;
    while(t--){
        ll num ;
        cin >> num;
        cout << "Case #" << i++ << ": ";
        solve(num);
        cout << endl;
    }
}