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
        int n, h = 1;
        cin >> n;
        if(n != 0)
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                h++;
            }
            else
                h = h * 2;
        }
        cout << h << endl;
    }
    return 0;
}
