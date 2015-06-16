#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<int> v;
  int x;
  do {
    cin >> x;
    if (x == 0) break;
    v.push_back(x);
  } while (true);

  //calculate avg
  int sum = 0;
  for (size_t i = 0;i < v.size();i++) {
    sum += v[i];
  }
  double avg = sum / (int)v.size();

  //count
  int more = 0;
  int less = 0;

  for (size_t i = 0;i < v.size();i++) {
    if (v[i] > avg) more++;
    if (v[i] < avg) less++;
  }
  cout << more << endl;
  cout << less << endl;
}
