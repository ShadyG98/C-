#include <iostream>

int main(){
    int arreglo1[5],arreglo2[5],arreglo3[10];

    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Ingrese, arreglo 1, el valor "<<i+1<<": ";
        std::cin>>arreglo1[i];
    }

        for (int i = 0; i < 5; i++)
    {
        std::cout<<"Ingrese, arreglo 2, el valor "<<i+1<<": ";
        std::cin>>arreglo2[i];
    }
    /*
        for (int i = 0; i < 10; i++)
    {
        if(i<5){
            arreglo3[i]=arreglo1[i];
        }
        if(i>=5){
            arreglo3[i]=arreglo2[i-5]; //i-5, es para quitarle y encuentre la posicion 0 en arreglo 2, si no, arranca desde una posicion que no existe
        }
    }
    */

   for (int i = 0; i < 5; i++)
   {
        arreglo3[i]=arreglo1[i];
   }

   for (int i = 0; i < 5; i++)
   {
        arreglo3[i]=arreglo1[i-5]; //i-5, es para quitarle y encuentre la posicion 0 en arreglo 2, si no, arranca desde una posicion que no existe
   }
    
    for (int i = 0; i < 10; i++)
    {
        std::cout<<i+1<<". - "<<arreglo3[i]<<"\n";
    }
    
    system("Pause");
    return 0;
}