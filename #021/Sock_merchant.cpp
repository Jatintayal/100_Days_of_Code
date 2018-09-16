#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    int count = 0, inc = 200;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(ar[i] == ar[j] && i != j){
                count++;
                ar[i] = inc++;
                ar[j] = inc++;
                break;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
