#include <iostream>

template<typename T>
class CalcSuper{
    private:
    T a,b;
    public:
    void set_param(T *a, T *b){};
    T add(T*a, T*b){return *a+*b;};
    T minus(T *a, T *b){return *a-*b;};

};

