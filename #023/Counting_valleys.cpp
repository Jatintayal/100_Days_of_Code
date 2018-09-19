#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int final_valley(int n, vector <char> steps){
    int step = 0, valley_count = 0;
    for(int i = 0; i < n; i++){
        if(steps[i] == 'U'){
            step++;
            if(step == 0){
                valley_count++;
            }
        }
        else if(steps[i] == 'D'){
            step--;
        }
    }
    return valley_count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector <char> steps(n);
    for(int i = 0; i < n; i++){
        cin >> steps[i];
    }
    int result = final_valley(n, steps);
    cout << result << endl;
    return 0;
}
