#include <iostream>

using namespace std;

int main()
{
    // ------------------------------------------
    // 输出字符串
    // cout << "Hello world!";
    // ------------------------------------------

    // ------------------------------------------
    // 输出换行
    // cout << "Hello";
    // cout << "world!" << endl;
    // ------------------------------------------

    // ------------------------------------------
    // 链式
    // cout << "Hello world!" << endl;
    // cout << "Hello" << "world!" << endl;
    // cout << "Hello" << "world!\n";
    // cout << "Hello\nOut\nThere\n";
    // ------------------------------------------

    int num1;
    int num2;
    double num3;

    // ------------------------------------------
    // 接收控制台输入的内容
    // cout << "Enter an integer: ";
    // cin >> num1;
    // cout << "You entered: " << num1 << endl;
    // ------------------------------------------

    // ------------------------------------------
    // 接收两个从控制台输入的内容
    // cout << "Enter a first integer: ";
    // cin >> num1;

    // cout << "Enter a second integer: ";
    // cin >> num2;

    // cout << "You entered " << num1 << " and " << num2 << endl;
    // ------------------------------------------

    // ------------------------------------------
    // 链式接收多个从控制台输入的内容
    // cout << "Enter 2 integers separated with a space: ";
    // cin >> num1 >> num2;
    // cout << "You entered " << num1 << " and " << num2 << endl;
    // ------------------------------------------

    // ------------------------------------------
    // 接收浮点型数值
    // cout << "Enter a double: ";
    // cin >> num3;

    // cout << "You entered: " << num3 << endl;
    // ------------------------------------------

    // ------------------------------------------
    // 接收整型和浮点型数值
    cout << "Enter a integer: ";
    cin >> num1;

    cout << "Enter a double: ";
    cin >> num3;

    cout << "The integer is: " << num1 << endl;
    cout << "And the double is: " << num3 << endl;
    // ------------------------------------------

    return 0;
}