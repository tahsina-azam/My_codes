  /* #include <iostream>
    using namespace std;

    int main() {
        int t[3] = { 3, 2, 1 }, *ptr = t + 1;
        (*(ptr + 1))++;
        *ptr++;
        cout << t[1] << t[2];
        return 0;
    }*/
 /*   #include <iostream>
    using namespace std;

    int main() {
        float x = 3.14, *p = &x;
        p[0] = ++x;
        cout << x;
        return 0;
    }
*/
/*#include <iostream>
    using namespace std;

    int main() {
        int tab[5] = { 1, 2, 4, 8, 16 };
        int *p1 = tab, *p2 = tab + 4;
        for(int *p = p1 + 1; p < p2; p++)
            *p = p[-1] * 2;
        cout << tab[1] << tab[2];
        return 0;
    }*/
  /*   #include <iostream>
    using namespace std;

    int main() {
        float f[2];
        float *p1 = f, *p2 = p1 + 1;
        cout << (p2 - p1) / sizeof(float);
        return 0;
    }*/
  /*  #include <iostream>
    using namespace std;

    float fun(float arg) {
        return arg * arg + arg + 1;
    }

    int main() {
        cout << fun(fun(1.0));
        return 0;
    }*/
  /*  #include <iostream>
    using namespace std;

    int fun(float a, float b) {
        return a / b;
    }

    int main() {
        cout << fun(fun(1.0,2.0),fun(2.0,1.0));
        return 0;
    }*/
   /* #include <iostream>
    using namespace std;

    float Float(float x) {
        return 2 * x / (.5 * x);
    }

    void Void(int n) {
        float v = n;
        while(n) {
            v = Float(v);
            n >>= 1;
        }
        cout << v;
    }

    int main() {
        Void(4);
        return 0;
    }*/
  /*  #include <iostream>
    using namespace std;

    int f1(int a) {
        return ++a;
    }

    int f2(int &a) {
        return ++a;
    }

    int f3(int *a) {
        return *a + 1;
    }

    int main() {
        int value = 2;
        cout << f1(value);
        cout << f2(value);
        cout << f3(&value);
        return 0;
    }*/
  /*  #include <iostream>
    using namespace std;

    int f1(int *a) {
        return *a;
    }

    int *f2(int *a) {
        return a;
    }

    int *f3(int &a) {
        return &a;
    }

    int main() {
        int value = 2;
        cout << f1(f2(f3(value)));
        return 0;
    }*/
    /*#include <iostream>
    using namespace std;

    int f1(int *a) {
        return *a + 1;
    }

    int *f2(int *a) {
        return a + 1;
    }

    int *f3(int &a) {
        return &a + 1;
    }

    int main() {
        int t[] = {0, 1, 2, 3};
        cout << f1(f3(*f2(t)));
        return 0;
    }*/


/*#include <iostream>
    using namespace std;

    int fun(int p1 = 1, int p2 = 1) {
        return p2 << p1;
    }

    int main() {
        cout << fun(fun(),fun(2));
        return 0;
    }*/

  /*#include <iostream>
    #include <string>
    using namespace std;

    string fun(string &t, string s = "", int r = 2) {
        while(--r)
            s += s;
        t = t + s;
        return s;
    }

    int main() {
        string name = "x";
        cout << fun(name, name);
        cout << name;
        return 0;
    }*/
    /*  #include <iostream>
    using namespace std;

    int fun(int a, int b) {
        return a + b;
    }

    int fun(int a, char b) {
        return b - a;
    }

    int fun(float a, float b) {
        return a * b;
    }

    int main() {
        cout << fun(1,0) << fun('a','c') << fun(2.f,2.f);
        return 0;
    }
   */
/*#include <iostream>
    using namespace std;

    int fun(long a, long b = 1) {
        return a << b;
    }

    int fun(int a, char b = 'z') {
        return b - a;
    }

    int fun(float a, float b = 0) {
        return a * b;
    }

    int main() {
        cout << fun(1L) << fun('x') << fun(2e0f);
        return 0;
    }*/
 /*   #include <iostream>
    using namespace std;

    int fun(int t[]) {
        t[0] += t[1];
        return t[0];
    }

    int main() {
        int t[] = { 5,6,7 };
        cout << fun(t);
        cout << t[0];
        return 0;
    }*/

/* #include <iostream>
    using namespace std;

    int *make(int v) {
        int *p = new int;
        *p = v + 1;
        return p;
    }
    int *play(int &v) {
        cout << ++v;
        return &v;
    }

    void remove(int *v) {
        delete v;
    }

    int main() {
        remove(play(*make(3)));
        return 0;
    }
  */
 /* #include <iostream>
    using namespace std;

    int main() {
        int *val = new int;
        *val = sizeof(val) / sizeof(int *);
        int *tab = new int[*val];
        tab[0] = *val;
        delete val;
        cout << *tab;
        delete [] tab;
        return 0;
    }*/
#include <iostream>
    using namespace std;

    struct s {
        float *f;
    };

    void make(s *p, float x = 10) {
        float *f = new float;
        *f = sizeof(*f) / sizeof(float) * 10;
        p->f = f;
    }

    int main() {
        s *ss = new s;
        make(ss);
        cout << *(*ss).f;
        delete ss->f;
        delete ss;
        return 0;
    }
