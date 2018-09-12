#include bitsstdc++.h

using namespace std;

int solve(int n, vector  int  s, int d, int m){
     Complete this function
    int bw = 0;
    for(int i = 0; i = n-m  (n == 1 && i  n); i++){
        int dc = 0;
        for(int j = i; j  m + i; j++){
            dc += s[j];
        }
        cout  dc  endl;
        if(dc == d){
            bw++;
        }
    }
    return bw;
}

int main() {
    int n;
    cin  n;
    vectorint s(n);
    for(int s_i = 0; s_i  n; s_i++){
       cin  s[s_i];
    }
    int d;
    int m;
    cin  d  m;
    int result = solve(n, s, d, m);
    cout  result  endl;
    return 0;
}
