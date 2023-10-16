#include <iostream>

double abs(double df){ // модуль
    if (df<0){
        return -df;
    }
    return df;
}

void out(bool answer){ // вывод ответа
    if (answer){
        std::cout << "Point in our place" << std::endl;
    } else {
        std::cout << "Point not in our place" << std::endl;
    }
}

int main(){
    double x, y; // координаты точки
    std::cout << "Input double x, y:";
    std::cin >> x >> y; // ввод координат
    if ((x>2 || x<-2) || (y>2 || y<-2)){ // проверяем на вхождение в область 4 на 4 с цетром в (0, 0), где лежит наша область.
        out(false);
    } else if (y>0){ // проверка на нахождение точки выше оси Ох
        x=abs(x); // область симметрична
        double S;
        S=0.5*1.0*y+0,5*2.0*x; // площадь двух треугольников: (0,0), (х, у), (1, 0) и (0,0), (х, у), (0, 2)
        out(S<=1);// сравниваем с площадью треугольника области: (0,0), (0,2), (1,0)
    } else { // точка ниже и на оси Ох
        double r_q;
        r_q=x*x+y*y; // расстояние между (х,у) и (0,0) в квадрате
        out(r_q<=4); // сравнение с радиусом окружности в квадрате
    }
    return 0;
}