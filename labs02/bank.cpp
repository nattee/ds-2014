#include <iostream>
#include <vector>
#include <string>

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
  int remain = clients.size();
  int time = 0;
  vector<int> serve(servers.size());
  vector<pair<string,int>> ans(clients.size());
  int count = 0;
  while (remain > 0) {
    //display current status
    cout << "status at time " << time << endl;
    for (size_t i = 0;i < serve.size();i++) {
      cout << serve[i] << " ";
    }
    cout << endl;
    //if there is available servers, put client to the faster servers
    int min = 0;
    for (size_t i = 0;i < serve.size();i++) {
      if (serve[i] == 0 && ( serve[min] != 0 || servers[i].second < servers[min].second) ) {
        min = i;
      }
    }
    if (serve[min] == 0) {
      cout << "assign cutomer " << clients[count].first << " to servers " << servers[min].first << endl;;
      serve[min] = servers[min].second * clients[min].second;
      ans[count].first = servers[min].first;
      ans[count].second= time + servers[min].second * clients[min].second;
      count++;
      remain--;
    } else {
      cout << " there is no available server" << endl;
      for (size_t i = 0;i < serve.size();i++) {
        serve[i]--;
      }
      time++;
    }
  }
}
