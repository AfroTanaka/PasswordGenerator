#include <iostream>
#include <random>
using namespace std;
#define PASSWORD_LENGTH 12

/**
 * @brief Generate 12 length password consists of ascii printable characters.
 */
int main()
{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> dist(33, 126);
    cout << "This is your password: ";
    for (int i = 0; i < PASSWORD_LENGTH; i++)
        cout << (char)(dist(gen));
    cout << endl;
}