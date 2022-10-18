#include <iostream>

int main(){

    int numero;
    regresar:
    std::cout<<"Ingresa un numero entre 1 y 5 o 6 pa terminar";
    std::cin>>numero;

    switch(numero)
    { 
        case 1:
            std::cout<<"Presionaste el numero uno\n";
            goto regresar;
            break;
        case 2:
            std::cout<<"Presionaste el numero uno\n";
            goto regresar;
            break;
        case 3:
            std::cout<<"Presionaste el numero dos\n";
            goto regresar;
            break;
        case 4:
            std::cout<<"Presionaste el numero tres\n";
            goto regresar;
            break;

        case 5:
            std::cout<<"Presionaste el numero cuatro\n";
            goto regresar;
            break;

        case 6:
            std::cout<<"Presionaste el numero cinco\n";
            system("Pause");
            return 0;
            break;
        
        default:
            std::cout<<"Dije entre 1 y 5 o 6 para salir\n";
            break;
    }
    system("Pause");
    return 0;
}