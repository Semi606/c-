#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    
    cout <<"дано: прямокутник в межах х = 2 і у = 1";
    cout<<"Введіть значення х: ";
    cin>>x;
    cout<<"Введіть значення y: ";
    cin>>y;
    
    if (x>=0 && x<=2){
        if (y>=0 && y<=1){
            cout<<"Вітаю! Ваша точка належить прямокутнику!";
            return 0;
        }else{
            cout <<"Дана точка не належить заданому прямокутнику";
            return 0;
        }
    }else{
        cout <<"Дана точка не належить заданому прямокутнику";
        return 0;
    }

    return 0;
}
