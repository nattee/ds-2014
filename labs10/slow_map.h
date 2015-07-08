#ifndef __SLOW_MAP_H__
#define __SLOW_MAP_H__

#include <map>
#include <algorithm>

namespace CP {

template <typename KeyT,typename MappedT>
class slow_map {
  protected:
    std::vector<pair<KeyT,MappedT> > v;

  public:
    typedef typename std::vector<pair<KeyT,MappedT>>::iterator     iterator;
    slow_map() { }
    ~slow_map() { }
    bool empty() { return false; }
    size_t size() { return 0; }

    MappedT& operator[](const KeyT &k) {
      for (size_t i = 0;i < v.size();i++) {
        if (v[i].first == k) return v[i].second;
      }
      v.push_back(make_pair(k,MappedT() ));

      int c = v.size()-1;
      while (c > 0) {
        if (v[c-1].first > v[c].first) {
          swap(v[c-1],v[c]);
          c--;
        } else break;
      }

      return v.back().second;
    }

    iterator begin() { return v.begin(); }
    iterator end() { return v.end(); }

    iterator erase(iterator it) {
      v.erase(it);
      //
    }

    iterator erase(KeyT k) {
      for (auto it = v.begin();it != v.end();it++) {
        if (it->first == k) {
          v.erase(it);
        }
      }
      //
    }

};

}

#endif
