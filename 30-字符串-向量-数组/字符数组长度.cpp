//@File    :   字符数组长度.cpp
//@Time    :   2022/10/01 23:22:28
//@Author  :   delicay
/*

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    char arr1[] = {'1', '2', '3'};
    char arr2[] = {'1', '2', '3', '\0'};  // 有【显式】的空字符串
    char arr3[] = "123";
    printf("arr1 size = %d\n", sizeof(arr1) / sizeof(arr1[0]));  // 3
    printf("arr2 size = %d\n", sizeof(arr2) / sizeof(arr2[0]));  // 4
    printf("arr3 size = %d\n", sizeof(arr3) / sizeof(arr3[0]));  // 4
    printf("%s\n", arr1); // 123n� 乱码
    printf("%s\n", arr2); // 123
    printf("%s\n", arr3); // 123
    return 0;
}
