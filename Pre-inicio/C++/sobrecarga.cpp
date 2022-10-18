#include <iostream>
class Fecha{
    private:
        int dia,mes,anio;
    public:
        Fecha(int _dia,int _mes,int _anio);
        Fecha(long _fecha);
        void mostrarFecha();
};
Fecha::Fecha(int _dia,int _mes,int _anio){
    dia=_dia;
    mes=_mes;
    anio=_anio;
}
Fecha::Fecha(long _fecha){
    anio=(_fecha/10000); //ésto es complicado de explicar, pero es como correr comas por posiciones en el que se encuentran los digitos de la fecha
    mes=((_fecha-anio*10000)/100); //https://www.youtube.com/watch?v=J4Z4KlZazwU&list=PLmmY5uyZGOyu6do1uQ7JKshTIPHUYBBp8&index=25
    dia=(_fecha-anio*10000-mes*100);
}
void Fecha::mostrarFecha(){
    std::cout<<dia<<"/"<<mes<<"/"<<anio<<"\n";
}
int main(){
    Fecha fhoy(10,10,2020);
    Fecha fhoy2(20201010);
    fhoy.mostrarFecha();
    fhoy2.mostrarFecha();
    system("pause");
    return 0;
}