#include <iostream>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;


typedef bool(*AAA)(const pair<int,string>&, const pair<int,string>&); // Function pointer type named "CompFunctor" 

bool Compare(const pair<int,string> &a,const pair<int,string> &b)    // The actual comparator function matching the CompFunctor signature
{
  if (a.second > b.second) return true;
  if (a.second == b.second && a.first < b.first) return true;
  return false;
}


using namespace std;
int main() {

  priority_queue<pair<int,string>,vector<pair<int,string>>, AAA > pq(Compare);

  pq.push(make_pair(1 ,"BB"));
  pq.push(make_pair(10,"BB"));
  pq.push(make_pair(10,"A"));
  
  cout << pq.top().first << "," << pq.top().second << endl; pq.pop();
  cout << pq.top().first << "," << pq.top().second << endl; pq.pop();
  cout << pq.top().first << "," << pq.top().second << endl; pq.pop();

}
