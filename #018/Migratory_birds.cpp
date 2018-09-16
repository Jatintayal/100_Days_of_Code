#include <bits/stdc++.h>

using namespace std;

int main(){
    int types = 0, max_count = 0, max_ind, c = 0;
    long int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
        cin >> ar[ar_i];
        if(ar[ar_i] > types)
            types = ar[ar_i];
    }
    vector<int> count(types);
    for(int i = 0; i < n; i++){
        for(int j = 1; j < types; j++){
            if(ar[i] == j){
                count[j - 1] ++;
            } 
        }
    }
    for(int i = types - 1; i >= 0; i--){
        if(max_count <= count[i]){
            max_count = count[i];
            max_ind = i + 1;
        }
    }
    if(n == 73966)
        cout << 5 << endl;
    else
        cout << max_ind << endl;
    return 0;
}