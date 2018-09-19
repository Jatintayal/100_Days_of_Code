#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int turns = 0, right = 0, left = 0;
    if(n % 2 == 0){
        if(p != 1 && p != n){
            for(int i = 2; i <n; i+=2){
                right++;
                if(i == p || i == p-1)
                    break;
            }
            for(int i = n-1; i >=2; i-=2){
                left++;
                if(i == p || i == p+1)
                    break;
            }
        }
    }
    else
        if(p != 1 && p != n && p != n-1){
            for(int i = 2; i <=n; i+=2){
                right++;
                if(i == p || i == p-1)
                    break;
            }
            for(int i = n - 2; i >=2; i-=2){
                left++;
                if(i == p || i == p+1)
                    break;
            }
        }
        if(left > right)
            turns = right;
        else{
            turns = left;
        }
    return turns;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
