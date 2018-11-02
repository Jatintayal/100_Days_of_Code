#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s, e = "";
    cin >> s;
    int k;
    cin >> k;
    for(int i = 0; i < n; i++){
        char temp = s[i];
        for(int j = k; j > 0; j--){
            if((temp >= 97 && temp < 122) || (temp >= 65 && temp < 90)){
                temp ++;
            }
            else if(temp == 122 || temp == 90){
                temp -= 25;
            }
        }
        e += temp;
    }
    cout << e << endl;
    return 0;
}
