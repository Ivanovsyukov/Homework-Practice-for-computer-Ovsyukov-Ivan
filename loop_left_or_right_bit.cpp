#include <iostream>
#include <string>

int main(){
    int look, kol; // куда сдвиг, величина сдвига
    std::string str; // начальная строка
    std::string res; // результат
    std::cout << "Input bite string: ";
    std::cin >> str; // ввод битовой строки
    std::cout << "Input:" << std::endl << "1 - left change" << std::endl << "2 - right change" << std::endl;
    std::cin >> look;//ввод вида сдвига(чисто номинально)
    std::cout << "Input integer len bit change: ";
    std::cin >> kol;// ввод величины сдвига
    int len=str.size(); //длина начальной строки
    for (int i=kol%len; i<len; ++i){ //работа с перемещением элементов строки. Остаток от величины сдвига - если сдвиг больше длины начальной строки.
        res.push_back(str[i]);
    }
    for (int i=0; i<kol%len; ++i){
        res.push_back(str[i]);
    }
    std::cout << res << std::endl; // вывод итога
    return 0;
}