#include<iostream>
#include "question.h"

void BestComImpl::SimpleFunc(void)
{
    std::cout << "BestCom이 정의한 함수" << std::endl;
    PrettyFunc();
    ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void)
{
    std::cout << "So pretty!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}

