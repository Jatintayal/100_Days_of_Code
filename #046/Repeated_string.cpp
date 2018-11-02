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
    long n, count, n_temp;
    cin >> n;
    n_temp = n;
    int length = s.size() ,ind , noa = 0;
    vector <int> pos;
    while(ind == 0){
        if(n_temp % length == 0){
            ind = 1;
            break;
        }
        n_temp--;  
    }
    for(int i = 0; i < length; i++){
        if(s[i] == 'a'){
            noa++;
        }
    }
    //cout << n_temp << " " << noa << " " << length << endl;
    count = noa * (n_temp / length);
    //cout << count << endl;
        for(int i = 0; i < n - n_temp; i++){
            if(s[i] == 'a'){
                count++;
            }
        }
    cout << count << endl;
    /*
    Easy but wrong way - 
    long count = 0, j;
    for(long i = 0; i < n; i++){
        if(j == s.length())
            j = 0;
        if(s[j] == 'a')
            count++;
        j++;
    }
    cout << count << endl;
    */
    return 0;
}
