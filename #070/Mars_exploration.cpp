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
    string S;
    cin >> S;
    int len = S.length(), ind = 0, count = 0;
    while (ind < len){
        if(S[ind] == 'S'){
            ind++;
            //cout << "S \n";
        }
        else if(S[ind] != 'S'){
            ind++;
            count++;
            //cout << "not S \n";
        }
            
        if(S[ind] == 'O'){
            ind++;
            //cout << "O \n";
        }
        else if(S[ind] != 'O'){
            ind++;
            count++;
            //cout << "not O \n";
        }
            
        if(S[ind] == 'S'){
            ind++;
            //cout << "S \n";
        }
        else if(S[ind] != 'S'){
            ind++;
            count++;
            //cout << "not S \n";
        }
    }
    cout << count << endl;
    return 0;
}
