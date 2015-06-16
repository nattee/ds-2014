#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
  int N,K;
  cin >> N;
  

  map<string,int> place;
  for (int i = 0;i < N;i++) {
    // take input from users
    // the input is an integer in the range 0 to 1000
    int a;
    cin >> a;
    place[a] = 1;
  }
  
  cin >> K;
  //your task is to print "YES" if there is K 
  //in the input given by the user
  //
  if (place[k] == 1)
    cout << "YES";
  else
    cout << "NO";




}
