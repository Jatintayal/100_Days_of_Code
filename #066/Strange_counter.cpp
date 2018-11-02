#include <bits/stdc++.h>

using namespace std;

void strangeCode(long t) {
    long rem = 3;
    while(t > rem){
        t = t-rem;
        rem *= 2;
    }
    cout << rem-t+1;
}

int main() {
    long t;
    cin >> t;
    strangeCode(t);
    return 0;
}
