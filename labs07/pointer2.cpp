#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
  int *mData;
  mData = new int[100];
  

  int *ptr;

  ptr = mData;

  ptr = ptr + 3;
  *ptr = 10;

  cout << mData << endl;
  cout << mData[0] << endl;
  cout << mData[1]<< endl;
  cout << mData[2]<< endl;
  cout << mData[3]<< endl;
  cout << mData[4]<< endl;
}
