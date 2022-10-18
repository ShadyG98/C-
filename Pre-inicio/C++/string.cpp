#include <iostream>

int main(){
    char programador[]="programador";
    //char novato[]={'n','o','v','a','t','o'};
    char nombre[5];
    std::cout<<programador<<"\n"<<sizeof(programador)<<"\n";
    //std::cout<<novato<<"\n"<<sizeof(novato)<<"\n";
    std::cout<<"Humano ingresa tu nombre: ";
    //std::cin>>nombre;//eugenio chaparro --> roba espacios de memoria y sobrepasa los 5 del char nombre
    //gets(nombre); --> lo trae completo pero sigue robando espacios de memoria
    std::cin.getline(nombre,sizeof(nombre),'\n'); //Recuerda que el espacio tambien cuenta, el tercer argumentos, '\n' es para finalizar la lectura, ademas de los primeros dos
    std::cout<<nombre<<"\n";
    system("pause");
    return 0;
}