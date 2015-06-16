#include <stdlib.h>
#include <iostream>
#include <vector>
#include <sys/time.h>
#include <sys/resource.h>
#include <set>

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
};

int main() {
  struct rusage u1,u2;
  getrusage(RUSAGE_SELF,&u1);
  cout << "start at " << u1.ru_utime.tv_sec  << "," << u1.ru_utime.tv_usec << endl;;
  cout << "start at " << u1.ru_stime.tv_sec  << "," << u1.ru_stime.tv_usec << endl;;
  int n = 8e6;
  int q = 1e7;
  int run = 3;
  double d,d2;
  struct timeval t1,t2;

  srand(1);
  gettimeofday(&t1,0);
  getrusage(RUSAGE_SELF,&u1);
  vector<set<int> > v(10000000);
  gettimeofday(&t2,0);
  getrusage(RUSAGE_SELF,&u2);
  d =(t2.tv_sec-t1.tv_sec)*1.0 + (t2.tv_usec-t1.tv_usec)/1000000.0;
  d2 =(u2.ru_utime.tv_sec-u1.ru_utime.tv_sec)*1.0 + (u2.ru_utime.tv_usec-u1.ru_utime.tv_usec)/1000000.0;
  cout << "create time " << d << endl;
  cout << "create time " << d2 << endl;
  set<int> tmp;
  tmp.insert(1);
  tmp.insert(2);
  tmp.insert(3);
  tmp.insert(4);
  tmp.insert(5);

  gettimeofday(&t1,0);
  getrusage(RUSAGE_SELF,&u1);
  int a,b;
  for (int i = 0;i < 2*n;i++) {
    a = rand() % n;
    //b = rand() % n;
    v[a] = tmp;
  }
  gettimeofday(&t2,0);
  getrusage(RUSAGE_SELF,&u2);
  d =(t2.tv_sec-t1.tv_sec)*1.0 + (t2.tv_usec-t1.tv_usec)/1000000.0;
  d2 =(u2.ru_utime.tv_sec-u1.ru_utime.tv_sec)*1.0 + (u2.ru_utime.tv_usec-u1.ru_utime.tv_usec)/1000000.0;
  cout << d << endl;
  cout << d2 << endl;
  cout << "added" << endl;
    

  gettimeofday(&t1,0);
  getrusage(RUSAGE_SELF,&u1);
  int sum = 0;
  for (int j = 0;j < run;j++)
    for (int i = 0;i < q;i++) {
      a = rand() % n;
      b = rand() % n;
      if (v[a].find(b) != v[a].end()) sum++;
    }

  gettimeofday(&t2,0);
  getrusage(RUSAGE_SELF,&u2);
  d =(t2.tv_sec-t1.tv_sec)*1.0 + (t2.tv_usec-t1.tv_usec)/1000000.0;
  d2 =(u2.ru_utime.tv_sec-u1.ru_utime.tv_sec)*1.0 + (u2.ru_utime.tv_usec-u1.ru_utime.tv_usec)/1000000.0;
  cout << d << endl;
  cout << d2 << endl;

  cout << sum << endl;

  getrusage(RUSAGE_SELF,&u1);
  cout << "end at " << u1.ru_utime.tv_sec  << "," << u1.ru_utime.tv_usec << endl;;
  cout << "end at " << u1.ru_stime.tv_sec  << "," << u1.ru_stime.tv_usec << endl;;
}
