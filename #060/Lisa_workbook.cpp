#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    vector<int> probs(n);
    for(auto& e: probs) cin >> e;
    int temp, len = 0;
    for(int i = 0; i < n; i++){
        temp = probs[i];
        while(temp % k != 0)
            temp++;
        len += temp / k;
    }
    int que[len][k];
    for(int i = 0; i < len; i++){
        for(int j = 0; j < k; j++){
            que[i][j] = 0;
        }
    }
    for(int i = 0, j = 0; i < n; i++){
        int q = 1, j1 = 0;
        while(probs[i] != 0){
            probs[i]--;
            que[j][j1++] = q++;
            if(k == j1 || probs[i] == 0){
                j++;
                j1 = 0;
            }
        }
    }
    int count = 0;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < k; j++){
            if(que[i][j] == i + 1)
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
