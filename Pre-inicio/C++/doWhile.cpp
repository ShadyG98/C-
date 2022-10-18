#include <iostream>

int main(){

    char letra;
    /*
        while(letra=='a');
    {
        std::cout<<"Presiona la letra a ";
        std::cin>>letra;
    }
    */

    do
    {
        std::cout<<"Presiona la letra a ";
        std::cin>>letra;
    }while (letra=='a');

    system("Pause");
    return 0;
}