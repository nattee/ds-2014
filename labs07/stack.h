#ifndef __stack_version_2__
#define __stack_version_2__

namespace cp {

template <typename t>
class stack{
  protected:
    vector<t> mv;

  public:
    stack() { }
    stack(const stack<t>& a) { mv = a.mv; }
    ~stack() { }

    size_t size( return v.size() );
    bool empty( return v.empty() );

    const t& top() {
      return v[0];
    }

    void pop( v.pop_back());

    void push(const t& val) {
      v.push_back(val);
    }
};

}


#endif
