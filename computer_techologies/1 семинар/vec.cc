#include <iostream>
#include <vector>
using namespace std;

vector<double> sum(vector<double>& a, vector<double>& b) {
  vector<double> res1(3);
  for(int i = 0; i < 3; i++) {
    res1[i] = a[i] + b[i];
  }
return res1;
}

vector<double> div(vector<double>& a, vector<double>& b) {
  vector<double> res2(3);
  for(int i = 0; i < 3; i++) {
    res2[i] = a[i] - b[i];
  }
return res2;
}

int main() {
  vector<double> first(3);
  vector<double> second(3);

  for(int i = 0; i < 3; i++) {
    cin >> first[i];
  }
  for(int u = 0; u < 3; u++) {
    cin >> second[u];
  }

  vector<double> v1(3);
  vector<double> v2(3);

  v1 = sum(first, second);
  v2 = div(first, second);

  for(int k = 0; k < 3; k++) {
    cout << v1[k];
  }
  cout << "\n";
  for(int p = 0; p < 3; p++) {
    cout << v2[p];
  }
return 0;
}
