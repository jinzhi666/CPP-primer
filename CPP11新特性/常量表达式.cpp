//@File    :   常量表达式.cpp
//@Time    :   2023/02/18 15:45:10
//@Author  :   delicay
/*

*/
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // constepr 和 const 的区别
    // constexpr 在编译时候就可以算出【这个常量值】，而 const 不行
    // const 只保证了在运行时候【不能被修改】，底层本身是 动态变量
    constexpr int n1 = 2;
    constexpr int n2 = n1 + 1;  // n2 是产量表达式，因为 n1 + 1 是常量表达式
    const int n3 = n2 + 1;      // const int 说明他的【值不能变】，地址也变不了。因为不是指针
    printf("%d %d %d\n", n1, n2, n3);
    // &n3 = &n2; // 错误

    // 【常量指针】 【字面值：值】不能改，只能改地址
    // const int *p4 = 5; // 错误
    int t4 = 4;
    const int *p4 = &t4;        // const int 值不能变 ，但是地址可以改
    printf("*p4 = %d\n", *p4);  // 4
    p4 = &n1;
    printf("*p4 = %d\n", *p4);  // 2

    // 从左边往右边读 【指针常量】 地址不能改
    // int *const p5; // 这样是不能初始化的
    int t5 = 5;
    int *const p5 = &t5;
    printf("*p5 = %d\n", *p5);  // 5
    *p5 = 2;
    printf("*p5 = %d\n", *p5);  // 2

    // 复合类型，地址和字面值都不能改
    int t6 = 6;
    const int *const p6 = &t6;
    printf("*p6 = %d\n", *p6);  // 5
    *p6 = 2;
    printf("*p6 = %d\n", *p6);  // error: assignment of read-only location '*(const int*)p6'
    p6 = &t5;
    printf("*p6 = %d\n", *p6);  // error: assignment of read-only variable 'p6'
    return 0;
}
