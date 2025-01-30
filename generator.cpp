#include <iostream>
#include <random>
using namespace std;
#define PASSWORD_LENGTH 12

/**
 * @brief Generate 12 length password consists of 0 to 9.
 */
int main()
{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> dist(0, 9);
    cout << "This is your password: ";
    for (int i = 0; i < PASSWORD_LENGTH; i++)
        cout << dist(gen);
    cout << endl;
}