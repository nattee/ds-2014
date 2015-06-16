

//assume n = v.size();
int test1(vector<int> v) {
  stack<int> s;
  for (size_t i = 0;i < v.size();i++) {
    s.push(v[0]);        // each is O(1), total is O(n)
    v.erase(v.begin());  // each is O(N), total is O(n^2)
  }
  while (s.empty() == false) {  //O(n)
    v.push_back(s.top());
    s.pop();
  }
}

int test2(vector<int> v) {
  stack<int> s;
  for (size_t i = 0;i < v.size();i++) {
    s.push(v[v.size()-1]);        // each is O(1), total = O(N)
    v.erase(v.begin()+v.size()-1);  // each is O(1), total = O(N)
  }
  while (s.empty() == false) {  //O(n)
    v.push_back(s.top());
    s.pop();
  }
}
-- vector   a
push_back
erase      O(N)
begin   O(1)
size    O(1)
-- stack    b
push    O(1)
pop     O(1)
top     O(1)
empty   O(1)
