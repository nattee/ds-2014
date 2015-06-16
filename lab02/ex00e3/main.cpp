#include <iostream>

using namespace std;

int N;
int A[100001];
int count[100001]; // count[i] = the number of a member of domain that maps to i

int main() {
  //read input
  cin >> N;
  for (int i = 1;i <= N;i++) { count[i] = 0; }
  for (int i = 1;i <= N;i++) {
    cin >> A[i];
    if (A[i] < 1 || A[i] > N) {
      cout << "NO" << endl;
      exit(0);
    }
    count[A[i]]++;
  }

  //display
  for (int i = 1;i <= N;i++) {
    cout << " f(" << i << ") is " << A[i] << endl;
  }

  for (int i = 1;i <= N;i++) {
    cout << " count[" << i << "] is " << count[i] << endl;
  }

  //check
  for (int i = 1;i <= N;i++) {
    if (count[i] != 1) {
      cout << "NO" << endl;
      exit(0);
    }
  }
  cout << "YES" << endl;
}
