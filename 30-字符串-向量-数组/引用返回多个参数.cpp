//@File    :   引用返回多个参数.cpp
//@Time    :   2022/10/02 11:13:08
//@Author  :   delicay
/*

*/
#include <bits/stdc++.h>

using namespace std;

int findString(const string &str, char c, int &cnt) {
    cnt = 0;
    int index = str.size();
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == c) {
            if (index == str.size()) {
                index = i;
            }
            ++cnt;
        }
    }
    return index;
}

int main() {
    // string str("12222456");
    int cnt = 0;
    // int index = findString("12223", '2', cnt);
    const char *str = "122233";
    int index = findString(str, '2', cnt);
    // int index = findString(str, '2', cnt);
    printf("cnt = %d\n", cnt);
    printf("index = %d\n", index);
    return 0;
}
