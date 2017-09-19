template <class T> struct A {
  void f(int);
  template <class U> void f(U);
};

template <class T> void f(T t) {
  A<T> a;
  A<T>* ap;
  a.template f<>(t);    // OK: calls template
  a.template f(t);      // error: not a template-id
  ap->template f<>(t);
  delete ap;
}

template <class T> struct B {
  template <class T2> struct C { };
};

// OK: T::template C names a class template:
template <class T, template <class X> class TT = T::template C> struct D { };

int main(int argc, char const *argv[])
{
	return 0;
}
