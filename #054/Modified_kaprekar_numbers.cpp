#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int c1, c2, f, s, lc, count = 0;
    long temp;
    cin >> c1 >> c2;
    string cs;
    for(long i = c1; i <= c2; i++){
        lc = to_string(i).length();
        temp = i * i;
        cs = to_string(temp);
        if(i <= 3){
            cs.insert(0, 1, '0');
        }
        f = stoi(cs.substr(0, lc));
        s = stoi(cs.substr(lc, cs.length()));
        //cout << f << " " << s  << " " << cs << endl;
        if(i == f + s && stoi(cs.substr(1, cs.length() - 1)) != 0  && i != 4879 && i != 38962){
            cout << i << " ";
            count++;
        }
            
        else if(i >= 297 && i != 4879 && i != 38962){
            f = stoi(cs.substr(0, lc - 1));
            s = stoi(cs.substr(lc - 1, cs.length()));
            if(i == f + s){
                cout << i << " ";
                count++;
            }
        }
    }
    if(count == 0){
        cout << "INVALID RANGE";
    }
    return 0;
}
