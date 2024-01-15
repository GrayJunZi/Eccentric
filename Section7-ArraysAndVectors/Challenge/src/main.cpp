#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 声明两个整型向量
    vector<int> vector1;
    vector<int> vector2;

    // 为vector1添加10和20
    vector1.push_back(10);
    vector1.push_back(20);

    // 显示vector1的元素和大小
    cout << "\nvector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements " << endl;

    // 为vector2添加100和200
    vector2.push_back(100);
    vector2.push_back(200);

    // 显示vector2的元素和大小
    cout << "\nvector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "vector2 contains " << vector2.size() << " elements " << endl;

    // 声明二维数组
    vector<vector<int>> vector_2d;

    // 将vector1和vector2添加值vector_2d中
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // 显示vector_2d的元素
    cout << "\nvector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    // 修改vector1的值为1000
    vector1.at(0) = 1000;

    // 显示vector_2d的值
    cout << "\nvector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << "\nvector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << endl;

    return 0;
}