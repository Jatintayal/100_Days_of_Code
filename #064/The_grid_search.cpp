#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R, x = 0;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0; P_i < r; P_i++){
           cin >> P[P_i];
        }
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                if(G[i][j] == P[0][0] && r <= R - i && c <= C - i){
                    int i1 = i, j1 = j, w = 0;
                    for(int a = 0, i1 = i; a < r; a++, i1++){
                        for(int b = 0, j1 = j; b < c; b++, j1++){
                            if(P[a][b] != G[i1][j1]){
                                w = 1;
                                break;
                            }
                            else if(r == a + 1 && c == b + 1){
                                cout << "YES" << endl;
                                x = 1;
                            }
                        }
                        if(w == 1)
                            break;
                    }
                }
                else if(i ==  R - 1 && j == C - 1 && x == 0){
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}
