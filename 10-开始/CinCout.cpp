//@File    :   CinCout.cpp
//@Time    :   2022/10/01 00:04:43
//@Author  :   delicay
/*

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    // 取消 CPP 与 C 的同步
    std::ios::sync_with_stdio(false);
    // 取消 cin 和 cout 的绑定
    // 等价于 std::cin.tie(0)
    std::cin.tie(NULL);
    // 顺序正确
    printf("printf -> 1\n");
    std::cout << "cout -> 1" << std::endl;

    // 顺序错误，cout 是最后输出的
    // 这样就可以 std::cout << "cout -> 2" << std::endl;
    std::cout << "cout -> 2\n";
    printf("printf -> 2\n");
    return 0;
}
