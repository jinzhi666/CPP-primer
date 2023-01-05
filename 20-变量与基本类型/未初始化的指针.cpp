//@File    :   未初始化的指针.cpp
//@Time    :   2022/10/01 11:43:08
//@Author  :   delicay
/*

*/
#include <bits/stdc++.h>

using namespace std;

// 错误
// void swap(int *p1, int *p2) {
//     int *p;
//     p = p1;
//     p1 = p2;
//     p2 = p;
// }
// 正确
void swap(int *p1, int *p2) {
    int x = 0;
    int *p = &x;
    // 修改指针变量对应的值
    *p = *p1;
    *p1 = *p2;
    *p2 = *p;
}

int main() {
    int a = 1, b = 2;
    int *p1 = &a, *p2 = &b;
    swap(p1, p2);
    printf("a = %d, b = %d\n", *p1, *p2);
    return 0;
}