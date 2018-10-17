#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n, count = 0;
        cin >> n;
        string ns = to_string(n);
        for(int i = 0; i < ns.size(); i++){
            int nd = stoi(ns.substr(i, 1));
            if(nd != 0)
                if(n % nd == 0)
                    //cout << nd << " " << n << endl;
                    count++;
        }
        cout << count << endl;
    }
    return 0;
}
