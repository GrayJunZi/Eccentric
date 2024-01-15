#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 创建一个空向量
    // vector<char> vowels;

    // 创建具有5个元素的向量并全部初始化为0
    // vector<char> vowels(5);

    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    // 创建具有3个元素的向量并全部初始化为100
    // vector<int> test_scores (3,100);

    vector<int> test_scores{100, 98, 89};

    // 使用数组语法访问元素
    cout << "\nTest scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    // 使用向量语法访问元素
    cout << "\nTest scores using vector syntax:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are" << test_scores.size() << " scores in the vector" << endl;

    cout << "\nEnter 3 test scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    // 为向量添加元素
    cout << "Enter a test score to add to the vector: ";
    int score_to_add{0};
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nEnter one more test score to add to vector: ";
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;

    // 引发异常 向量越界
    // cout << "This should cause an exception!!" << test_scores.at(10);

    // 二维向量
    vector<vector<int>> movie_ratings{
        {1, 2, 3, 4},
        {2, 3, 4, 1},
        {3, 4, 1, 2},
        {4, 1, 2, 3},
    };

    // 使用数组语法访问二维向量元素
    cout << "\nThere are the movie rating for reviewer #1 using array syntax: " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    // 使用向量语法访问二维向量元素
    cout << "\nThere are the movie rating for reviewer #1 using vector syntax: " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(2).at(0) << endl;
    cout << movie_ratings.at(3).at(0) << endl;

    return 0;
}