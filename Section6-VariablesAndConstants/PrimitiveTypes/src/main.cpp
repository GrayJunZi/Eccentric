#include <iostream>

using namespace std;

int main()
{

    // 字符类型
    char middle_initial{'j'};
    cout << "My middle initial is " << middle_initial << endl;

    // 整型
    unsigned short int exam_score{55};
    cout << "My exam score was" << exam_score << endl;

    int countries_represented{55};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    long people_in_florida{20610000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;

    long long people_on_earth{7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;

    long long distince_to_alpha_centauri{9'461'000'000'000};
    cout << "The distince to alpha centauri is " << distince_to_alpha_centauri << " kilometers" << endl;

    // 浮点型
    float car_payment{401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi{3.14159};
    cout << "PI is " << pi << endl;

    long double large_amount{2.7e120};
    cout << large_amount << " is very big number" << endl;

    // 布尔类型
    bool game_over{false};
    cout << "The value of gameOver is " << game_over << endl;

    // 溢出
    short value1{30000};
    short value2{1000};
    short product{value1 * value2};
    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;

    return 0;
}