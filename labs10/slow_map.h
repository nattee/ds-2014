#ifndef __SLOW_MAP_H__
#define __SLOW_MAP_H__

#include <map>

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
      return v.back().second;
    }

    iterator begin() {
      return v.begin();

    }

    iterator end() {
      return v.end();
    }

    iterator erase(iterator it) {
      //
    }

    iterator erase(KeyT k) {
      //

    }

};

}

#endif
