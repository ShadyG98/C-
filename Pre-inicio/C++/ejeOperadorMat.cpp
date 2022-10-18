#include <iostream>

int main(){
    float n1,n2,suma,resta,mul,div;
    std::cout<<"Escribe un numero";
    std::cin>>n1;
    std::cout<<"Escribe otr numero";
    std::cin>>n2;

    suma = n1+n2;
    resta=n1-n2;
    mul=n1*n2;
    div=n1/n2;

    std::cout<<"Resultado de la suma="<<suma<<"\n";
    std::cout<<"Resultado de la resta="<<resta<<"\n";
    std::cout<<"Resultado de la multiplicacion="<<mul<<"\n";
    std::cout<<"Resultado de la division="<<div<<"\n";

    //std::cout<<suma;
    //std::cout<<"\n";
    system("pause");
    return 0;
}