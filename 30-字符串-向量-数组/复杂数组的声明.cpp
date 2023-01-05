//@File    :   复杂数组的声明.cpp
//@Time    :   2022/10/01 23:50:35
//@Author  :   delicay
/*

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    const int N = 10;
    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // arrptr 指向【一个含有 10 个整数的数组的地址】的 指针
    int(*arrptr)[10] = &arr; // *arrptr 就是 arr 的地址； (*arrptr + 1) 就是 &arr[1]；*(8arrptr + i) 就是 arr[i]
    // arrRef 引用 含有 10 个整数的数组
    int(&arrRef)[10] = arr; // arrRef 就是 arr 的别名
    for (int i = 0; i < N; ++i) {
        // printf("arrAddr[%d] = %d\n", i, &arr[i]);
        printf("arrptr[%d] = %d\n", i, *(*arrptr + i));
        // printf("arrRef[%d] = %d\n", i, arrRef[i]);
    }
    return 0;
}
