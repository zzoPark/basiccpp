#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    const int count = 5;

    srand(time(NULL));
    
    for(int i = 0; i < count; i++)
    {
        // 문제에는 1 이상 100 미만이라고 되어있는데
        // 답은 그냥 rand() % 100으로 나와있다
        // rand() 함수로 생성되는 숫자는 0을 포함한다
        // 답안이 잘못 기재된 듯하다
        cout << (rand() % 99 + 1) << endl;
    }
}
