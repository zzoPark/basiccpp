#include<iostream>

int SimpleFunc(int a = 10)
{
    return a + 1;
}

int SimpleFunc(void)
{
    return 10;
}


int main()
{
    std::cout << SimpleFunc() << std::endl;
    // Compile error
    // 둘 중 어떤 SimpleFunc 함수를 호출할 지 알 수 없다
}
