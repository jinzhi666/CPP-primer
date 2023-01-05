//@File    :   StrCstr.cpp
//@Time    :   2022/10/02 00:16:37
//@Author  :   delicay
/*

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    str.resize(100);
    str = "123456789000123132";
    // charptr 是指向【一个以空字符结束的字符数组】，再次使用 str.c_str() 会【覆盖】【这个字符数组】
    const char *charptr = str.c_str();
    int len = strlen(charptr);
    // str.shrink_to_fit();
    // 解决方法：应该再拷贝一份
    // 错误
    // const char *charptrBackup = charptr;
    // 正确应该是使用 memcpy()
    // 错误定义？
    // char *charptrBackup = nullptr;
    // 正确定义1
    // char charptrBackup[50];
    // 正确定义2
    char *charptrBackup = new char[len];
    memset(charptrBackup, 0, (len) * sizeof(char));
    // 正确定义3
    string strBackup;
    strBackup.resize(len);
    // 获取字符串长度有 2 种写法
    // 字符串指针不能用 sizeof(charptr) / sizeof(charptr[0]); 因为一个类型【是char*】另外一个是【char】
    memcpy(charptrBackup, charptr, strlen(charptr) + 1);
    memcpy(&strBackup[0], charptr, strlen(charptr) + 1);

    printf("charptr = %s\n", charptr);              // 123
    printf("charptrBackup = %s\n", charptrBackup);  // 123
    printf("strBackup = %s\n", strBackup.data());   // 123
    str += "113";
    printf("charptr = %s\n", charptr);              // 会有变化！
    printf("charptrBackup = %s\n", charptrBackup);  // 123
    printf("strBackup = %s\n", strBackup.data());   // 123
    delete[] charptrBackup;
    return 0;
}
