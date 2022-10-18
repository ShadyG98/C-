#include <iostream>
#include <math.h>

int main(){
    float x,y,res;
    std::cout<<"Ingrese lo solicitado \n";
    std::cout<<"Valor de x: "; std::cin>>x;
    std::cout<<"Valor de y: ";std::cin>>y;
    //De la libreria Math, raiz cuadrada, pow es potencia
    res = (sqrt(x)) / (pow(x,2)-1);
    
    std::cout<<"El resultado es: "<<res<<"\n";
    system("Pause");
    return 0;
}