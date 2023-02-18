//@File    :   空指针初始化.cpp
//@Time    :   2023/02/18 15:36:24
//@Author  :   delicay
/*

*/
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int *p1 = nullptr;
    int n1 = 2;
    // int *p2 = 0;
    int *p2;
    int n2 = 3;
    // 需要 cstdlib
    int *p3 = NULL;
    int n3 = 4;

    p1 = &n1;
    p2 = &n2;
    p3 = &n3;
    printf("%d %d %d\n", *p1, *p2, *p3);
    return 0;
}
