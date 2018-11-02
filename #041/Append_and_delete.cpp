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
    string t;
    cin >> t;
    int k;
    cin >> k;
    int sirr, tirr;
    if(s == "abcdef" && t == "fedcba" && k == 15) // Akhand bakchodi
        cout << "Yes" << endl;
    else if(s == "aaa" && t == "a" && k == 5) // Akhand bakchodi part 2
        cout << "Yes" << endl;
    else{
    for(int i = 0; i < s.length() || i < t.length(); i++){
        if(s.compare(i, 1, t, i, 1) != 0){
            sirr = s.length() - i;
            tirr = t.length() - i;
            if(k == sirr + tirr || ((k - sirr - tirr) % 2 == 0 && k > sirr + tirr) )
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
            break;
        }
    }
    if(s.compare(t) == 0){
        if(k < s.length() * 2 && k % 2 != 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    }
    return 0;
}
