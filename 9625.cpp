#include <iostream>

using namespace std;

int dp_ab[2][2];

int main() {
  int K;
  cin >> K;

  dp_ab[0][0] = 1;
  dp_ab[0][1] = 0;

  for(int i = 1; i<=K; i++){
    dp_ab[i%2][0] = dp_ab[(i-1)%2][1];
    dp_ab[i%2][1] = (dp_ab[(i-1)%2][0] + dp_ab[(i-1)%2][1]);
  }

  cout << dp_ab[K%2][0] <<" "<< dp_ab[K%2][1];
  return 0;
}