#include <iostream>
int main(){
    int lista[]={1,2,3,4,5},valor,con,inf,sup,mitad,tam;
    bool encontrado=false;
    tam=sizeof(lista)/sizeof(*lista); //un entero se guarda en 4 espacios de memoria, por eso la division en el tamaño de espacio de memoria
    regresa:
    con=0;
    inf=0;
    sup=tam;

    std::cout<<"Humano ingresa un valor de la siguiente lista: ";
    for (int i = 0; i < tam; i++)
    {
        std::cout<<lista[i]<<" ";
    }
    std::cout<<"\nIngresa el valor:";
    std::cin>>valor;

    while ( (inf<=sup) && con<tam )
    {
        mitad=(inf+sup)/2;
        if(lista[mitad]==valor){
            encontrado=true;
            break;
        }
        if(lista[mitad]>valor){
            sup=mitad;
            mitad=(inf+sup)/2;
        }
        if(lista[mitad]<valor){
            inf=mitad;
            mitad=(inf+sup)/2;
        }
        con++;
    }
    if( encontrado==false ){
        std::cout<<"Humano estupido intentalo de nuevo:\n ";
        goto regresa;
    }
    if(encontrado==true){
        std::cout<<"Bien hecho humano el valor fue encontrado en la posicion: "<<mitad+1<<", ahora dame la patita :)\n ";
        //mitad+1, es por que se encuentra en la posicion especifica, pero no es la posicion cero, por eso +1
    }


    system("pause");
    return 0;
}