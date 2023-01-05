//@File    :   vector初始化.cpp
//@Time    :   2022/10/02 09:43:20
//@Author  :   delicay
/*

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    // int arr[] = {0, 1, 2, 3, 4};
    vector<int> arr{1, 2, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    // vector<int> v(arr, arr + len);
    vector<int> v(arr.begin(), arr.end());
    for (auto &item : v) {
        printf("%d ", item);
    }
    return 0;
}
