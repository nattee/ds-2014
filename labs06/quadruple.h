#ifndef CP_QUADRUPLE_INCLUDED_
#define CP_QUADRUPLE_INCLUDED_

namespace CP{

template<typename T1, typename T2, typename T3, typename T4 >
class quadruple{
    public:
        T1 first;
        T2 second;
        T3 third;
        T4 fourth;
        //default constructor
        quadruple() : first(), second(), third(), fourth() {}
        //copy constructor
        quadruple(const quadruple<T1,T2,T3,T4>& a){
            first = a.first;
            second = a.second;
            third = a.third;
            fourth = a.fourth;
        }
        //constructor
        quadruple(const T1& a, const T2& b, const T3& c, const T4& d)
            : first(a), second(b), third(c), fourth(d){
            }

        bool operator<(const quadruple<T1,T2,T3,T4>& a) {
          if (first < a.first) return true;
          return false;

        }
};
}

#endif
