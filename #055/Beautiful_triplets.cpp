#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, d, count = 0;
    cin >> n >> d;
    int s[n]; 
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            if(d == s[j] - s[i]){
                for(int k = j + 1; k < n; k++){
                    if(d == s[k] - s[j]){
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
