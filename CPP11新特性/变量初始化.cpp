//@File    :   变量初始化.cpp
//@Time    :   2023/02/18 15:33:33
//@Author  :   delicay
/*

*/
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 变量初始化
    // 用【花括号】和【小括号】都行
    int n1 = 0;
    int n2 = {0}; // 直接等于 花括号
    int n3{0}; // 花括号
    int n4(0); // 小括号
    printf("%d %d %d %d", n1, n2, n3, n4);
    return 0;
}
