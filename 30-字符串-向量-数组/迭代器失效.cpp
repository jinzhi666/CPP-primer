//@File    :   迭代器失效.cpp
//@Time    :   2022/10/01 23:11:22
//@Author  :   delicay
/*

*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5};

    // auto it = v.cbegin();
    // for (; it != v.cend(); ++it) {
    //     if (*it == 4) {
    //         // 输出会有错
    //         v.push_back(6);
    //     }
    //     printf("%d ", *it);
    // }
    // puts("");
    printf("size = %d\n", v.size());
    for (int i = 0; i < v.size(); ++i) {
        if (4 == v[i]) {
            v.push_back(6); // 这个 v.size() 会 【实时改变的】
            // printf("size = %d\n", v.size());
        }
        printf("%d ", v[i]);
    }
    return 0;
}
