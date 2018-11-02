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
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector< vector<int> > M(n,vector<int>(n));
        for(int M_i = 0;M_i < n;M_i++){
           for(int M_j = 0;M_j < n;M_j++){
              cin >> M[M_i][M_j];
           }
        }
        vector<int> col(n, 0);
        vector<int> row(n, 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                row[i] += M[i][j];
                col[i] += M[j][i];
            }
        }
        sort(row.begin(), row.end());
        sort(col.begin(), col.end());
        int count = 0;
        for(int i = 0; i < n; i++){
            if(row[i] == col[i])
                count++;
        }
        if(count == n)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}