void merge(vector<int> &v1, vector<int> &v2) {


  //v2.clear();
  //v2.resize(0);
  for (size_t i = v2.size()-1;i >= 0;i--) {
    v1.push_back(v2[i]);
    v2.erase(v2.begin()+i);
  }


}
