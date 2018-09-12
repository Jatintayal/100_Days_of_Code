#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    // Complete this function
    int best = s[0], worst = s[0], bc = 0, wc = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] > best){
            best = s[i];
            bc++;
        }
        else if(s[i] < worst){
            worst = s[i];
            wc++;
        }
    }
    vector <int> counts {bc, wc};
    return counts;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
