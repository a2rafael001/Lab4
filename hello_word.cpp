#include <iostream>
// Delete using namespace std; 

int main(){
    std::string name;//Переменная,используем для хранения имени пользователя
    std:: cout<<"Введите имя пользоваетеля:";//вывод на консоль сообщения
    std::cin>>name;//ввод имя пользователя
    std:: cout<<"Hello word from"<<name<<std::endl;//вывод сообщения
    return 0;
}