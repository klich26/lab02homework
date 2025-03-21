#include <iostream>
#include <string>
// include  iostream and string
int main()
{
    std::string name;
    // enter a name
    //вводим имя
    std::cin >> name;
	//проверка на ошибку 
    // print name
    //выводим приветсвие от @name
    
    std::cout << "hello world from " << name << std::endl;
}
