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


int main(){
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        char temp = s[i];
        if(temp >= 65 && temp <= 90){
            count++;
        }
    }
    if(count == 0)
        cout << 1 << endl;
    else
        cout << count + 1 << endl;
    return 0;
}
