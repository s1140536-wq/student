#include <iostream>
using namespace std;

int main()
{
    int password = 7;
    int enterKey;
    std::cout<<"輸入密碼(1-10)";
    cin >> enterKey;
    while (password != enterKey) {
        cout << "密碼錯誤，再次輸入密碼(1-10)";
        cin >> enterKey;
    }
    cout << "恭喜猜對了";

    return 0;
}