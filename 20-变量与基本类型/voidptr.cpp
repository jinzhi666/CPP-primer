//@File    :   voidptr.cpp
//@Time    :   2022/10/01 13:06:20
//@Author  :   delicay
/*

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    double val = 3.14;
    double *addr = &val;
    void *pv = &val;
    printf("%d\n", pv);
    pv = addr;
    printf("%d\n", addr);
    return 0;
}
