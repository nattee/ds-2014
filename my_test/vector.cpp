#include <iostream>
#include <vector>
#include <sys/time.h>

using namespace std;

class Something {
public:
  static int cCount;
  static int dCount;

  int a,b,c,d,e;

  static void reset() {
    cCount = dCount = 0;
  }

  Something() {
    cCount++;
  }
  ~Something() {
    dCount++;
  }

  bool operator==(const Something &s) {
    return a == s.a and b == s.b and c == s.c and d == s.d;
  }

};

int Something::cCount = 0;
int Something::dCount = 0;

int main() {
  int n = 8e6;
  int q = 1e7;
  int run = 3;
  double d;

  srand(1);
  Something init;
  vector<Something> v(n);
  Something tmp;

  struct timeval t1,t2;
  gettimeofday(&t1,0);

  int a;
  for (int i = 0;i < 2*n;i++) {
    a = rand() % n;
    //b = rand() % n;
    v[a] = tmp;
  }
  gettimeofday(&t2,0);
  d =(t2.tv_sec-t1.tv_sec)*1.0 + (t2.tv_usec-t1.tv_usec)/1000000.0;
  cout << d << endl;
  cout << "added" << endl;
    

  gettimeofday(&t1,0);
  int sum = 0;
  for (int j = 0;j < run;j++)
    for (int i = 0;i < q;i++) {
      a = rand() % n;
      if (v[a] == tmp) sum++;
    }

  gettimeofday(&t2,0);
  d =(t2.tv_sec-t1.tv_sec)*1.0 + (t2.tv_usec-t1.tv_usec)/1000000.0;
  cout << d << endl;

  cout << sum << endl;
  cout << "construct = " << Something::cCount << endl;
  cout << "desstruct = " << Something::dCount << endl;
}
