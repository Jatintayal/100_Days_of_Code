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
    int x;
    int y;
    int z;
    cin >> x >> y >> z;
    int distA = 0, distB = 0;
    if(x >= z)
        distA = x - z;
    else if(x < z)
        distA = z - x;
    if(y >= z)
        distB = y - z;
    else if(y < z)
        distB = z - y;
    if(distA < distB)
        cout << "Cat A" << endl;
    else if(distA > distB)
        cout << "Cat B" << endl;
    else
        cout << "Mouse C" << endl;
    }  
    return 0;
}
