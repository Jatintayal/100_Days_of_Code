#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int count = n, smallest, k = 0;
    while(count != 0){
        cout << count << endl;
        count = 0;
        smallest = 3000000;
            for(int i = 0; i < n; i++){
                if(smallest > arr[i] && (arr[i] != 0 && arr[i] > 0)){
                    smallest = arr[i];}
            }
        for(int j = 0; j < n; j++){
            arr[j] -= smallest;
            if(arr[j] > 0)
                count++;
        }
    }
    return 0;
}
