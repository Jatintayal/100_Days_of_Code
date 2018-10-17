#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int energy_left(int k, vector<int> c){
    int energy = 100;
    for(int i = 0; i < c.size(); i+=k){
        if(c[i] == 0)
            energy--;
        else
            energy-=3;
    }
    return energy;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    int result = energy_left(k, c);
    cout << result << endl;
    return 0;
}
