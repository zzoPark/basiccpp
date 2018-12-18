#include<iostream>


int main()
{
    int answer = 0, num;

    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << "번째 정수 입력: ";
        std::cin >> num;
        answer += num;
    }
    
    std::cout << "합계: " << answer << std::endl;
}
