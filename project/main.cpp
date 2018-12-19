#include <iostream>

using namespace std;

const int NAME_LEN = 20;
const int ACCOUNT_NUM = 100;

void PrintMenu();
void GetMenu(int &menu);
void CreateAccount();
void Deposit();
void Withdraw();
void ShowInfo();

enum {CREATE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

typedef struct
{
    int id;
    char name[NAME_LEN];
    int money;
} Account;

Account accounts[ACCOUNT_NUM];
int created = 0;

int main()
{
    int menu = 0;
    while(1)
    {
        PrintMenu();
        GetMenu(menu);
        switch(menu)
        {
            case CREATE:
                  CreateAccount();
                  break;
            case DEPOSIT:
                  Deposit();
                  break;
            case WITHDRAW:
                  Withdraw();
                  break;
            case INQUIRE:
                  ShowInfo();
                  break;
            case EXIT:
                  cout << "프로그램을 종료합니다." << endl;
                  return 0;
            default:
                  cout << "잘못된 입력입니다." << endl;
        }
    }
}


void PrintMenu()
{
    cout << "-----Menu-----" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입  금" << endl;
    cout << "3. 출  금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
}

void GetMenu(int &menu)
{
    cout << "선택: ";
    cin >> menu;
    cout << endl;
}

void CreateAccount()
{
    cout << "[계좌개설]" << endl;
    cout << "계좌ID: ";
    cin >> accounts[created].id;
    cout << "이름: ";
    cin >> accounts[created].name;
    cout << "입금액: ";
    cin >> accounts[created].money;
    cout << endl;

    created++;
}

void Deposit()
{
    int id, money;
    cout << "[입  금]" << endl;
    cout << "계좌ID: ";
    cin >> id;
    cout << "입금액: ";
    cin >> money;

    for(int i=0; i<created; i++)
    {
        if(accounts[i].id == id)
        {
            accounts[i].money += money;
            cout << "입금완료" << endl << endl;
            return;
        }
    }
    
    cout << "잘못된 계좌번호입니다." << endl << endl;
}

void Withdraw()
{
    int id, money;
    cout << "[출  금]" << endl;
    cout << "계좌ID: ";
    cin >> id;
    cout << "출금액: ";
    cin >> money;

    for(int i=0; i<created; i++)
    {
        if(accounts[i].id == id)
        {
            accounts[i].money -= money;
            cout << "출금완료" << endl << endl;
            return;
        }
    }
    
    cout << "잘못된 계좌번호입니다." << endl << endl;
}

void ShowInfo()
{
    for(int i=0; i<created; i++)
    {
        cout << "계좌ID: "
            << accounts[i].id << endl;
        cout << "이름: "
            << accounts[i].name << endl;
        cout << "입금액: "
           << accounts[i].money << endl;
        cout << endl;
    }  
}
