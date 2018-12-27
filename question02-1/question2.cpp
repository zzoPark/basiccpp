#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main()
{
    // 변수가 아닌 상수로 참조자 ref1를 23, ref2를 45로
    // 초기화하려고 하기 때문에 컴파일 에러 발생
    SwapByRef2(23, 45);

    return 0;
}
