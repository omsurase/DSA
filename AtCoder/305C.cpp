#include<bits/stdc++.h>
using namespace std;
int H, W, U = 1e9, D = -1e9, L = 1e9, R = -1e9;
char S[502][502];
int main() {
  cin >> H >> W;
  for (int i = 0; i < H; i++) cin >> S[i];
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S[i][j] == '#') {
        U = min(U, i), D = max(D, i);
        L = min(L, j), R = max(R, j);
      }
    }
  }
  for (int i = U; i <= D; i++) {
    for (int j = L; j <= R; j++) {
      if (S[i][j] == '.') cout << i + 1 << " " << j + 1 << endl;
    }
  }
}