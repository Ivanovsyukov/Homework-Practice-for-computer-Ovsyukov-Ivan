#include <iostream>
int main(){
	int cou;//количество ёлок
        std::cout << "How many pine you want?"<< std::endl;
        std::cin >> cou;
	int len;//расстояние между елками
        std::cout << "How many distans between your pine?"<< std::endl;
        std::cin >> len;
	int ct;//количество треугольникв у ёлки
	std::cout << "How many triangle in your pins?"<< std::endl;
	std::cin >> ct;
	int small;//высота малого треугольника
	std::cout << "How many stars in your small triangle?"<< std::endl;
        std::cin >> small;
	int big;//высота большого треугольника
        std::cout << "How many stars in your big triangle?"<< std::endl;
        std::cin >> big;
	int change;//изменение размеров
	change=(big-small)/(ct-1);
	int pine[ct];//массив размеров частей елки
	for (int i=0; i<ct-1; ++i){
		pine[i]=small+(change*i);
	}
	pine[ct-1]=big;
/*	for (int i=0; i<ct; ++i){
                std::cout << pine[i] << std::endl;
        }
*/	int n, l_p, l_z, r_p, r_z;//вводим переменные для работы: высота треугольника, кол-во пробелов слева, кол-во звезд слева, кол-во пробелов справа, количество звезд справа
	for (int kol=0; kol<ct; ++kol){
		n=pine[kol];
		change=big-n;
		for (int i=0; i<n; ++i){
			for (int j=0; j<cou; ++j){
				l_p=n-i+change;
				l_z=i;
				r_p=n-i+change+len;
				r_z=i;
				while (l_p!=0){
					std::cout << " ";
					l_p-=1;
				}
				while (l_z!=0){
               		        	std::cout << "*";
       		        	        l_z-=1;
	        	        }
				std::cout << "*";
				while (r_z!=0){
	                	        std::cout << "*";
                		        r_z-=1;
        	       		}
	       	        	while (r_p!=0){
                        		std::cout << " ";
                	       		r_p-=1;
        	       		}
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
