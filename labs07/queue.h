#ifndef __queue_version_2__
#define __queue_version_2__

#include <vector>

namespace cp {

template <typename t>
class queue{
  protected:
    std::vector<t> v;

  public:
    queue() { }
    queue(const queue<t>& a) {  a.v; }
    ~queue() { }

    size_t size() {  return v.size(); }
    bool empty() { return v.empty(); }

    const t& front() {
      auto it = v.begin();
      return *it;

      return v[0];

      return v.front();
    }

    const t& back() {
      auto it = v.begin()+v.size()-1;
      auto it = v.end() - 1;
      return *it;
      return *(v.end() - 1);

      return v[v.size()-1];

      return v.back();
    }

    void pop( ) {
      v.erase(v.begin());
    }

    void push(const t& val) {
      v.push_back(val);
    }
};

}


#endif
