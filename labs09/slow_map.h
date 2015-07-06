#ifndef __SLOW_MAP_H__
#define __SLOW_MAP_H__

#include <map>

namespace CP {

template <typename KeyT,typename MappedT>
class slow_map {
  protected:
    std::vector<pair<KeyT,MappedT> > v;

  public:
    slow_map() { }

    ~slow_map() { }

    bool empty() { return false; }

    size_t size() { return 0; }

    MappedT& operator[](const KeyT &k) {
      for (size_t i = 0;i < v1.size();i++) {
        if (v1[i] == k) {
          return v2[i];
        }
      }
      v1.push_back(k);
      v2.push_back( MappedT() );
      return v2.back();


      for (auto it = v1.begin();it != v1.end();it++) {
        if (*it == k) {
          int xxx = it - v1.begin();
          return *(v2.begin() + xxx);
        }
      }
      v1.push_back(k);
      v2.push_back( MappedT() );
      return v2.back();

      auto it = find(v1.begin(),v1.end(),k);
      if (it == v1.end()) {
        v1.push_back(k);
        v2.push_back( MappedT() );
        return v2.back();
      } else {
        return v2[it - v1.begin()]
      }


    }

    MappedT& value_at(const KeyT &k) {
    }

};

}

#endif
