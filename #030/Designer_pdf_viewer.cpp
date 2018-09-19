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
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word, numeric_word = "";
    cin >> word;
    int max_height;
    for(int i = 0; i < word.size(); i++){
        for(int j = 97; j < 123; j++){
            if(word[i] == j)
                if(h[j - 97] >= max_height)
                    max_height = h[j - 97];
        }
    }
    cout << max_height * word.size();
    return 0;
}
