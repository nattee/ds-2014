#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
  int n; // number of client;
  int m; // number of server;
  cin >> n >> m;
  vector<pair<string,int>> clients;
  for (int i = 0;i < n;i++) {
    string st;
    int tasks;
    cin >> st >> tasks; // clients #i is [st], has [tasks] tasks
    clients.push_back(make_pair(st,tasks));
  }
  vector<pair<string,int>> servers;
  for (int i = 0;i < m;i++) {
    string st;
    int time;
    cin >> st >> time; //server #i is [st], can finish one task in [time]
    servers.push_back(make_pair(st,time));
  }

  //vector<int> serve(servers.size());
  map<pair<int,int>,int> serve;
  for (size_t i = 0;i < servers.size();i++) {
    serve[make_pair(0,servers[i].second)] = i;
  }

  vector<pair<string,int>> ans(clients.size());
  for (size_t i = 0;i < clients.size();i++) {
    int best = serve.begin()->second;
    int done = serve.begin()->first.first + servers[best].second * clients[i].second;
    ans[i].first = servers[best].first;
    ans[i].second = serve.begin()->first.first;
    
    serve.erase(serve.begin());
    serve[make_pair(done,servers[best].second)] = best;
  }
  for (size_t i = 0;i < ans.size();i++) {
    cout << "Customer " << clients[i].first << " is served by " << ans[i].first << " finished at " << ans[i].second << endl;

  }
}
