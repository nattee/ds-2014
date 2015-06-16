#include <iostream>

void test1(int n) {
  int sum = 0;
  for (int i =0;i < 10*n;i++)
    for (int j = 0;j < n;j+=2)
      sum++;
}

void test2(int n) {
  int sum = 0;
  for (int i =0;i < n*n;i++)
    for (int j = 0;j*j < n;j+=1)
      sum++;
}

void test3(int n) {
  int sum = 0;
  for (int i =0;i < n;i++) {
    for (int j = 0; j < n;j+=1) sum++;
    for (int j = 0; j < n*n;j+=1) sum++;
  }
}

int main() {
  test1();

}
