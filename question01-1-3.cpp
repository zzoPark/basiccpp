#include<iostream>


int main()
{
    int num;
    
    std::cout << "단수 입력: ";
    std::cin >> num;

    for (int i = 1; i <= 9; i++)
    {
        std::cout << num << " x " << i << " = " << num * i << std::endl;
    }
}
