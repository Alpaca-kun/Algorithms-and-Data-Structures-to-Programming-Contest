#include<iostream>
#include<algorithm>

using namespace std;
static const int MAX = 200000;

int main () {
  int R[MAX];
  int n;

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> R[i];

  int maxValue = -1000000000;
  int minValue = R[0];

  for (int i = 1; i < n; i++) {
    maxValue = max(maxValue, R[i] - minValue);
    minValue = min(minValue, R[i]);
  }

  cout << maxValue << endl;
}
