int distribute(vector<int> a, int p, int m) {

  vector<int> u(a.size());
  for (auto &x : u) x = 1;
  m -= a.size();

  priority_queue<pair<float,int> > pq;

  for (size_t i = 0;i < a.size();i++) {
    pq.push(make_pair(a[i]/u[i],i));
  }


  while (m--) {
    //find the most congested area
    auto ans = pq.top();
    u[ans.second]++;
    pq.pop();
    pq.push(make_pair( a[ans.second]/u[ans.second] , ans.second ));

  }


}
