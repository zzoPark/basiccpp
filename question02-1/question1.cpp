#include <iostream>
using namespace std;

inline void increase(int &num)
{
    num = num + 1;
}

inline void changeSign(int &num)
{
    num = -num;
}

int main()
{
    int num;
    cout << "Original number: ";
    cin >> num;

    for (int i=0; i<10; i++)
    {
        increase(num);
        cout << "Added 1: " << num << endl;
    }

    changeSign(num);
    cout << "Sign changed: " << num << endl;

    return 0;
}
