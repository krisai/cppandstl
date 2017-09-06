//
// Created by leagan on 18/07/2017.
//
template <class T>
class V{
public:
    V(int);
    ~V(){};
    V(const V&){};
    V& operator=(const V&){};
    T& operator[](int);

private:
    T* m_element;
    int m_size;
};
template <class T>
V<T>::V(int s):m_size(s) {
    m_element=new T[m_size];
}
template <class T>
T& V<T>::operator[](int idx) {
    if(idx<m_size && idx > 0){
        return m_element[idx];
    }
}

template<class T> class Y { void mf() { } };
template class Y<char*>;

int main(int argc,char** argv){
    V<int> v1(100);
//    Y<char*> yy;
//    V<Y<char*>> v2(200);
//    v1[20]=10;
//    v2[20]=v1[20];
    return 0;
}