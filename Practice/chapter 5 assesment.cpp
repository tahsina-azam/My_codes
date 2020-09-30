/*#include <iostream>
    #include <string>
    using namespace std;

    class A {
    public: string a(string b) {
        return b.substr(0,2);
    }};

    class B {
    public: string a(string b) {
        return b.substr(2,2);
    }};

    int main() {
        A a;
        B b;
        cout << a.a(b.a("ABCD"));
        return 0;
    }
*/

/*#include <iostream>
    using namespace std;

    class A {
        int data[3];
    public:
        int cnt;
        void put(int v) { data[cnt++] = v; }
    };


    int main() {
        A a;
        a.cnt = 0;
        a.put(1);
        a.put(1);
        cout << a.cnt;
        return 0;
    }*/
  /*  #include <iostream>
    using namespace std;

    class A {
    public:
        int data[3];
    private:
        int cnt;
    public:
        void put(int v) { data[cnt++] = v; }
        int take() { int c = cnt; cnt = 0; return c; }
    };


    int main() {
        A a;
        a.take();
        a.put(a.take());
        a.put(1);
        cout << a.data[0];
        return 0;
    }*/

   /* #include <iostream>
    using namespace std;

    class A {
        int cnt;
        void put(int v) { cout << cnt++; }
    };


    int main() {
        A a;
        a.cnt = 0;
        a.put(1);
        a.put(1);
        return 0;
    }*/

  /*  #include <iostream>
    using namespace std;

    class A {
    public:
        int cnt;
        void put(int v);
    };

    void A::put(int v)  { cout << ++cnt; }

    int main() {
        A a[2];
        a[0].cnt = 0;
        a[1].cnt = 1;
        a[a[0].cnt].put(a[1].cnt);
        return 0;
    }
    */

   /*  #include <iostream>
    using namespace std;

    class A {
    public:
        float v;
        float set(float v) {
            v += 1.0;
            this -> v = v;
            return v;
        }
        float get(float d) {
            v += 1.0;
            return v;
        }
    };

    int main() {
        A a;
        cout << a.get(a.set(a.set(0.5)));
        return 0;
    }
*/

/*#include <iostream>
    using namespace std;

    class A {
    public:
        float v;
        float set(float v) {
            A::v += 1.0;
            A::v = v + 1.0;
            return v;
        }
        float get(float v) {
            v += A::v;
            return v;
        }
    };

    int main() {
        A a;
        cout << a.get(a.set(a.set(0.5)));
        return 0;
    }
    */

   /* #include <iostream>
    using namespace std;

    class A {
    public:
        float v;
        float set(float v) {
            A::v += 1.0;
            return v;
        }
        float set(void) {
            A::v = v + 1.0;
            return 0.0;
        }
        float get(float v) {
            v += A::v;
            return v;
        }
    };
     int main() {
        A a;
        cout << a.get(a.set(a.set(a.set())));
        return 0;
    }

*/

/*  #include <iostream>
    using namespace std;

    class A {
    public:
        A() { v = 2.5; }
        float v;
        float set(float v) {
            A::v += 1.0;
            return v;
        }
        float get(float v) {
            v += A::v;
            return v;
        }
    };

    int main() {
        A a;
        a.A();
        cout << a.get(a.set(1.5));
        return 0;
    }
*/

/*#include <iostream>
    using namespace std;

    class A {
    public:
        A() { v = 2.5; }
        float v;
        float set(float v) {
            A::v += 1.0;
            return v;
        }
        float get(float v) {
            v += A::v;
            return v;
        }
    };

    int main() {
        A a;
        cout << a.get(a.set(1.5));
        return 0;
    }
*/

/*#include <iostream>
    using namespace std;

    class A {
    public:
        A() { v = 2.5; }
        A(float v) { A::v = v + 1.0; }
        float v;
        float set(float v) {
            A::v += 1.0;
            return v;
        }
        float get(float v) {
            v += A::v;
            return v;
        }
    };

    int main() {
        A a,b(1.0);
        cout << a.get(b.set(1.5));
        return 0;
    }
    */

   /* #include <iostream>
    using namespace std;

    class A {
    public:
        A(A &a) { v = a.get(0.0); }
        A(float v) { A::v = v; }
        float v;
        float set(float v) {
            A::v += v;
            return v;
        }
        float get(float v) {
            return A::v + v;
        }
    };

    int main() {
        A *a = new A(1.0), *b = new A(*a);
        cout << a->get(b->set(a->v));
        return 0;
    }
*/

 /*#include <iostream>
    using namespace std;

    class A {
    public:
        A(float v) { A::v = v; }
        float v;
        float set(float v) {
            A::v = v;
            return v;
        }
        float get(float v) {
            return A::v;
        }
    };

    int main() {
        A *a = new A(1.0), *b = new A(*a);
        cout << a->get(b->set(a->v));
        return 0;
    }
    */

/*     #include <iostream>
    using namespace std;

    class A {
    public:
        float v;
        A() { v = 1.0; }
        A(A &a) { A::v = a.v; cout << "1"; }
        ~A() { cout << "0"; }
        float set(float v) {
            A::v = v;
            return v;
        }
        float get(float v) {
            return A::v;
        }
    };

    int main() {
        A a,*b = new A(a),*c = new A(*b);
        c->get(b->get(a.set(1.0)));
        delete b;
        delete c;
        return 0;
    }
*/

/* #include <iostream>
    using namespace std;

    class A {
    public:
        float v;
        A() { v = 1.0; }
        A(A &a) { A::v = a.v; cout << "1"; }
        ~A() { cout << "0"; }
        float set(float v) {
            A::v = v;
            return v;
        }
        float get(float v) {
            return A::v;
        }
    };

    int main() {
        A a, b = a;
        return 0;
    }
*/

#include <iostream>
    using namespace std;

    class A {
    public:
        float v;
        A() : v(1.0) {}
        A(A &a) : v(2.0) {}
        A(float f) : v(3.0) {}
        float get() {
            return A::v;
        }
    };

    int main() {
        A a, b(a.get()), c(b);
        cout << a.v + b.v + c.v;
        return 0;
    }
