#include "quadruple.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
int main(){

  CP::quadruple<int,int,int,int> a;
  a.first = 20; a.second = 4; a.third = 6; a.fourth = 8;
  cout<<"a = "<<a.first<<","<<a.second<<","<<a.third<<","<<a.fourth<<endl;
  //custom
  CP::quadruple<int,int,int,int> d(10,20,30,40);
  cout<<"d = "<<d.first<<","<<d.second<<","<<d.third<<","<<d.fourth<<endl;

  if (a < d) {
    cout << "HA" << endl;
  }

}
