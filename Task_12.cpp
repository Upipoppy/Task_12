#include <iostream>
#include <cmath>
int main() {
    double a, b, c, y, x1, x2, x3, x4, D, t1, t2;
std:: cout<<"Введите значения параметров a, b, c для уравнения вида  ax^4 + bx^2 + c = 0:\n ";
std:: cin >> a >> b >> c;
D=pow(b, 2) - (4*a*c);
if(D<0){
    std:: cout<< "Нет действительных корней\n";
}
else if(D>=0){
t1=(-b+sqrt(D))/(2*a);
t2=(-b-sqrt(D))/(2*a);
        if(t1>=0){
            x1=sqrt(t1);
            x2=-sqrt(t1);
            std:: cout<<"Корни уравнения: " << x1 << ", " << x2 << ", " ;
        }
        else{ 
            std:: cout<<"х1, х2, ";
        }
        if(t2>=0){
            x3=sqrt(t2);
            x4=-sqrt(t2);
             std:: cout<< x3 << ", "  << x4;
        }
        else{
             std:: cout<<" x3, х4 корней не существует\n";
        }
}
return 0;
}