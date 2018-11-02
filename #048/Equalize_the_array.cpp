#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> max(n);
    //memset(max, 0, n * sizeof(int));
    for(int i = 0; i < n;i++){
        max[i] = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                max[i]++;
            }
        }
    }
    int maxnum = 0, maxind = 0;
    for(int i = 0; i < n; i++){
        if(maxnum < max[i]){
            maxnum = max[i];
            maxind = i;
        }
    }
    int count;
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[maxind]){
            count++;
        }
    }
    if(arr[maxind] == n)
        cout << 0 << endl;
    else
        cout << n - count << endl;
    return 0;
}
