/*#include <iostream>
    using namespace std;

    int main() {
        char   t[3][3], *p = (char *)t;

        for(int i = 0; i < 9; i++)
            *p++ = 'a' + i;
        cout << t[1][1];
        return 0;
    }
*/
   /*#include <iostream>
    using namespace std;

    int main() {
        float *ft[3] = { new float[3], new float[3], new float[3] }, *p;

        for(int i = 0; i < 3; i++) {
            p = ft[i];
            *p = p[1] = *(p + 2) = 10 * i;
        }
        cout << ft[1][1];
        delete [] ft[0];
        delete [] ft[1];
        delete [] ft[2];
        return 0;
    }*/

   /*  #include <iostream>
    using namespace std;

    int main() {
        int *it[3];

        for(int i = 0; i < 3; i++) {
            it[i] = new int [i + 1];
            for(int j = 0; j < i + 1; j++)
                it[i][j] = 10 * i + j;
        }
        cout << it[2][2];
        for(int i = 0; i < 3; i++)
            delete [] it[i];
        return 0;
    }*/
    /*  #include <iostream>
    using namespace std;

    int main() {
        short s = 1;
        int i = 2;
        long l = 3;
        float f = 4.4;
        double d = 6.6;

        cout << s/i + f/i + d/s;
        return 0;
    }
    */
 /*   #include <iostream>
    using namespace std;

    int main() {
        short s = 1;
        int i = 2;
        long l = 3;
        float f = 4.4;
        double d = 6.6;

        cout << s/float(i) + int(f)/i + long(d)/s;
        return 0;
    }*/
  /*  #include <iostream>
    using namespace std;

    int main() {
        int i = 2;
        float f = 5.8;

        f = (int)f;
        i = (float) i;
        cout << f/i;
        return 0;
    }*/

   /*  #include <iostream>
    using namespace std;

    int main() {
        int i = 2;
        float f = 4.4;

        cout << f % float(i);
        return 0;
    }*/

 /*   #include <iostream>
    #include <string>
    using namespace std;

    int main() {
        int i = 2;
        string s = "2";

        cout << s + i;
        return 0;
    }
    */
   /*  #include <iostream>
    #include <string>
    using namespace std;

    int main() {
        string s = "a";

        cout << s  << "b" + "c";
        return 0;
    }*/

   /* #include <iostream>
    #include <string>
    using namespace std;

    int main() {
        string s = "a";

        cout << s + "b" + "c";
        return 0;
    }*/

     /* #include <iostream>
    #include <string>
    using namespace std;

    int main() {
        string s1 = "ab";
        string s2 = "Abc";

        if(s1 > s2)
            cout << "yes";
        else
            cout << "NO";
        return 0;
    }*/

/*       #include <iostream>
    using namespace std;

    int main() {
        string s1 = "Ab";
        string s2 = "Abc";

        cout << s1.compare(s1);
        return 0;
    }
*/

 /*#include <iostream>
    using namespace std;

    int main() {
        string s1 = "1";
        string s2 = "12";

        cout << s1.compare(s2);
        return 0;
    }*/

   /*  #include <iostream>
    #include <string>
    using namespace std;

    int main() {
        string s = "0123456789";
        cout << s.substr(3,7).substr(2).substr();
        return 0;
    }*/
   /*  #include <iostream>
    using namespace std;

    namespace S1 {
    int A = 1;
    }

    namespace S2  {
    int A = 2 ;
    }

    int main(void) {
        { using namespace S1;
          S2::A = A + 1;
        }
        { using namespace S2;
          S1::A = A + 1;
        }
        cout << S1::A << S2::A;
        return 0;
    }*/
 /*#include <iostream>
    using namespace std;

    namespace S {
    int A = 1;
    }

    namespace S {
    int B = A + 2 ;
    }

    int main(void) {
        S::A = S::A + 1;
        { using namespace S;
           ++B;
        }
        cout << S::B << S::A;
        return 0;
    }*/
     #include <iostream>
    using namespace std;

    namespace S {
    int A = 1;
    }

    namespace S {
    int B = A + 2 ;
    }

    int main(void) {
        S::A = S::A + 1;
        { using namespace S;
           ++B;
        }
        cout << S::B << S::A;
        return 0;
    }
