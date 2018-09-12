#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function
    int cx = 0;
    for(int x = 1; x <= 100; x++){
        int ca = 0, cb = 0;
        for(int i = 0; i < a.size(); i++){
            if(x % a[i] == 0){
                ca++;
            }
        }
        for(int i = 0; i < b.size(); i++){
            if(b[i] % x == 0){
                cb++;
            }
        }
        if(ca == a.size() && cb == b.size()){
            cx++;
        }
    }
    return cx;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
