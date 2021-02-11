#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
/*pragma is used for suppressed optimization in compiler.
there are also other types of optimization like O1,O2,O3 etc.
but we will use Ofast.
Ofast adds all optimization of O1,O2,O3.
*/
#pragma GCC target("avx,avx2,fma")
// to further optimize we use target with pragma.
//use below function to achieve x10 performance compared to scanf.
//this will improve your performance.
/* NOTE
this function can only scan int data types.
not double or float.
*/
#define ADDA 1
#ifdef ADDA
inline void scan1(int &x) {
    bool negative = false;
    register int c;
    x = 0;
    c = getchar();
    if(c == '-') {
        negative = true;
        c = getchar();
    }
    for(;(c > 47 && c < 58);c = getchar()) {
        x = x*10 + c - 48;
    }
    if(negative) {
        x *= -1;
    }
}
inline void scan2(int &x2,int &y2) {
    scan1(x2);
    scan1(y2);
}

#endif
