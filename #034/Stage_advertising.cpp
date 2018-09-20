#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, floor = 5, count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        floor /= 2;
        count += floor;
        floor *= 3;
    }
    cout << count << endl;
    return 0;
}
