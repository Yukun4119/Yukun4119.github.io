#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(int number, vector<int> &arr){
    int d = 0;
    int maxLen = 3;
    int leftEnd = 0;
    int rightEnd = 0;
    //for the first ele
    int tmp = 3;
    d = arr[2] - arr[1];
    for(int i = 3; i < number; ++i){
        if(arr[i] - arr[i - 1] == d){
            tmp++;
        }
        else{
            break;
        }
    }
    maxLen = max(maxLen, tmp);


    // for the last ele
    tmp = 3;
    d = arr[number - 2] - arr[number - 3];
    for(int i = number - 4; i >= 0 ; --i){
        if(arr[i + 1] - arr[i] == d){
            ++tmp;
        }
        else{
            break;
        }
    }
    maxLen = max(maxLen, tmp);
    for(int i = 1; i < number - 1; i++){
        d = (arr[i + 1] - arr[i - 1]) / 2;
        leftEnd  = i-1;
        rightEnd = i + 1;
        while(leftEnd - 1 >= 0 && arr[leftEnd - 1] == arr[leftEnd] - d){
            leftEnd --;
        }
        while(rightEnd + 1 <= number - 1 && arr[rightEnd + 1] == arr[rightEnd] + d){
            rightEnd ++;
        }
       maxLen = max(maxLen, rightEnd - leftEnd + 1);
    } 
    cout <<maxLen ;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int i = 1;
    while(t--){
        int number;
        cin >> number;
        vector<int> arr(number);
        for(int i = 0 ; i< number ;i++){
            cin >> arr[i];
        }
        cout << "Case #" << i++ << ": ";
        solve(number, arr);
        cout << endl;
    }
}