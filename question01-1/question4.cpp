#include<iostream>


int main()
{
    int salery = 50, price, answer;

    while(1)
    {
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin >> price;

        if (price == -1 )
            break;

        answer = salery + price * 0.12;
        std::cout << "이번 달 급여: " << answer << "만원" << std::endl;
    }
    
    std::cout << "프로그램을 종료합니다." << std::endl;
}
