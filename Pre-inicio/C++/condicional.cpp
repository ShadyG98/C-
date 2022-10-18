#include <iostream>

int main(){
    int numeroIngresado, numeroAencontrar=5;

    std::cout<<"Ingresa el numero: ";
    std::cin>>numeroIngresado;
    if(numeroIngresado==numeroAencontrar){
        std::cout<<"bien bien\n";
    }
    else{
        std::cout<<"segui participando \n";
    }
    system("Pause");
    return 0;
}