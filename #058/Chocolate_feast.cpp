#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, noc, w, wl;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        noc = 0;
        wl = 0;
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        noc = n / c;
        w = noc;
        while(m <= w){
            if(w % m != 0){
                while(w % m != 0){
                    wl++;
                    w--;
                }
            }
            w /= m;
            noc += w;
            w += wl;
            wl = 0;
        }
        cout << noc << endl;
    }
    return 0;
}
