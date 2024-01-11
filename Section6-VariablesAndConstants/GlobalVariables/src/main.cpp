#include <iostream>

using namespace std;

int age{18}; // 全局变量
int main()
{

    int age{16}; // 局部变量

    cout << age << endl;

    return 0;
}